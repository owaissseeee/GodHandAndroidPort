#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r100_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r100
{
// Function: func_0079B9A0
// Address: 0x79b9a0 - 0x79bd30
void func_0079B9A0_0x79b9a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079B9A0_0x79b9a0");
#endif

    switch (ctx->pc) {
        case 0x79b9a0u: goto label_79b9a0;
        case 0x79b9a4u: goto label_79b9a4;
        case 0x79b9a8u: goto label_79b9a8;
        case 0x79b9acu: goto label_79b9ac;
        case 0x79b9b0u: goto label_79b9b0;
        case 0x79b9b4u: goto label_79b9b4;
        case 0x79b9b8u: goto label_79b9b8;
        case 0x79b9bcu: goto label_79b9bc;
        case 0x79b9c0u: goto label_79b9c0;
        case 0x79b9c4u: goto label_79b9c4;
        case 0x79b9c8u: goto label_79b9c8;
        case 0x79b9ccu: goto label_79b9cc;
        case 0x79b9d0u: goto label_79b9d0;
        case 0x79b9d4u: goto label_79b9d4;
        case 0x79b9d8u: goto label_79b9d8;
        case 0x79b9dcu: goto label_79b9dc;
        case 0x79b9e0u: goto label_79b9e0;
        case 0x79b9e4u: goto label_79b9e4;
        case 0x79b9e8u: goto label_79b9e8;
        case 0x79b9ecu: goto label_79b9ec;
        case 0x79b9f0u: goto label_79b9f0;
        case 0x79b9f4u: goto label_79b9f4;
        case 0x79b9f8u: goto label_79b9f8;
        case 0x79b9fcu: goto label_79b9fc;
        case 0x79ba00u: goto label_79ba00;
        case 0x79ba04u: goto label_79ba04;
        case 0x79ba08u: goto label_79ba08;
        case 0x79ba0cu: goto label_79ba0c;
        case 0x79ba10u: goto label_79ba10;
        case 0x79ba14u: goto label_79ba14;
        case 0x79ba18u: goto label_79ba18;
        case 0x79ba1cu: goto label_79ba1c;
        case 0x79ba20u: goto label_79ba20;
        case 0x79ba24u: goto label_79ba24;
        case 0x79ba28u: goto label_79ba28;
        case 0x79ba2cu: goto label_79ba2c;
        case 0x79ba30u: goto label_79ba30;
        case 0x79ba34u: goto label_79ba34;
        case 0x79ba38u: goto label_79ba38;
        case 0x79ba3cu: goto label_79ba3c;
        case 0x79ba40u: goto label_79ba40;
        case 0x79ba44u: goto label_79ba44;
        case 0x79ba48u: goto label_79ba48;
        case 0x79ba4cu: goto label_79ba4c;
        case 0x79ba50u: goto label_79ba50;
        case 0x79ba54u: goto label_79ba54;
        case 0x79ba58u: goto label_79ba58;
        case 0x79ba5cu: goto label_79ba5c;
        case 0x79ba60u: goto label_79ba60;
        case 0x79ba64u: goto label_79ba64;
        case 0x79ba68u: goto label_79ba68;
        case 0x79ba6cu: goto label_79ba6c;
        case 0x79ba70u: goto label_79ba70;
        case 0x79ba74u: goto label_79ba74;
        case 0x79ba78u: goto label_79ba78;
        case 0x79ba7cu: goto label_79ba7c;
        case 0x79ba80u: goto label_79ba80;
        case 0x79ba84u: goto label_79ba84;
        case 0x79ba88u: goto label_79ba88;
        case 0x79ba8cu: goto label_79ba8c;
        case 0x79ba90u: goto label_79ba90;
        case 0x79ba94u: goto label_79ba94;
        case 0x79ba98u: goto label_79ba98;
        case 0x79ba9cu: goto label_79ba9c;
        case 0x79baa0u: goto label_79baa0;
        case 0x79baa4u: goto label_79baa4;
        case 0x79baa8u: goto label_79baa8;
        case 0x79baacu: goto label_79baac;
        case 0x79bab0u: goto label_79bab0;
        case 0x79bab4u: goto label_79bab4;
        case 0x79bab8u: goto label_79bab8;
        case 0x79babcu: goto label_79babc;
        case 0x79bac0u: goto label_79bac0;
        case 0x79bac4u: goto label_79bac4;
        case 0x79bac8u: goto label_79bac8;
        case 0x79baccu: goto label_79bacc;
        case 0x79bad0u: goto label_79bad0;
        case 0x79bad4u: goto label_79bad4;
        case 0x79bad8u: goto label_79bad8;
        case 0x79badcu: goto label_79badc;
        case 0x79bae0u: goto label_79bae0;
        case 0x79bae4u: goto label_79bae4;
        case 0x79bae8u: goto label_79bae8;
        case 0x79baecu: goto label_79baec;
        case 0x79baf0u: goto label_79baf0;
        case 0x79baf4u: goto label_79baf4;
        case 0x79baf8u: goto label_79baf8;
        case 0x79bafcu: goto label_79bafc;
        case 0x79bb00u: goto label_79bb00;
        case 0x79bb04u: goto label_79bb04;
        case 0x79bb08u: goto label_79bb08;
        case 0x79bb0cu: goto label_79bb0c;
        case 0x79bb10u: goto label_79bb10;
        case 0x79bb14u: goto label_79bb14;
        case 0x79bb18u: goto label_79bb18;
        case 0x79bb1cu: goto label_79bb1c;
        case 0x79bb20u: goto label_79bb20;
        case 0x79bb24u: goto label_79bb24;
        case 0x79bb28u: goto label_79bb28;
        case 0x79bb2cu: goto label_79bb2c;
        case 0x79bb30u: goto label_79bb30;
        case 0x79bb34u: goto label_79bb34;
        case 0x79bb38u: goto label_79bb38;
        case 0x79bb3cu: goto label_79bb3c;
        case 0x79bb40u: goto label_79bb40;
        case 0x79bb44u: goto label_79bb44;
        case 0x79bb48u: goto label_79bb48;
        case 0x79bb4cu: goto label_79bb4c;
        case 0x79bb50u: goto label_79bb50;
        case 0x79bb54u: goto label_79bb54;
        case 0x79bb58u: goto label_79bb58;
        case 0x79bb5cu: goto label_79bb5c;
        case 0x79bb60u: goto label_79bb60;
        case 0x79bb64u: goto label_79bb64;
        case 0x79bb68u: goto label_79bb68;
        case 0x79bb6cu: goto label_79bb6c;
        case 0x79bb70u: goto label_79bb70;
        case 0x79bb74u: goto label_79bb74;
        case 0x79bb78u: goto label_79bb78;
        case 0x79bb7cu: goto label_79bb7c;
        case 0x79bb80u: goto label_79bb80;
        case 0x79bb84u: goto label_79bb84;
        case 0x79bb88u: goto label_79bb88;
        case 0x79bb8cu: goto label_79bb8c;
        case 0x79bb90u: goto label_79bb90;
        case 0x79bb94u: goto label_79bb94;
        case 0x79bb98u: goto label_79bb98;
        case 0x79bb9cu: goto label_79bb9c;
        case 0x79bba0u: goto label_79bba0;
        case 0x79bba4u: goto label_79bba4;
        case 0x79bba8u: goto label_79bba8;
        case 0x79bbacu: goto label_79bbac;
        case 0x79bbb0u: goto label_79bbb0;
        case 0x79bbb4u: goto label_79bbb4;
        case 0x79bbb8u: goto label_79bbb8;
        case 0x79bbbcu: goto label_79bbbc;
        case 0x79bbc0u: goto label_79bbc0;
        case 0x79bbc4u: goto label_79bbc4;
        case 0x79bbc8u: goto label_79bbc8;
        case 0x79bbccu: goto label_79bbcc;
        case 0x79bbd0u: goto label_79bbd0;
        case 0x79bbd4u: goto label_79bbd4;
        case 0x79bbd8u: goto label_79bbd8;
        case 0x79bbdcu: goto label_79bbdc;
        case 0x79bbe0u: goto label_79bbe0;
        case 0x79bbe4u: goto label_79bbe4;
        case 0x79bbe8u: goto label_79bbe8;
        case 0x79bbecu: goto label_79bbec;
        case 0x79bbf0u: goto label_79bbf0;
        case 0x79bbf4u: goto label_79bbf4;
        case 0x79bbf8u: goto label_79bbf8;
        case 0x79bbfcu: goto label_79bbfc;
        case 0x79bc00u: goto label_79bc00;
        case 0x79bc04u: goto label_79bc04;
        case 0x79bc08u: goto label_79bc08;
        case 0x79bc0cu: goto label_79bc0c;
        case 0x79bc10u: goto label_79bc10;
        case 0x79bc14u: goto label_79bc14;
        case 0x79bc18u: goto label_79bc18;
        case 0x79bc1cu: goto label_79bc1c;
        case 0x79bc20u: goto label_79bc20;
        case 0x79bc24u: goto label_79bc24;
        case 0x79bc28u: goto label_79bc28;
        case 0x79bc2cu: goto label_79bc2c;
        case 0x79bc30u: goto label_79bc30;
        case 0x79bc34u: goto label_79bc34;
        case 0x79bc38u: goto label_79bc38;
        case 0x79bc3cu: goto label_79bc3c;
        case 0x79bc40u: goto label_79bc40;
        case 0x79bc44u: goto label_79bc44;
        case 0x79bc48u: goto label_79bc48;
        case 0x79bc4cu: goto label_79bc4c;
        case 0x79bc50u: goto label_79bc50;
        case 0x79bc54u: goto label_79bc54;
        case 0x79bc58u: goto label_79bc58;
        case 0x79bc5cu: goto label_79bc5c;
        case 0x79bc60u: goto label_79bc60;
        case 0x79bc64u: goto label_79bc64;
        case 0x79bc68u: goto label_79bc68;
        case 0x79bc6cu: goto label_79bc6c;
        case 0x79bc70u: goto label_79bc70;
        case 0x79bc74u: goto label_79bc74;
        case 0x79bc78u: goto label_79bc78;
        case 0x79bc7cu: goto label_79bc7c;
        case 0x79bc80u: goto label_79bc80;
        case 0x79bc84u: goto label_79bc84;
        case 0x79bc88u: goto label_79bc88;
        case 0x79bc8cu: goto label_79bc8c;
        case 0x79bc90u: goto label_79bc90;
        case 0x79bc94u: goto label_79bc94;
        case 0x79bc98u: goto label_79bc98;
        case 0x79bc9cu: goto label_79bc9c;
        case 0x79bca0u: goto label_79bca0;
        case 0x79bca4u: goto label_79bca4;
        case 0x79bca8u: goto label_79bca8;
        case 0x79bcacu: goto label_79bcac;
        case 0x79bcb0u: goto label_79bcb0;
        case 0x79bcb4u: goto label_79bcb4;
        case 0x79bcb8u: goto label_79bcb8;
        case 0x79bcbcu: goto label_79bcbc;
        case 0x79bcc0u: goto label_79bcc0;
        case 0x79bcc4u: goto label_79bcc4;
        case 0x79bcc8u: goto label_79bcc8;
        case 0x79bcccu: goto label_79bccc;
        case 0x79bcd0u: goto label_79bcd0;
        case 0x79bcd4u: goto label_79bcd4;
        case 0x79bcd8u: goto label_79bcd8;
        case 0x79bcdcu: goto label_79bcdc;
        case 0x79bce0u: goto label_79bce0;
        case 0x79bce4u: goto label_79bce4;
        case 0x79bce8u: goto label_79bce8;
        case 0x79bcecu: goto label_79bcec;
        case 0x79bcf0u: goto label_79bcf0;
        case 0x79bcf4u: goto label_79bcf4;
        case 0x79bcf8u: goto label_79bcf8;
        case 0x79bcfcu: goto label_79bcfc;
        case 0x79bd00u: goto label_79bd00;
        case 0x79bd04u: goto label_79bd04;
        case 0x79bd08u: goto label_79bd08;
        case 0x79bd0cu: goto label_79bd0c;
        case 0x79bd10u: goto label_79bd10;
        case 0x79bd14u: goto label_79bd14;
        case 0x79bd18u: goto label_79bd18;
        case 0x79bd1cu: goto label_79bd1c;
        case 0x79bd20u: goto label_79bd20;
        case 0x79bd24u: goto label_79bd24;
        case 0x79bd28u: goto label_79bd28;
        case 0x79bd2cu: goto label_79bd2c;
        default: break;
    }

    ctx->pc = 0x79b9a0u;

label_79b9a0:
    // 0x79b9a0: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x79b9a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
label_79b9a4:
    // 0x79b9a4: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x79b9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_79b9a8:
    // 0x79b9a8: 0x8c432f84  lw          $v1, 0x2F84($v0)
    ctx->pc = 0x79b9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12164)));
