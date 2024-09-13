<template>
  <NavPage>

  </NavPage>
  <ContentPage></ContentPage>
  <FooterPage></FooterPage>
</template>

<script>
import NavPage from './components/default/NavPage.vue';
import FooterPage from './components/default/FooterPage.vue';
import ContentPage from './components/default/ContentPage.vue';

export default{
  name: 'App',
  components: {
    NavPage, ContentPage, FooterPage
  }
}
</script>

<style scoped>

</style>
