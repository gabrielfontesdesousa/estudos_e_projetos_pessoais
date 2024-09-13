<template>  
<section>
    <div>
        <p>Meu conteúdo</p>
        <div>
            <input v-model="nome" placeholder="Digite seu nome">
            <p>Seu nome é: {{ nome }}</p>
            <button @click="submeterForumlario()">procurar usuário</button>
            <p v-if="url">
                {{ url  }}
            </p>
            <p v-else="url">
                {{ url v  }}
                voce ainda nao procurou usuarios</p>
        </div>
    </div>
</section>
</template>
<script>
export default{
    name: 'ContentPage',
    data(){
        return{
            nome: '',
            url: ''
        };
    
    },
    methods: {
        submeterForumlario(){
            let response =
            fetch(`https://api.github.com/users/${this.nome}`).then((data) => {
                this.url = data.url
                console.log(data.url);
            });
        }

    }
}
</script>
<style>


</style>