label_79b9ac:
    // 0x79b9ac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79b9acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79b9b0:
    // 0x79b9b0: 0x7fb200f0  sq          $s2, 0xF0($sp)
    ctx->pc = 0x79b9b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 18));
label_79b9b4:
    // 0x79b9b4: 0x7fb300e0  sq          $s3, 0xE0($sp)
    ctx->pc = 0x79b9b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 19));
label_79b9b8:
    // 0x79b9b8: 0x7fb400d0  sq          $s4, 0xD0($sp)
    ctx->pc = 0x79b9b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 20));
label_79b9bc:
    // 0x79b9bc: 0x7fb500c0  sq          $s5, 0xC0($sp)
    ctx->pc = 0x79b9bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 21));
label_79b9c0:
    // 0x79b9c0: 0x7fb600b0  sq          $s6, 0xB0($sp)
    ctx->pc = 0x79b9c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 22));
label_79b9c4:
    // 0x79b9c4: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x79b9c4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_79b9c8:
    // 0x79b9c8: 0x7fb700a0  sq          $s7, 0xA0($sp)
    ctx->pc = 0x79b9c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 23));
label_79b9cc:
    // 0x79b9cc: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x79b9ccu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79b9d0:
    // 0x79b9d0: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x79b9d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_79b9d4:
    // 0x79b9d4: 0xe7b40120  swc1        $f20, 0x120($sp)
    ctx->pc = 0x79b9d4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_79b9d8:
    // 0x79b9d8: 0x3c1e0060  lui         $fp, 0x60
    ctx->pc = 0x79b9d8u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)96 << 16));
label_79b9dc:
    // 0x79b9dc: 0x7fb00110  sq          $s0, 0x110($sp)
    ctx->pc = 0x79b9dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 16));
label_79b9e0:
    // 0x79b9e0: 0x7fb10100  sq          $s1, 0x100($sp)
    ctx->pc = 0x79b9e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 17));
label_79b9e4:
    // 0x79b9e4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x79b9e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_79b9e8:
    // 0x79b9e8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x79b9e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_79b9ec:
    // 0x79b9ec: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x79b9ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_79b9f0:
    // 0x79b9f0: 0xc0b56a8  jal         func_2D5AA0
label_79b9f4:
    if (ctx->pc == 0x79B9F4u) {
        ctx->pc = 0x79B9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B9F0u;
        // 0x79b9f4: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B9F8u;
        goto label_79b9f8;
    }
    ctx->pc = 0x79B9F0u;
    SET_GPR_U32(ctx, 31, 0x79B9F8u);
    ctx->pc = 0x79B9F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B9F0u;
    // 0x79b9f4: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79B9F0u, 0x79B9F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B9F8u;
label_79b9f8:
    // 0x79b9f8: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x79b9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_79b9fc:
    // 0x79b9fc: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x79b9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_79ba00:
    // 0x79ba00: 0xa3a20030  sb          $v0, 0x30($sp)
    ctx->pc = 0x79ba00u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 2));
label_79ba04:
    // 0x79ba04: 0x27b70040  addiu       $s7, $sp, 0x40
    ctx->pc = 0x79ba04u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_79ba08:
    // 0x79ba08: 0xa3a30040  sb          $v1, 0x40($sp)
    ctx->pc = 0x79ba08u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 3));
label_79ba0c:
    // 0x79ba0c: 0x27b30050  addiu       $s3, $sp, 0x50
    ctx->pc = 0x79ba0cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_79ba10:
    // 0x79ba10: 0xa3a00050  sb          $zero, 0x50($sp)
    ctx->pc = 0x79ba10u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 80), (uint8_t)GPR_U32(ctx, 0));
label_79ba14:
    // 0x79ba14: 0x27b40070  addiu       $s4, $sp, 0x70
    ctx->pc = 0x79ba14u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_79ba18:
    // 0x79ba18: 0x27b20060  addiu       $s2, $sp, 0x60
    ctx->pc = 0x79ba18u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_79ba1c:
    // 0x79ba1c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x79ba1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_79ba20:
    // 0x79ba20: 0xc0a572a  jal         func_295CA8
label_79ba24:
    if (ctx->pc == 0x79BA24u) {
        ctx->pc = 0x79BA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BA20u;
        // 0x79ba24: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79BA28u;
        goto label_79ba28;
    }
    ctx->pc = 0x79BA20u;
    SET_GPR_U32(ctx, 31, 0x79BA28u);
    ctx->pc = 0x79BA24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BA20u;
    // 0x79ba24: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x79BA20u, 0x79BA28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BA28u;
label_79ba28:
    // 0x79ba28: 0x2c2800a  movz        $s0, $s6, $v0
    ctx->pc = 0x79ba28u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 22));
label_79ba2c:
    // 0x79ba2c: 0xc0a572a  jal         func_295CA8
label_79ba30:
    if (ctx->pc == 0x79BA30u) {
        ctx->pc = 0x79BA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BA2Cu;
        // 0x79ba30: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79BA34u;
        goto label_79ba34;
    }
    ctx->pc = 0x79BA2Cu;
    SET_GPR_U32(ctx, 31, 0x79BA34u);
    ctx->pc = 0x79BA30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BA2Cu;
    // 0x79ba30: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x79BA2Cu, 0x79BA34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BA34u;
label_79ba34:
    // 0x79ba34: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x79ba34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_79ba38:
    // 0x79ba38: 0x27c4ea60  addiu       $a0, $fp, -0x15A0
    ctx->pc = 0x79ba38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4294961760));
label_79ba3c:
    // 0x79ba3c: 0x62800a  movz        $s0, $v1, $v0
    ctx->pc = 0x79ba3cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
label_79ba40:
    // 0x79ba40: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79ba40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79ba44:
    // 0x79ba44: 0xc0b0aa6  jal         func_2C2A98
label_79ba48:
    if (ctx->pc == 0x79BA48u) {
        ctx->pc = 0x79BA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BA44u;
        // 0x79ba48: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79BA4Cu;
        goto label_79ba4c;
    }
    ctx->pc = 0x79BA44u;
    SET_GPR_U32(ctx, 31, 0x79BA4Cu);
    ctx->pc = 0x79BA48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BA44u;
    // 0x79ba48: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A98u, 0x79BA44u, 0x79BA4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BA4Cu;
label_79ba4c:
    // 0x79ba4c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x79ba4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_79ba50:
    // 0x79ba50: 0x16360039  bne         $s1, $s6, . + 4 + (0x39 << 2)
label_79ba54:
    if (ctx->pc == 0x79BA54u) {
        ctx->pc = 0x79BA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BA50u;
        // 0x79ba54: 0x8ea22f84  lw          $v0, 0x2F84($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79BA58u;
        goto label_79ba58;
    }
    ctx->pc = 0x79BA50u;
    {
        const bool branch_taken_0x79ba50 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 22));
        ctx->pc = 0x79BA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BA50u;
        // 0x79ba54: 0x8ea22f84  lw          $v0, 0x2F84($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ba50) {
            ctx->pc = 0x79BB38u;
            goto label_79bb38;
        }
    }
    ctx->pc = 0x79BA58u;
label_79ba58:
    // 0x79ba58: 0x16000038  bnez        $s0, . + 4 + (0x38 << 2)
label_79ba5c:
    if (ctx->pc == 0x79BA5Cu) {
        ctx->pc = 0x79BA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BA58u;
        // 0x79ba5c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79BA60u;
        goto label_79ba60;
    }
    ctx->pc = 0x79BA58u;
    {
        const bool branch_taken_0x79ba58 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x79BA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BA58u;
        // 0x79ba5c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ba58) {
            ctx->pc = 0x79BB3Cu;
            goto label_79bb3c;
        }
    }
    ctx->pc = 0x79BA60u;
label_79ba60:
    // 0x79ba60: 0xc0b0f90  jal         func_2C3E40
label_79ba64:
    if (ctx->pc == 0x79BA64u) {
        ctx->pc = 0x79BA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BA60u;
        // 0x79ba64: 0x8ea42f84  lw          $a0, 0x2F84($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79BA68u;
        goto label_79ba68;
    }
    ctx->pc = 0x79BA60u;
    SET_GPR_U32(ctx, 31, 0x79BA68u);
    ctx->pc = 0x79BA64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BA60u;
    // 0x79ba64: 0x8ea42f84  lw          $a0, 0x2F84($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3E40u, 0x79BA60u, 0x79BA68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BA68u;
label_79ba68:
    // 0x79ba68: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x79ba68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_79ba6c:
    // 0x79ba6c: 0x16110032  bne         $s0, $s1, . + 4 + (0x32 << 2)
label_79ba70:
    if (ctx->pc == 0x79BA70u) {
        ctx->pc = 0x79BA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BA6Cu;
        // 0x79ba70: 0x8ea22f84  lw          $v0, 0x2F84($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79BA74u;
        goto label_79ba74;
    }
    ctx->pc = 0x79BA6Cu;
    {
        const bool branch_taken_0x79ba6c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        ctx->pc = 0x79BA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BA6Cu;
        // 0x79ba70: 0x8ea22f84  lw          $v0, 0x2F84($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ba6c) {
            ctx->pc = 0x79BB38u;
            goto label_79bb38;
        }
    }
    ctx->pc = 0x79BA74u;
label_79ba74:
    // 0x79ba74: 0xc0a56ae  jal         func_295AB8
label_79ba78:
    if (ctx->pc == 0x79BA78u) {
        ctx->pc = 0x79BA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BA74u;
        // 0x79ba78: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79BA7Cu;
        goto label_79ba7c;
    }
    ctx->pc = 0x79BA74u;
    SET_GPR_U32(ctx, 31, 0x79BA7Cu);
    ctx->pc = 0x79BA78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BA74u;
    // 0x79ba78: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295AB8u, 0x79BA74u, 0x79BA7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BA7Cu;
label_79ba7c:
    // 0x79ba7c: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x79ba7cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_79ba80:
    // 0x79ba80: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x79ba80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
label_79ba84:
    // 0x79ba84: 0xc0b6dac  jal         func_2DB6B0
label_79ba88:
    if (ctx->pc == 0x79BA88u) {
        ctx->pc = 0x79BA8Cu;
        goto label_79ba8c;
    }
    ctx->pc = 0x79BA84u;
    SET_GPR_U32(ctx, 31, 0x79BA8Cu);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x79BA84u, 0x79BA8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BA8Cu;
label_79ba8c:
    // 0x79ba8c: 0x8c430214  lw          $v1, 0x214($v0)
    ctx->pc = 0x79ba8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 532)));
label_79ba90:
    // 0x79ba90: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x79ba90u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_79ba94:
    // 0x79ba94: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x79ba94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_79ba98:
    // 0x79ba98: 0xa0f809  jalr        $a1
label_79ba9c:
    if (ctx->pc == 0x79BA9Cu) {
        ctx->pc = 0x79BA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BA98u;
        // 0x79ba9c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79BAA0u;
        goto label_79baa0;
    }
    ctx->pc = 0x79BA98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x79BAA0u);
        ctx->pc = 0x79BA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BA98u;
        // 0x79ba9c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79BA98u, 0x79BAA0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x79BAA0u;
label_79baa0:
    // 0x79baa0: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x79baa0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_79baa4:
    // 0x79baa4: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x79baa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
label_79baa8:
    // 0x79baa8: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x79baa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_79baac:
    // 0x79baac: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x79baacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_79bab0:
    // 0x79bab0: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x79bab0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_79bab4:
    // 0x79bab4: 0x46140840  add.s       $f1, $f1, $f20
    ctx->pc = 0x79bab4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
label_79bab8:
    // 0x79bab8: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x79bab8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_79babc:
    // 0x79babc: 0xc0b6dac  jal         func_2DB6B0
label_79bac0:
    if (ctx->pc == 0x79BAC0u) {
        ctx->pc = 0x79BAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BABCu;
        // 0x79bac0: 0xe7a10074  swc1        $f1, 0x74($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x79BAC4u;
        goto label_79bac4;
    }
    ctx->pc = 0x79BABCu;
    SET_GPR_U32(ctx, 31, 0x79BAC4u);
    ctx->pc = 0x79BAC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BABCu;
    // 0x79bac0: 0xe7a10074  swc1        $f1, 0x74($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x79BABCu, 0x79BAC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BAC4u;
label_79bac4:
    // 0x79bac4: 0x8c430214  lw          $v1, 0x214($v0)
    ctx->pc = 0x79bac4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 532)));
label_79bac8:
    // 0x79bac8: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x79bac8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_79bacc:
    // 0x79bacc: 0x8c65008c  lw          $a1, 0x8C($v1)
    ctx->pc = 0x79baccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_79bad0:
    // 0x79bad0: 0xa0f809  jalr        $a1
label_79bad4:
    if (ctx->pc == 0x79BAD4u) {
        ctx->pc = 0x79BAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BAD0u;
        // 0x79bad4: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79BAD8u;
        goto label_79bad8;
    }
    ctx->pc = 0x79BAD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x79BAD8u);
        ctx->pc = 0x79BAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BAD0u;
        // 0x79bad4: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79BAD0u, 0x79BAD8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x79BAD8u;
label_79bad8:
    // 0x79bad8: 0xc44c0004  lwc1        $f12, 0x4($v0)
    ctx->pc = 0x79bad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_79badc:
    // 0x79badc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x79badcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_79bae0:
    // 0x79bae0: 0x3c013f49  lui         $at, 0x3F49
    ctx->pc = 0x79bae0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16201 << 16));
label_79bae4:
    // 0x79bae4: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x79bae4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_79bae8:
    // 0x79bae8: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x79bae8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_79baec:
    // 0x79baec: 0xc0b68b4  jal         func_2DA2D0
label_79baf0:
    if (ctx->pc == 0x79BAF0u) {
        ctx->pc = 0x79BAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BAECu;
        // 0x79baf0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79BAF4u;
        goto label_79baf4;
    }
    ctx->pc = 0x79BAECu;
    SET_GPR_U32(ctx, 31, 0x79BAF4u);
    ctx->pc = 0x79BAF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BAECu;
    // 0x79baf0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA2D0u, 0x79BAECu, 0x79BAF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BAF4u;
label_79baf4:
    // 0x79baf4: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_79baf8:
    if (ctx->pc == 0x79BAF8u) {
        ctx->pc = 0x79BAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BAF4u;
        // 0x79baf8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79BAFCu;
        goto label_79bafc;
    }
    ctx->pc = 0x79BAF4u;
    {
        const bool branch_taken_0x79baf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79BAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BAF4u;
        // 0x79baf8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79baf4) {
            ctx->pc = 0x79BB4Cu;
            goto label_79bb4c;
        }
    }
    ctx->pc = 0x79BAFCu;
label_79bafc:
    // 0x79bafc: 0xafb00020  sw          $s0, 0x20($sp)
    ctx->pc = 0x79bafcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 16));
label_79bb00:
    // 0x79bb00: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x79bb00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_79bb04:
    // 0x79bb04: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x79bb04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_79bb08:
    // 0x79bb08: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x79bb08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_79bb0c:
    // 0x79bb0c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x79bb0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79bb10:
    // 0x79bb10: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x79bb10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_79bb14:
    // 0x79bb14: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79bb14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79bb18:
    // 0x79bb18: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x79bb18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
label_79bb1c:
    // 0x79bb1c: 0x24080007  addiu       $t0, $zero, 0x7
    ctx->pc = 0x79bb1cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_79bb20:
    // 0x79bb20: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x79bb20u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79bb24:
    // 0x79bb24: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x79bb24u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79bb28:
    // 0x79bb28: 0xc04c784  jal         func_131E10
label_79bb2c:
    if (ctx->pc == 0x79BB2Cu) {
        ctx->pc = 0x79BB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BB28u;
        // 0x79bb2c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79BB30u;
        goto label_79bb30;
    }
    ctx->pc = 0x79BB28u;
    SET_GPR_U32(ctx, 31, 0x79BB30u);
    ctx->pc = 0x79BB2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BB28u;
    // 0x79bb2c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131E10u, 0x79BB28u, 0x79BB30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BB30u;
label_79bb30:
    // 0x79bb30: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_79bb34:
    if (ctx->pc == 0x79BB34u) {
        ctx->pc = 0x79BB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BB30u;
        // 0x79bb34: 0x8ea22f84  lw          $v0, 0x2F84($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79BB38u;
        goto label_79bb38;
    }
    ctx->pc = 0x79BB30u;
    {
        const bool branch_taken_0x79bb30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79BB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BB30u;
        // 0x79bb34: 0x8ea22f84  lw          $v0, 0x2F84($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bb30) {
            ctx->pc = 0x79BB4Cu;
            goto label_79bb4c;
        }
    }
    ctx->pc = 0x79BB38u;
label_79bb38:
    // 0x79bb38: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79bb38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79bb3c:
    // 0x79bb3c: 0xc0b56a8  jal         func_2D5AA0
label_79bb40:
    if (ctx->pc == 0x79BB40u) {
        ctx->pc = 0x79BB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BB3Cu;
        // 0x79bb40: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79BB44u;
        goto label_79bb44;
    }
    ctx->pc = 0x79BB3Cu;
    SET_GPR_U32(ctx, 31, 0x79BB44u);
    ctx->pc = 0x79BB40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BB3Cu;
    // 0x79bb40: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79BB3Cu, 0x79BB44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BB44u;
label_79bb44:
    // 0x79bb44: 0x1000ffb6  b           . + 4 + (-0x4A << 2)
label_79bb48:
    if (ctx->pc == 0x79BB48u) {
        ctx->pc = 0x79BB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BB44u;
        // 0x79bb48: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79BB4Cu;
        goto label_79bb4c;
    }
    ctx->pc = 0x79BB44u;
    {
        const bool branch_taken_0x79bb44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79BB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BB44u;
        // 0x79bb48: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bb44) {
            ctx->pc = 0x79BA20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79ba20;
        }
    }
    ctx->pc = 0x79BB4Cu;
label_79bb4c:
    // 0x79bb4c: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x79bb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
label_79bb50:
    // 0x79bb50: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x79bb50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
label_79bb54:
    // 0x79bb54: 0x8c458658  lw          $a1, -0x79A8($v0)
    ctx->pc = 0x79bb54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936152)));
label_79bb58:
    // 0x79bb58: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x79bb58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_79bb5c:
    // 0x79bb5c: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x79bb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_79bb60:
    // 0x79bb60: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x79bb60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_79bb64:
    // 0x79bb64: 0xc0a57ca  jal         func_295F28
label_79bb68:
    if (ctx->pc == 0x79BB68u) {
        ctx->pc = 0x79BB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BB64u;
        // 0x79bb68: 0xaca20004  sw          $v0, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79BB6Cu;
        goto label_79bb6c;
    }
    ctx->pc = 0x79BB64u;
    SET_GPR_U32(ctx, 31, 0x79BB6Cu);
    ctx->pc = 0x79BB68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BB64u;
    // 0x79bb68: 0xaca20004  sw          $v0, 0x4($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F28u, 0x79BB64u, 0x79BB6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BB6Cu;
label_79bb6c:
    // 0x79bb6c: 0x14400060  bnez        $v0, . + 4 + (0x60 << 2)
label_79bb70:
    if (ctx->pc == 0x79BB70u) {
        ctx->pc = 0x79BB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BB6Cu;
        // 0x79bb70: 0x8ea22f84  lw          $v0, 0x2F84($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79BB74u;
        goto label_79bb74;
    }
    ctx->pc = 0x79BB6Cu;
    {
        const bool branch_taken_0x79bb6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79BB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BB6Cu;
        // 0x79bb70: 0x8ea22f84  lw          $v0, 0x2F84($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bb6c) {
            ctx->pc = 0x79BCF0u;
            goto label_79bcf0;
        }
    }
    ctx->pc = 0x79BB74u;
label_79bb74:
    // 0x79bb74: 0xc0a572a  jal         func_295CA8
label_79bb78:
    if (ctx->pc == 0x79BB78u) {
        ctx->pc = 0x79BB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BB74u;
        // 0x79bb78: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79BB7Cu;
        goto label_79bb7c;
    }
    ctx->pc = 0x79BB74u;
    SET_GPR_U32(ctx, 31, 0x79BB7Cu);
    ctx->pc = 0x79BB78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BB74u;
    // 0x79bb78: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x79BB74u, 0x79BB7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BB7Cu;
label_79bb7c:
    // 0x79bb7c: 0x1440005c  bnez        $v0, . + 4 + (0x5C << 2)
label_79bb80:
    if (ctx->pc == 0x79BB80u) {
        ctx->pc = 0x79BB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BB7Cu;
        // 0x79bb80: 0x8ea22f84  lw          $v0, 0x2F84($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79BB84u;
        goto label_79bb84;
    }
    ctx->pc = 0x79BB7Cu;
    {
        const bool branch_taken_0x79bb7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79BB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BB7Cu;
        // 0x79bb80: 0x8ea22f84  lw          $v0, 0x2F84($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bb7c) {
            ctx->pc = 0x79BCF0u;
            goto label_79bcf0;
        }
    }
    ctx->pc = 0x79BB84u;
label_79bb84:
    // 0x79bb84: 0x8ea42f84  lw          $a0, 0x2F84($s5)
    ctx->pc = 0x79bb84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
label_79bb88:
    // 0x79bb88: 0xc0b0e6c  jal         func_2C39B0
label_79bb8c:
    if (ctx->pc == 0x79BB8Cu) {
        ctx->pc = 0x79BB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BB88u;
        // 0x79bb8c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79BB90u;
        goto label_79bb90;
    }
    ctx->pc = 0x79BB88u;
    SET_GPR_U32(ctx, 31, 0x79BB90u);
    ctx->pc = 0x79BB8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BB88u;
    // 0x79bb8c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C39B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C39B0u, 0x79BB88u, 0x79BB90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BB90u;
label_79bb90:
    // 0x79bb90: 0x8ea42f84  lw          $a0, 0x2F84($s5)
    ctx->pc = 0x79bb90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
label_79bb94:
    // 0x79bb94: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x79bb94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
label_79bb98:
    // 0x79bb98: 0xc0b0fb6  jal         func_2C3ED8
label_79bb9c:
    if (ctx->pc == 0x79BB9Cu) {
        ctx->pc = 0x79BB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BB98u;
        // 0x79bb9c: 0x24a5c448  addiu       $a1, $a1, -0x3BB8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952008));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79BBA0u;
        goto label_79bba0;
    }
    ctx->pc = 0x79BB98u;
    SET_GPR_U32(ctx, 31, 0x79BBA0u);
    ctx->pc = 0x79BB9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BB98u;
    // 0x79bb9c: 0x24a5c448  addiu       $a1, $a1, -0x3BB8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3ED8u, 0x79BB98u, 0x79BBA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BBA0u;
label_79bba0:
    // 0x79bba0: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x79bba0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_79bba4:
    // 0x79bba4: 0x24060032  addiu       $a2, $zero, 0x32
    ctx->pc = 0x79bba4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_79bba8:
    // 0x79bba8: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x79bba8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_79bbac:
    // 0x79bbac: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x79bbacu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_79bbb0:
    // 0x79bbb0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x79bbb0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79bbb4:
    // 0x79bbb4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x79bbb4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79bbb8:
    // 0x79bbb8: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x79bbb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
label_79bbbc:
    // 0x79bbbc: 0xc0b2e28  jal         func_2CB8A0
label_79bbc0:
    if (ctx->pc == 0x79BBC0u) {
        ctx->pc = 0x79BBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BBBCu;
        // 0x79bbc0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79BBC4u;
        goto label_79bbc4;
    }
    ctx->pc = 0x79BBBCu;
    SET_GPR_U32(ctx, 31, 0x79BBC4u);
    ctx->pc = 0x79BBC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BBBCu;
    // 0x79bbc0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x79BBBCu, 0x79BBC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BBC4u;
label_79bbc4:
    // 0x79bbc4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x79bbc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_79bbc8:
    // 0x79bbc8: 0xc0a56f0  jal         func_295BC0
label_79bbcc:
    if (ctx->pc == 0x79BBCCu) {
        ctx->pc = 0x79BBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BBC8u;
        // 0x79bbcc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79BBD0u;
        goto label_79bbd0;
    }
    ctx->pc = 0x79BBC8u;
    SET_GPR_U32(ctx, 31, 0x79BBD0u);
    ctx->pc = 0x79BBCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BBC8u;
    // 0x79bbcc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295BC0u, 0x79BBC8u, 0x79BBD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BBD0u;
label_79bbd0:
    // 0x79bbd0: 0x3c0140db  lui         $at, 0x40DB
    ctx->pc = 0x79bbd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16603 << 16));
label_79bbd4:
    // 0x79bbd4: 0x3421851f  ori         $at, $at, 0x851F
    ctx->pc = 0x79bbd4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34079);
label_79bbd8:
    // 0x79bbd8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x79bbd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_79bbdc:
    // 0x79bbdc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x79bbdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_79bbe0:
    // 0x79bbe0: 0x3c013eb8  lui         $at, 0x3EB8
    ctx->pc = 0x79bbe0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16056 << 16));
label_79bbe4:
    // 0x79bbe4: 0x342151ec  ori         $at, $at, 0x51EC
    ctx->pc = 0x79bbe4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20972);
label_79bbe8:
    // 0x79bbe8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x79bbe8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_79bbec:
    // 0x79bbec: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x79bbecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_79bbf0:
    // 0x79bbf0: 0x3c014072  lui         $at, 0x4072
    ctx->pc = 0x79bbf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16498 << 16));
label_79bbf4:
    // 0x79bbf4: 0x34218f5c  ori         $at, $at, 0x8F5C
    ctx->pc = 0x79bbf4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)36700);
label_79bbf8:
    // 0x79bbf8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79bbf8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_79bbfc:
    // 0x79bbfc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x79bbfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_79bc00:
    // 0x79bc00: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x79bc00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_79bc04:
    // 0x79bc04: 0xe7a20060  swc1        $f2, 0x60($sp)
    ctx->pc = 0x79bc04u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_79bc08:
    // 0x79bc08: 0x3c01bfca  lui         $at, 0xBFCA
    ctx->pc = 0x79bc08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49098 << 16));
label_79bc0c:
    // 0x79bc0c: 0x34213d71  ori         $at, $at, 0x3D71
    ctx->pc = 0x79bc0cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)15729);
label_79bc10:
    // 0x79bc10: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x79bc10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_79bc14:
    // 0x79bc14: 0xe6430004  swc1        $f3, 0x4($s2)
    ctx->pc = 0x79bc14u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
label_79bc18:
    // 0x79bc18: 0xe6400008  swc1        $f0, 0x8($s2)
    ctx->pc = 0x79bc18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
label_79bc1c:
    // 0x79bc1c: 0xc0a5682  jal         func_295A08
label_79bc20:
    if (ctx->pc == 0x79BC20u) {
        ctx->pc = 0x79BC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BC1Cu;
        // 0x79bc20: 0xe641000c  swc1        $f1, 0xC($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x79BC24u;
        goto label_79bc24;
    }
    ctx->pc = 0x79BC1Cu;
    SET_GPR_U32(ctx, 31, 0x79BC24u);
    ctx->pc = 0x79BC20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BC1Cu;
    // 0x79bc20: 0xe641000c  swc1        $f1, 0xC($s2) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x295A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295A08u, 0x79BC1Cu, 0x79BC24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BC24u;
label_79bc24:
    // 0x79bc24: 0xfba00060  sqc2        $vf0, 0x60($sp)
    ctx->pc = 0x79bc24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[0]));
label_79bc28:
    // 0x79bc28: 0x27c4ea60  addiu       $a0, $fp, -0x15A0
    ctx->pc = 0x79bc28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4294961760));
label_79bc2c:
    // 0x79bc2c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x79bc2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_79bc30:
    // 0x79bc30: 0xc0b0a92  jal         func_2C2A48
label_79bc34:
    if (ctx->pc == 0x79BC34u) {
        ctx->pc = 0x79BC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BC30u;
        // 0x79bc34: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79BC38u;
        goto label_79bc38;
    }
    ctx->pc = 0x79BC30u;
    SET_GPR_U32(ctx, 31, 0x79BC38u);
    ctx->pc = 0x79BC34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BC30u;
    // 0x79bc34: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A48u, 0x79BC30u, 0x79BC38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BC38u;
label_79bc38:
    // 0x79bc38: 0x3c014974  lui         $at, 0x4974
    ctx->pc = 0x79bc38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18804 << 16));
label_79bc3c:
    // 0x79bc3c: 0x342123fe  ori         $at, $at, 0x23FE
    ctx->pc = 0x79bc3cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)9214);
label_79bc40:
    // 0x79bc40: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x79bc40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_79bc44:
    // 0x79bc44: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x79bc44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_79bc48:
    // 0x79bc48: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x79bc48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_79bc4c:
    // 0x79bc4c: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x79bc4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_79bc50:
    // 0x79bc50: 0xc0a57e0  jal         func_295F80
label_79bc54:
    if (ctx->pc == 0x79BC54u) {
        ctx->pc = 0x79BC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BC50u;
        // 0x79bc54: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79BC58u;
        goto label_79bc58;
    }
    ctx->pc = 0x79BC50u;
    SET_GPR_U32(ctx, 31, 0x79BC58u);
    ctx->pc = 0x79BC54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BC50u;
    // 0x79bc54: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F80u, 0x79BC50u, 0x79BC58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BC58u;
label_79bc58:
    // 0x79bc58: 0x3c03007a  lui         $v1, 0x7A
    ctx->pc = 0x79bc58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)122 << 16));
label_79bc5c:
    // 0x79bc5c: 0x3c020075  lui         $v0, 0x75
    ctx->pc = 0x79bc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)117 << 16));
label_79bc60:
    // 0x79bc60: 0x8064c450  lb          $a0, -0x3BB0($v1)
    ctx->pc = 0x79bc60u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294952016)));
label_79bc64:
    // 0x79bc64: 0x2466c450  addiu       $a2, $v1, -0x3BB0
    ctx->pc = 0x79bc64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952016));
label_79bc68:
    // 0x79bc68: 0x24484c58  addiu       $t0, $v0, 0x4C58
    ctx->pc = 0x79bc68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 19544));
label_79bc6c:
    // 0x79bc6c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79bc6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79bc70:
    // 0x79bc70: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
label_79bc74:
    if (ctx->pc == 0x79BC74u) {
        ctx->pc = 0x79BC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BC70u;
        // 0x79bc74: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79BC78u;
        goto label_79bc78;
    }
    ctx->pc = 0x79BC70u;
    {
        const bool branch_taken_0x79bc70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x79BC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BC70u;
        // 0x79bc74: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bc70) {
            ctx->pc = 0x79BCA8u;
            goto label_79bca8;
        }
    }
    ctx->pc = 0x79BC78u;
label_79bc78:
    // 0x79bc78: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79bc78u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_79bc7c:
    // 0x79bc7c: 0x0  nop
    ctx->pc = 0x79bc7cu;
    // NOP
label_79bc80:
    // 0x79bc80: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x79bc80u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_79bc84:
    // 0x79bc84: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x79bc84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_79bc88:
    // 0x79bc88: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x79bc88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_79bc8c:
    // 0x79bc8c: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x79bc8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
label_79bc90:
    // 0x79bc90: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x79bc90u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
label_79bc94:
    // 0x79bc94: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_79bc98:
    if (ctx->pc == 0x79BC98u) {
        ctx->pc = 0x79BC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BC94u;
        // 0x79bc98: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79BC9Cu;
        goto label_79bc9c;
    }
    ctx->pc = 0x79BC94u;
    {
        const bool branch_taken_0x79bc94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79BC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BC94u;
        // 0x79bc98: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bc94) {
            ctx->pc = 0x79BCA8u;
            goto label_79bca8;
        }
    }
    ctx->pc = 0x79BC9Cu;
label_79bc9c:
    // 0x79bc9c: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79bc9cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_79bca0:
    // 0x79bca0: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
label_79bca4:
    if (ctx->pc == 0x79BCA4u) {
        ctx->pc = 0x79BCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BCA0u;
        // 0x79bca4: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79BCA8u;
        goto label_79bca8;
    }
    ctx->pc = 0x79BCA0u;
    {
        const bool branch_taken_0x79bca0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79bca0) {
            ctx->pc = 0x79BCA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79BCA0u;
            // 0x79bca4: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79BC80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79bc80;
        }
    }
    ctx->pc = 0x79BCA8u;
label_79bca8:
    // 0x79bca8: 0xc053f66  jal         func_14FD98
label_79bcac:
    if (ctx->pc == 0x79BCACu) {
        ctx->pc = 0x79BCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BCA8u;
        // 0x79bcac: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79BCB0u;
        goto label_79bcb0;
    }
    ctx->pc = 0x79BCA8u;
    SET_GPR_U32(ctx, 31, 0x79BCB0u);
    ctx->pc = 0x79BCACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BCA8u;
    // 0x79bcac: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x79BCA8u, 0x79BCB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BCB0u;
label_79bcb0:
    // 0x79bcb0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x79bcb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_79bcb4:
    // 0x79bcb4: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_79bcb8:
    if (ctx->pc == 0x79BCB8u) {
        ctx->pc = 0x79BCBCu;
        goto label_79bcbc;
    }
    ctx->pc = 0x79BCB4u;
    {
        const bool branch_taken_0x79bcb4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x79bcb4) {
            ctx->pc = 0x79BCC8u;
            goto label_79bcc8;
        }
    }
    ctx->pc = 0x79BCBCu;
label_79bcbc:
    // 0x79bcbc: 0x8e0205b8  lw          $v0, 0x5B8($s0)
    ctx->pc = 0x79bcbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1464)));
label_79bcc0:
    // 0x79bcc0: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x79bcc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_79bcc4:
    // 0x79bcc4: 0xae0205b8  sw          $v0, 0x5B8($s0)
    ctx->pc = 0x79bcc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1464), GPR_U32(ctx, 2));
label_79bcc8:
    // 0x79bcc8: 0xc0b101e  jal         func_2C4078
label_79bccc:
    if (ctx->pc == 0x79BCCCu) {
        ctx->pc = 0x79BCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BCC8u;
        // 0x79bccc: 0x8ea42f84  lw          $a0, 0x2F84($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79BCD0u;
        goto label_79bcd0;
    }
    ctx->pc = 0x79BCC8u;
    SET_GPR_U32(ctx, 31, 0x79BCD0u);
    ctx->pc = 0x79BCCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BCC8u;
    // 0x79bccc: 0x8ea42f84  lw          $a0, 0x2F84($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4078u, 0x79BCC8u, 0x79BCD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BCD0u;
label_79bcd0:
    // 0x79bcd0: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_79bcd4:
    if (ctx->pc == 0x79BCD4u) {
        ctx->pc = 0x79BCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BCD0u;
        // 0x79bcd4: 0x2403fffd  addiu       $v1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79BCD8u;
        goto label_79bcd8;
    }
    ctx->pc = 0x79BCD0u;
    {
        const bool branch_taken_0x79bcd0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x79BCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BCD0u;
        // 0x79bcd4: 0x2403fffd  addiu       $v1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bcd0) {
            ctx->pc = 0x79BCE4u;
            goto label_79bce4;
        }
    }
    ctx->pc = 0x79BCD8u;
label_79bcd8:
    // 0x79bcd8: 0x8e0205b8  lw          $v0, 0x5B8($s0)
    ctx->pc = 0x79bcd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1464)));
label_79bcdc:
    // 0x79bcdc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x79bcdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_79bce0:
    // 0x79bce0: 0xae0205b8  sw          $v0, 0x5B8($s0)
    ctx->pc = 0x79bce0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1464), GPR_U32(ctx, 2));
label_79bce4:
    // 0x79bce4: 0xc0b0f04  jal         func_2C3C10
label_79bce8:
    if (ctx->pc == 0x79BCE8u) {
        ctx->pc = 0x79BCE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BCE4u;
        // 0x79bce8: 0x8ea42f84  lw          $a0, 0x2F84($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79BCECu;
        goto label_79bcec;
    }
    ctx->pc = 0x79BCE4u;
    SET_GPR_U32(ctx, 31, 0x79BCECu);
    ctx->pc = 0x79BCE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BCE4u;
    // 0x79bce8: 0x8ea42f84  lw          $a0, 0x2F84($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3C10u, 0x79BCE4u, 0x79BCECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BCECu;
label_79bcec:
    // 0x79bcec: 0x8ea22f84  lw          $v0, 0x2F84($s5)
    ctx->pc = 0x79bcecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
label_79bcf0:
    // 0x79bcf0: 0xc0b5692  jal         func_2D5A48
label_79bcf4:
    if (ctx->pc == 0x79BCF4u) {
        ctx->pc = 0x79BCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BCF0u;
        // 0x79bcf4: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79BCF8u;
        goto label_79bcf8;
    }
    ctx->pc = 0x79BCF0u;
    SET_GPR_U32(ctx, 31, 0x79BCF8u);
    ctx->pc = 0x79BCF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BCF0u;
    // 0x79bcf4: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79BCF0u, 0x79BCF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BCF8u;
label_79bcf8:
    // 0x79bcf8: 0x7bb00110  lq          $s0, 0x110($sp)
    ctx->pc = 0x79bcf8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_79bcfc:
    // 0x79bcfc: 0x7bb10100  lq          $s1, 0x100($sp)
    ctx->pc = 0x79bcfcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_79bd00:
    // 0x79bd00: 0x7bb200f0  lq          $s2, 0xF0($sp)
    ctx->pc = 0x79bd00u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_79bd04:
    // 0x79bd04: 0x7bb300e0  lq          $s3, 0xE0($sp)
    ctx->pc = 0x79bd04u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_79bd08:
    // 0x79bd08: 0x7bb400d0  lq          $s4, 0xD0($sp)
    ctx->pc = 0x79bd08u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_79bd0c:
    // 0x79bd0c: 0x7bb500c0  lq          $s5, 0xC0($sp)
    ctx->pc = 0x79bd0cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_79bd10:
    // 0x79bd10: 0x7bb600b0  lq          $s6, 0xB0($sp)
    ctx->pc = 0x79bd10u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_79bd14:
    // 0x79bd14: 0x7bb700a0  lq          $s7, 0xA0($sp)
    ctx->pc = 0x79bd14u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_79bd18:
    // 0x79bd18: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x79bd18u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_79bd1c:
    // 0x79bd1c: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x79bd1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_79bd20:
    // 0x79bd20: 0xc7b40120  lwc1        $f20, 0x120($sp)
    ctx->pc = 0x79bd20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_79bd24:
    // 0x79bd24: 0x3e00008  jr          $ra
label_79bd28:
    if (ctx->pc == 0x79BD28u) {
        ctx->pc = 0x79BD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BD24u;
        // 0x79bd28: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79BD2Cu;
        goto label_79bd2c;
    }
    ctx->pc = 0x79BD24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79BD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BD24u;
        // 0x79bd28: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79BD24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79BD2Cu;
label_79bd2c:
    // 0x79bd2c: 0x0  nop
    ctx->pc = 0x79bd2cu;
    // NOP
    ctx->pc = 0x79bd30u;
}
} // namespace gh_r100
