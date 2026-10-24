#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: func_0027CB58
// Address: 0x27cb58 - 0x27ce70
void func_0027CB58_0x27cb58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0027CB58_0x27cb58");
#endif

    switch (ctx->pc) {
        case 0x27cb58u: goto label_27cb58;
        case 0x27cb5cu: goto label_27cb5c;
        case 0x27cb60u: goto label_27cb60;
        case 0x27cb64u: goto label_27cb64;
        case 0x27cb68u: goto label_27cb68;
        case 0x27cb6cu: goto label_27cb6c;
        case 0x27cb70u: goto label_27cb70;
        case 0x27cb74u: goto label_27cb74;
        case 0x27cb78u: goto label_27cb78;
        case 0x27cb7cu: goto label_27cb7c;
        case 0x27cb80u: goto label_27cb80;
        case 0x27cb84u: goto label_27cb84;
        case 0x27cb88u: goto label_27cb88;
        case 0x27cb8cu: goto label_27cb8c;
        case 0x27cb90u: goto label_27cb90;
        case 0x27cb94u: goto label_27cb94;
        case 0x27cb98u: goto label_27cb98;
        case 0x27cb9cu: goto label_27cb9c;
        case 0x27cba0u: goto label_27cba0;
        case 0x27cba4u: goto label_27cba4;
        case 0x27cba8u: goto label_27cba8;
        case 0x27cbacu: goto label_27cbac;
        case 0x27cbb0u: goto label_27cbb0;
        case 0x27cbb4u: goto label_27cbb4;
        case 0x27cbb8u: goto label_27cbb8;
        case 0x27cbbcu: goto label_27cbbc;
        case 0x27cbc0u: goto label_27cbc0;
        case 0x27cbc4u: goto label_27cbc4;
        case 0x27cbc8u: goto label_27cbc8;
        case 0x27cbccu: goto label_27cbcc;
        case 0x27cbd0u: goto label_27cbd0;
        case 0x27cbd4u: goto label_27cbd4;
        case 0x27cbd8u: goto label_27cbd8;
        case 0x27cbdcu: goto label_27cbdc;
        case 0x27cbe0u: goto label_27cbe0;
        case 0x27cbe4u: goto label_27cbe4;
        case 0x27cbe8u: goto label_27cbe8;
        case 0x27cbecu: goto label_27cbec;
        case 0x27cbf0u: goto label_27cbf0;
        case 0x27cbf4u: goto label_27cbf4;
        case 0x27cbf8u: goto label_27cbf8;
        case 0x27cbfcu: goto label_27cbfc;
        case 0x27cc00u: goto label_27cc00;
        case 0x27cc04u: goto label_27cc04;
        case 0x27cc08u: goto label_27cc08;
        case 0x27cc0cu: goto label_27cc0c;
        case 0x27cc10u: goto label_27cc10;
        case 0x27cc14u: goto label_27cc14;
        case 0x27cc18u: goto label_27cc18;
        case 0x27cc1cu: goto label_27cc1c;
        case 0x27cc20u: goto label_27cc20;
        case 0x27cc24u: goto label_27cc24;
        case 0x27cc28u: goto label_27cc28;
        case 0x27cc2cu: goto label_27cc2c;
        case 0x27cc30u: goto label_27cc30;
        case 0x27cc34u: goto label_27cc34;
        case 0x27cc38u: goto label_27cc38;
        case 0x27cc3cu: goto label_27cc3c;
        case 0x27cc40u: goto label_27cc40;
        case 0x27cc44u: goto label_27cc44;
        case 0x27cc48u: goto label_27cc48;
        case 0x27cc4cu: goto label_27cc4c;
        case 0x27cc50u: goto label_27cc50;
        case 0x27cc54u: goto label_27cc54;
        case 0x27cc58u: goto label_27cc58;
        case 0x27cc5cu: goto label_27cc5c;
        case 0x27cc60u: goto label_27cc60;
        case 0x27cc64u: goto label_27cc64;
        case 0x27cc68u: goto label_27cc68;
        case 0x27cc6cu: goto label_27cc6c;
        case 0x27cc70u: goto label_27cc70;
        case 0x27cc74u: goto label_27cc74;
        case 0x27cc78u: goto label_27cc78;
        case 0x27cc7cu: goto label_27cc7c;
        case 0x27cc80u: goto label_27cc80;
        case 0x27cc84u: goto label_27cc84;
        case 0x27cc88u: goto label_27cc88;
        case 0x27cc8cu: goto label_27cc8c;
        case 0x27cc90u: goto label_27cc90;
        case 0x27cc94u: goto label_27cc94;
        case 0x27cc98u: goto label_27cc98;
        case 0x27cc9cu: goto label_27cc9c;
        case 0x27cca0u: goto label_27cca0;
        case 0x27cca4u: goto label_27cca4;
        case 0x27cca8u: goto label_27cca8;
        case 0x27ccacu: goto label_27ccac;
        case 0x27ccb0u: goto label_27ccb0;
        case 0x27ccb4u: goto label_27ccb4;
        case 0x27ccb8u: goto label_27ccb8;
        case 0x27ccbcu: goto label_27ccbc;
        case 0x27ccc0u: goto label_27ccc0;
        case 0x27ccc4u: goto label_27ccc4;
        case 0x27ccc8u: goto label_27ccc8;
        case 0x27ccccu: goto label_27cccc;
        case 0x27ccd0u: goto label_27ccd0;
        case 0x27ccd4u: goto label_27ccd4;
        case 0x27ccd8u: goto label_27ccd8;
        case 0x27ccdcu: goto label_27ccdc;
        case 0x27cce0u: goto label_27cce0;
        case 0x27cce4u: goto label_27cce4;
        case 0x27cce8u: goto label_27cce8;
        case 0x27ccecu: goto label_27ccec;
        case 0x27ccf0u: goto label_27ccf0;
        case 0x27ccf4u: goto label_27ccf4;
        case 0x27ccf8u: goto label_27ccf8;
        case 0x27ccfcu: goto label_27ccfc;
        case 0x27cd00u: goto label_27cd00;
        case 0x27cd04u: goto label_27cd04;
        case 0x27cd08u: goto label_27cd08;
        case 0x27cd0cu: goto label_27cd0c;
        case 0x27cd10u: goto label_27cd10;
        case 0x27cd14u: goto label_27cd14;
        case 0x27cd18u: goto label_27cd18;
        case 0x27cd1cu: goto label_27cd1c;
        case 0x27cd20u: goto label_27cd20;
        case 0x27cd24u: goto label_27cd24;
        case 0x27cd28u: goto label_27cd28;
        case 0x27cd2cu: goto label_27cd2c;
        case 0x27cd30u: goto label_27cd30;
        case 0x27cd34u: goto label_27cd34;
        case 0x27cd38u: goto label_27cd38;
        case 0x27cd3cu: goto label_27cd3c;
        case 0x27cd40u: goto label_27cd40;
        case 0x27cd44u: goto label_27cd44;
        case 0x27cd48u: goto label_27cd48;
        case 0x27cd4cu: goto label_27cd4c;
        case 0x27cd50u: goto label_27cd50;
        case 0x27cd54u: goto label_27cd54;
        case 0x27cd58u: goto label_27cd58;
        case 0x27cd5cu: goto label_27cd5c;
        case 0x27cd60u: goto label_27cd60;
        case 0x27cd64u: goto label_27cd64;
        case 0x27cd68u: goto label_27cd68;
        case 0x27cd6cu: goto label_27cd6c;
        case 0x27cd70u: goto label_27cd70;
        case 0x27cd74u: goto label_27cd74;
        case 0x27cd78u: goto label_27cd78;
        case 0x27cd7cu: goto label_27cd7c;
        case 0x27cd80u: goto label_27cd80;
        case 0x27cd84u: goto label_27cd84;
        case 0x27cd88u: goto label_27cd88;
        case 0x27cd8cu: goto label_27cd8c;
        case 0x27cd90u: goto label_27cd90;
        case 0x27cd94u: goto label_27cd94;
        case 0x27cd98u: goto label_27cd98;
        case 0x27cd9cu: goto label_27cd9c;
        case 0x27cda0u: goto label_27cda0;
        case 0x27cda4u: goto label_27cda4;
        case 0x27cda8u: goto label_27cda8;
        case 0x27cdacu: goto label_27cdac;
        case 0x27cdb0u: goto label_27cdb0;
        case 0x27cdb4u: goto label_27cdb4;
        case 0x27cdb8u: goto label_27cdb8;
        case 0x27cdbcu: goto label_27cdbc;
        case 0x27cdc0u: goto label_27cdc0;
        case 0x27cdc4u: goto label_27cdc4;
        case 0x27cdc8u: goto label_27cdc8;
        case 0x27cdccu: goto label_27cdcc;
        case 0x27cdd0u: goto label_27cdd0;
        case 0x27cdd4u: goto label_27cdd4;
        case 0x27cdd8u: goto label_27cdd8;
        case 0x27cddcu: goto label_27cddc;
        case 0x27cde0u: goto label_27cde0;
        case 0x27cde4u: goto label_27cde4;
        case 0x27cde8u: goto label_27cde8;
        case 0x27cdecu: goto label_27cdec;
        case 0x27cdf0u: goto label_27cdf0;
        case 0x27cdf4u: goto label_27cdf4;
        case 0x27cdf8u: goto label_27cdf8;
        case 0x27cdfcu: goto label_27cdfc;
        case 0x27ce00u: goto label_27ce00;
        case 0x27ce04u: goto label_27ce04;
        case 0x27ce08u: goto label_27ce08;
        case 0x27ce0cu: goto label_27ce0c;
        case 0x27ce10u: goto label_27ce10;
        case 0x27ce14u: goto label_27ce14;
        case 0x27ce18u: goto label_27ce18;
        case 0x27ce1cu: goto label_27ce1c;
        case 0x27ce20u: goto label_27ce20;
        case 0x27ce24u: goto label_27ce24;
        case 0x27ce28u: goto label_27ce28;
        case 0x27ce2cu: goto label_27ce2c;
        case 0x27ce30u: goto label_27ce30;
        case 0x27ce34u: goto label_27ce34;
        case 0x27ce38u: goto label_27ce38;
        case 0x27ce3cu: goto label_27ce3c;
        case 0x27ce40u: goto label_27ce40;
        case 0x27ce44u: goto label_27ce44;
        case 0x27ce48u: goto label_27ce48;
        case 0x27ce4cu: goto label_27ce4c;
        case 0x27ce50u: goto label_27ce50;
        case 0x27ce54u: goto label_27ce54;
        case 0x27ce58u: goto label_27ce58;
        case 0x27ce5cu: goto label_27ce5c;
        case 0x27ce60u: goto label_27ce60;
        case 0x27ce64u: goto label_27ce64;
        case 0x27ce68u: goto label_27ce68;
        case 0x27ce6cu: goto label_27ce6c;
        default: break;
    }

    ctx->pc = 0x27cb58u;

label_27cb58:
    // 0x27cb58: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x27cb58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_27cb5c:
    // 0x27cb5c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x27cb5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_27cb60:
    // 0x27cb60: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x27cb60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_27cb64:
    // 0x27cb64: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x27cb64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_27cb68:
    // 0x27cb68: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x27cb68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_27cb6c:
    // 0x27cb6c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x27cb6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_27cb70:
    // 0x27cb70: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x27cb70u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_27cb74:
    // 0x27cb74: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x27cb74u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
label_27cb78:
    // 0x27cb78: 0x2c620008  sltiu       $v0, $v1, 0x8
    ctx->pc = 0x27cb78u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_27cb7c:
    // 0x27cb7c: 0x10400058  beqz        $v0, . + 4 + (0x58 << 2)
label_27cb80:
    if (ctx->pc == 0x27CB80u) {
        ctx->pc = 0x27CB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CB7Cu;
        // 0x27cb80: 0x8e121580  lw          $s2, 0x1580($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5504)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27CB84u;
        goto label_27cb84;
    }
    ctx->pc = 0x27CB7Cu;
    {
        const bool branch_taken_0x27cb7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27CB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CB7Cu;
        // 0x27cb80: 0x8e121580  lw          $s2, 0x1580($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5504)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cb7c) {
            ctx->pc = 0x27CCE0u;
            goto label_27cce0;
        }
    }
    ctx->pc = 0x27CB84u;
label_27cb84:
    // 0x27cb84: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x27cb84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
label_27cb88:
    // 0x27cb88: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x27cb88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_27cb8c:
    // 0x27cb8c: 0x24428150  addiu       $v0, $v0, -0x7EB0
    ctx->pc = 0x27cb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934864));
label_27cb90:
    // 0x27cb90: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x27cb90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_27cb94:
    // 0x27cb94: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x27cb94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_27cb98:
    // 0x27cb98: 0x800008  jr          $a0
label_27cb9c:
    if (ctx->pc == 0x27CB9Cu) {
        ctx->pc = 0x27CBA0u;
        goto label_27cba0;
    }
    ctx->pc = 0x27CB98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27CBA0u: goto label_27cba0;
            case 0x27CBDCu: goto label_27cbdc;
            case 0x27CC14u: goto label_27cc14;
            case 0x27CC24u: goto label_27cc24;
            case 0x27CC5Cu: goto label_27cc5c;
            case 0x27CC88u: goto label_27cc88;
            case 0x27CCC0u: goto label_27ccc0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27CB98u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x27CBA0u;
label_27cba0:
    // 0x27cba0: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x27cba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
label_27cba4:
    // 0x27cba4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27cba4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27cba8:
    // 0x27cba8: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x27cba8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_27cbac:
    // 0x27cbac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x27cbacu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27cbb0:
    // 0x27cbb0: 0x8c4500c8  lw          $a1, 0xC8($v0)
    ctx->pc = 0x27cbb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 200)));
label_27cbb4:
    // 0x27cbb4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x27cbb4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27cbb8:
    // 0x27cbb8: 0x8c4600cc  lw          $a2, 0xCC($v0)
    ctx->pc = 0x27cbb8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_27cbbc:
    // 0x27cbbc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x27cbbcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_27cbc0:
    // 0x27cbc0: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x27cbc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_27cbc4:
    // 0x27cbc4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x27cbc4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27cbc8:
    // 0x27cbc8: 0xc0aa15e  jal         func_2A8578
label_27cbcc:
    if (ctx->pc == 0x27CBCCu) {
        ctx->pc = 0x27CBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CBC8u;
        // 0x27cbcc: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27CBD0u;
        goto label_27cbd0;
    }
    ctx->pc = 0x27CBC8u;
    SET_GPR_U32(ctx, 31, 0x27CBD0u);
    ctx->pc = 0x27CBCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27CBC8u;
    // 0x27cbcc: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x27CBC8u, 0x27CBD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CBD0u;
label_27cbd0:
    // 0x27cbd0: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x27cbd0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
label_27cbd4:
    // 0x27cbd4: 0x1000000d  b           . + 4 + (0xD << 2)
label_27cbd8:
    if (ctx->pc == 0x27CBD8u) {
        ctx->pc = 0x27CBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CBD4u;
        // 0x27cbd8: 0xe61415d4  swc1        $f20, 0x15D4($s0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5588), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x27CBDCu;
        goto label_27cbdc;
    }
    ctx->pc = 0x27CBD4u;
    {
        const bool branch_taken_0x27cbd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27CBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CBD4u;
        // 0x27cbd8: 0xe61415d4  swc1        $f20, 0x15D4($s0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5588), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cbd4) {
            ctx->pc = 0x27CC0Cu;
            goto label_27cc0c;
        }
    }
    ctx->pc = 0x27CBDCu;
label_27cbdc:
    // 0x27cbdc: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x27cbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
label_27cbe0:
    // 0x27cbe0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27cbe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27cbe4:
    // 0x27cbe4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x27cbe4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_27cbe8:
    // 0x27cbe8: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x27cbe8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_27cbec:
    // 0x27cbec: 0x8c4500d0  lw          $a1, 0xD0($v0)
    ctx->pc = 0x27cbecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 208)));
label_27cbf0:
    // 0x27cbf0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x27cbf0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27cbf4:
    // 0x27cbf4: 0x8c4600d4  lw          $a2, 0xD4($v0)
    ctx->pc = 0x27cbf4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 212)));
label_27cbf8:
    // 0x27cbf8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x27cbf8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27cbfc:
    // 0x27cbfc: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x27cbfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_27cc00:
    // 0x27cc00: 0xc0aa15e  jal         func_2A8578
label_27cc04:
    if (ctx->pc == 0x27CC04u) {
        ctx->pc = 0x27CC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CC00u;
        // 0x27cc04: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27CC08u;
        goto label_27cc08;
    }
    ctx->pc = 0x27CC00u;
    SET_GPR_U32(ctx, 31, 0x27CC08u);
    ctx->pc = 0x27CC04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27CC00u;
    // 0x27cc04: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x27CC00u, 0x27CC08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CC08u;
label_27cc08:
    // 0x27cc08: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x27cc08u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
label_27cc0c:
    // 0x27cc0c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x27cc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_27cc10:
    // 0x27cc10: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x27cc10u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_27cc14:
    // 0x27cc14: 0xc055f06  jal         func_157C18
label_27cc18:
    if (ctx->pc == 0x27CC18u) {
        ctx->pc = 0x27CC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CC14u;
        // 0x27cc18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27CC1Cu;
        goto label_27cc1c;
    }
    ctx->pc = 0x27CC14u;
    SET_GPR_U32(ctx, 31, 0x27CC1Cu);
    ctx->pc = 0x27CC18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27CC14u;
    // 0x27cc18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x27CC14u, 0x27CC1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CC1Cu;
label_27cc1c:
    // 0x27cc1c: 0x10000031  b           . + 4 + (0x31 << 2)
label_27cc20:
    if (ctx->pc == 0x27CC20u) {
        ctx->pc = 0x27CC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CC1Cu;
        // 0x27cc20: 0x960203ac  lhu         $v0, 0x3AC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27CC24u;
        goto label_27cc24;
    }
    ctx->pc = 0x27CC1Cu;
    {
        const bool branch_taken_0x27cc1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27CC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CC1Cu;
        // 0x27cc20: 0x960203ac  lhu         $v0, 0x3AC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cc1c) {
            ctx->pc = 0x27CCE4u;
            goto label_27cce4;
        }
    }
    ctx->pc = 0x27CC24u;
label_27cc24:
    // 0x27cc24: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x27cc24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
label_27cc28:
    // 0x27cc28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27cc28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27cc2c:
    // 0x27cc2c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x27cc2cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_27cc30:
    // 0x27cc30: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x27cc30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_27cc34:
    // 0x27cc34: 0x8c4500d8  lw          $a1, 0xD8($v0)
    ctx->pc = 0x27cc34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 216)));
label_27cc38:
    // 0x27cc38: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x27cc38u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27cc3c:
    // 0x27cc3c: 0x8c4600dc  lw          $a2, 0xDC($v0)
    ctx->pc = 0x27cc3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 220)));
label_27cc40:
    // 0x27cc40: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x27cc40u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27cc44:
    // 0x27cc44: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x27cc44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_27cc48:
    // 0x27cc48: 0xc0aa15e  jal         func_2A8578
label_27cc4c:
    if (ctx->pc == 0x27CC4Cu) {
        ctx->pc = 0x27CC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CC48u;
        // 0x27cc4c: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27CC50u;
        goto label_27cc50;
    }
    ctx->pc = 0x27CC48u;
    SET_GPR_U32(ctx, 31, 0x27CC50u);
    ctx->pc = 0x27CC4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27CC48u;
    // 0x27cc4c: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x27CC48u, 0x27CC50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CC50u;
label_27cc50:
    // 0x27cc50: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x27cc50u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
label_27cc54:
    // 0x27cc54: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x27cc54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_27cc58:
    // 0x27cc58: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x27cc58u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_27cc5c:
    // 0x27cc5c: 0xc055f06  jal         func_157C18
label_27cc60:
    if (ctx->pc == 0x27CC60u) {
        ctx->pc = 0x27CC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CC5Cu;
        // 0x27cc60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27CC64u;
        goto label_27cc64;
    }
    ctx->pc = 0x27CC5Cu;
    SET_GPR_U32(ctx, 31, 0x27CC64u);
    ctx->pc = 0x27CC60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27CC5Cu;
    // 0x27cc60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x27CC5Cu, 0x27CC64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CC64u;
label_27cc64:
    // 0x27cc64: 0x5040001f  beql        $v0, $zero, . + 4 + (0x1F << 2)
label_27cc68:
    if (ctx->pc == 0x27CC68u) {
        ctx->pc = 0x27CC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CC64u;
        // 0x27cc68: 0x960203ac  lhu         $v0, 0x3AC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27CC6Cu;
        goto label_27cc6c;
    }
    ctx->pc = 0x27CC64u;
    {
        const bool branch_taken_0x27cc64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27cc64) {
            ctx->pc = 0x27CC68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27CC64u;
            // 0x27cc68: 0x960203ac  lhu         $v0, 0x3AC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27CCE4u;
            goto label_27cce4;
        }
    }
    ctx->pc = 0x27CC6Cu;
label_27cc6c:
    // 0x27cc6c: 0x5240001d  beql        $s2, $zero, . + 4 + (0x1D << 2)
label_27cc70:
    if (ctx->pc == 0x27CC70u) {
        ctx->pc = 0x27CC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CC6Cu;
        // 0x27cc70: 0x960203ac  lhu         $v0, 0x3AC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27CC74u;
        goto label_27cc74;
    }
    ctx->pc = 0x27CC6Cu;
    {
        const bool branch_taken_0x27cc6c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x27cc6c) {
            ctx->pc = 0x27CC70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27CC6Cu;
            // 0x27cc70: 0x960203ac  lhu         $v0, 0x3AC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27CCE4u;
            goto label_27cce4;
        }
    }
    ctx->pc = 0x27CC74u;
label_27cc74:
    // 0x27cc74: 0x8642054a  lh          $v0, 0x54A($s2)
    ctx->pc = 0x27cc74u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1354)));
label_27cc78:
    // 0x27cc78: 0x5840001a  blezl       $v0, . + 4 + (0x1A << 2)
label_27cc7c:
    if (ctx->pc == 0x27CC7Cu) {
        ctx->pc = 0x27CC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CC78u;
        // 0x27cc7c: 0x960203ac  lhu         $v0, 0x3AC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27CC80u;
        goto label_27cc80;
    }
    ctx->pc = 0x27CC78u;
    {
        const bool branch_taken_0x27cc78 = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x27cc78) {
            ctx->pc = 0x27CC7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27CC78u;
            // 0x27cc7c: 0x960203ac  lhu         $v0, 0x3AC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27CCE4u;
            goto label_27cce4;
        }
    }
    ctx->pc = 0x27CC80u;
label_27cc80:
    // 0x27cc80: 0x10000014  b           . + 4 + (0x14 << 2)
label_27cc84:
    if (ctx->pc == 0x27CC84u) {
        ctx->pc = 0x27CC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CC80u;
        // 0x27cc84: 0xa20002f4  sb          $zero, 0x2F4($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27CC88u;
        goto label_27cc88;
    }
    ctx->pc = 0x27CC80u;
    {
        const bool branch_taken_0x27cc80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27CC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CC80u;
        // 0x27cc84: 0xa20002f4  sb          $zero, 0x2F4($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cc80) {
            ctx->pc = 0x27CCD4u;
            goto label_27ccd4;
        }
    }
    ctx->pc = 0x27CC88u;
label_27cc88:
    // 0x27cc88: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x27cc88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
label_27cc8c:
    // 0x27cc8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27cc8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27cc90:
    // 0x27cc90: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x27cc90u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_27cc94:
    // 0x27cc94: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x27cc94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_27cc98:
    // 0x27cc98: 0x8c4500a8  lw          $a1, 0xA8($v0)
    ctx->pc = 0x27cc98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 168)));
label_27cc9c:
    // 0x27cc9c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x27cc9cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27cca0:
    // 0x27cca0: 0x8c4600ac  lw          $a2, 0xAC($v0)
    ctx->pc = 0x27cca0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_27cca4:
    // 0x27cca4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x27cca4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27cca8:
    // 0x27cca8: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x27cca8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_27ccac:
    // 0x27ccac: 0xc0aa15e  jal         func_2A8578
label_27ccb0:
    if (ctx->pc == 0x27CCB0u) {
        ctx->pc = 0x27CCB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CCACu;
        // 0x27ccb0: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27CCB4u;
        goto label_27ccb4;
    }
    ctx->pc = 0x27CCACu;
    SET_GPR_U32(ctx, 31, 0x27CCB4u);
    ctx->pc = 0x27CCB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27CCACu;
    // 0x27ccb0: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x27CCACu, 0x27CCB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CCB4u;
label_27ccb4:
    // 0x27ccb4: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x27ccb4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
label_27ccb8:
    // 0x27ccb8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x27ccb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_27ccbc:
    // 0x27ccbc: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x27ccbcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_27ccc0:
    // 0x27ccc0: 0xc055f06  jal         func_157C18
label_27ccc4:
    if (ctx->pc == 0x27CCC4u) {
        ctx->pc = 0x27CCC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CCC0u;
        // 0x27ccc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27CCC8u;
        goto label_27ccc8;
    }
    ctx->pc = 0x27CCC0u;
    SET_GPR_U32(ctx, 31, 0x27CCC8u);
    ctx->pc = 0x27CCC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27CCC0u;
    // 0x27ccc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x27CCC0u, 0x27CCC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CCC8u;
label_27ccc8:
    // 0x27ccc8: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_27cccc:
    if (ctx->pc == 0x27CCCCu) {
        ctx->pc = 0x27CCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CCC8u;
        // 0x27cccc: 0x960203ac  lhu         $v0, 0x3AC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27CCD0u;
        goto label_27ccd0;
    }
    ctx->pc = 0x27CCC8u;
    {
        const bool branch_taken_0x27ccc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27ccc8) {
            ctx->pc = 0x27CCCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27CCC8u;
            // 0x27cccc: 0x960203ac  lhu         $v0, 0x3AC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27CCE4u;
            goto label_27cce4;
        }
    }
    ctx->pc = 0x27CCD0u;
label_27ccd0:
    // 0x27ccd0: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x27ccd0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
label_27ccd4:
    // 0x27ccd4: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x27ccd4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
label_27ccd8:
    // 0x27ccd8: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x27ccd8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
label_27ccdc:
    // 0x27ccdc: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x27ccdcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
label_27cce0:
    // 0x27cce0: 0x960203ac  lhu         $v0, 0x3AC($s0)
    ctx->pc = 0x27cce0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
label_27cce4:
    // 0x27cce4: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x27cce4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_27cce8:
    // 0x27cce8: 0x10400058  beqz        $v0, . + 4 + (0x58 << 2)
label_27ccec:
    if (ctx->pc == 0x27CCECu) {
        ctx->pc = 0x27CCECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CCE8u;
        // 0x27ccec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27CCF0u;
        goto label_27ccf0;
    }
    ctx->pc = 0x27CCE8u;
    {
        const bool branch_taken_0x27cce8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27CCECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CCE8u;
        // 0x27ccec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cce8) {
            ctx->pc = 0x27CE4Cu;
            goto label_27ce4c;
        }
    }
    ctx->pc = 0x27CCF0u;
label_27ccf0:
    // 0x27ccf0: 0x8602056a  lh          $v0, 0x56A($s0)
    ctx->pc = 0x27ccf0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1386)));
label_27ccf4:
    // 0x27ccf4: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
label_27ccf8:
    if (ctx->pc == 0x27CCF8u) {
        ctx->pc = 0x27CCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CCF4u;
        // 0x27ccf8: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27CCFCu;
        goto label_27ccfc;
    }
    ctx->pc = 0x27CCF4u;
    {
        const bool branch_taken_0x27ccf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27CCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CCF4u;
        // 0x27ccf8: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ccf4) {
            ctx->pc = 0x27CDA0u;
            goto label_27cda0;
        }
    }
    ctx->pc = 0x27CCFCu;
label_27ccfc:
    // 0x27ccfc: 0x920302b4  lbu         $v1, 0x2B4($s0)
    ctx->pc = 0x27ccfcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
label_27cd00:
    // 0x27cd00: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x27cd00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_27cd04:
    // 0x27cd04: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_27cd08:
    if (ctx->pc == 0x27CD08u) {
        ctx->pc = 0x27CD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CD04u;
        // 0x27cd08: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27CD0Cu;
        goto label_27cd0c;
    }
    ctx->pc = 0x27CD04u;
    {
        const bool branch_taken_0x27cd04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27CD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CD04u;
        // 0x27cd08: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cd04) {
            ctx->pc = 0x27CD18u;
            goto label_27cd18;
        }
    }
    ctx->pc = 0x27CD0Cu;
label_27cd0c:
    // 0x27cd0c: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x27cd0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
label_27cd10:
    // 0x27cd10: 0x10000002  b           . + 4 + (0x2 << 2)
label_27cd14:
    if (ctx->pc == 0x27CD14u) {
        ctx->pc = 0x27CD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CD10u;
        // 0x27cd14: 0x8c510018  lw          $s1, 0x18($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27CD18u;
        goto label_27cd18;
    }
    ctx->pc = 0x27CD10u;
    {
        const bool branch_taken_0x27cd10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27CD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CD10u;
        // 0x27cd14: 0x8c510018  lw          $s1, 0x18($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cd10) {
            ctx->pc = 0x27CD1Cu;
            goto label_27cd1c;
        }
    }
    ctx->pc = 0x27CD18u;
label_27cd18:
    // 0x27cd18: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x27cd18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27cd1c:
    // 0x27cd1c: 0x12200020  beqz        $s1, . + 4 + (0x20 << 2)
label_27cd20:
    if (ctx->pc == 0x27CD20u) {
        ctx->pc = 0x27CD24u;
        goto label_27cd24;
    }
    ctx->pc = 0x27CD1Cu;
    {
        const bool branch_taken_0x27cd1c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x27cd1c) {
            ctx->pc = 0x27CDA0u;
            goto label_27cda0;
        }
    }
    ctx->pc = 0x27CD24u;
label_27cd24:
    // 0x27cd24: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x27cd24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
label_27cd28:
    // 0x27cd28: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x27cd28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_27cd2c:
    // 0x27cd2c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x27cd2cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_27cd30:
    // 0x27cd30: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x27cd30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_27cd34:
    // 0x27cd34: 0xc0c7408  jal         func_31D020
label_27cd38:
    if (ctx->pc == 0x27CD38u) {
        ctx->pc = 0x27CD3Cu;
        goto label_27cd3c;
    }
    ctx->pc = 0x27CD34u;
    SET_GPR_U32(ctx, 31, 0x27CD3Cu);
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x27CD34u, 0x27CD3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CD3Cu;
label_27cd3c:
    // 0x27cd3c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x27cd3cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_27cd40:
    // 0x27cd40: 0xc0c7408  jal         func_31D020
label_27cd44:
    if (ctx->pc == 0x27CD44u) {
        ctx->pc = 0x27CD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CD40u;
        // 0x27cd44: 0xe7a00010  swc1        $f0, 0x10($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x27CD48u;
        goto label_27cd48;
    }
    ctx->pc = 0x27CD40u;
    SET_GPR_U32(ctx, 31, 0x27CD48u);
    ctx->pc = 0x27CD44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27CD40u;
    // 0x27cd44: 0xe7a00010  swc1        $f0, 0x10($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x27CD40u, 0x27CD48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CD48u;
label_27cd48:
    // 0x27cd48: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x27cd48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_27cd4c:
    // 0x27cd4c: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x27cd4cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_27cd50:
    // 0x27cd50: 0xc0c7400  jal         func_31D000
label_27cd54:
    if (ctx->pc == 0x27CD54u) {
        ctx->pc = 0x27CD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CD50u;
        // 0x27cd54: 0xe7a00014  swc1        $f0, 0x14($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x27CD58u;
        goto label_27cd58;
    }
    ctx->pc = 0x27CD50u;
    SET_GPR_U32(ctx, 31, 0x27CD58u);
    ctx->pc = 0x27CD54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27CD50u;
    // 0x27cd54: 0xe7a00014  swc1        $f0, 0x14($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D000u, 0x27CD50u, 0x27CD58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CD58u;
label_27cd58:
    // 0x27cd58: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x27cd58u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_27cd5c:
    // 0x27cd5c: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x27cd5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_27cd60:
    // 0x27cd60: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x27cd60u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_27cd64:
    // 0x27cd64: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x27cd64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_27cd68:
    // 0x27cd68: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x27cd68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_27cd6c:
    // 0x27cd6c: 0x26250080  addiu       $a1, $s1, 0x80
    ctx->pc = 0x27cd6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
label_27cd70:
    // 0x27cd70: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x27cd70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_27cd74:
    // 0x27cd74: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x27cd74u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_27cd78:
    // 0x27cd78: 0xc0c28ac  jal         func_30A2B0
label_27cd7c:
    if (ctx->pc == 0x27CD7Cu) {
        ctx->pc = 0x27CD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CD78u;
        // 0x27cd7c: 0xe7a00018  swc1        $f0, 0x18($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x27CD80u;
        goto label_27cd80;
    }
    ctx->pc = 0x27CD78u;
    SET_GPR_U32(ctx, 31, 0x27CD80u);
    ctx->pc = 0x27CD7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27CD78u;
    // 0x27cd7c: 0xe7a00018  swc1        $f0, 0x18($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x27CD78u, 0x27CD80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CD80u;
label_27cd80:
    // 0x27cd80: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x27cd80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_27cd84:
    // 0x27cd84: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x27cd84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_27cd88:
    // 0x27cd88: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x27cd88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27cd8c:
    // 0x27cd8c: 0x2405004f  addiu       $a1, $zero, 0x4F
    ctx->pc = 0x27cd8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
label_27cd90:
    // 0x27cd90: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x27cd90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27cd94:
    // 0x27cd94: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x27cd94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_27cd98:
    // 0x27cd98: 0xc0c1a0e  jal         func_306838
label_27cd9c:
    if (ctx->pc == 0x27CD9Cu) {
        ctx->pc = 0x27CD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CD98u;
        // 0x27cd9c: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27CDA0u;
        goto label_27cda0;
    }
    ctx->pc = 0x27CD98u;
    SET_GPR_U32(ctx, 31, 0x27CDA0u);
    ctx->pc = 0x27CD9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27CD98u;
    // 0x27cd9c: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306838u, 0x27CD98u, 0x27CDA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CDA0u;
label_27cda0:
    // 0x27cda0: 0x5240002b  beql        $s2, $zero, . + 4 + (0x2B << 2)
label_27cda4:
    if (ctx->pc == 0x27CDA4u) {
        ctx->pc = 0x27CDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CDA0u;
        // 0x27cda4: 0xa600056a  sh          $zero, 0x56A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1386), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27CDA8u;
        goto label_27cda8;
    }
    ctx->pc = 0x27CDA0u;
    {
        const bool branch_taken_0x27cda0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x27cda0) {
            ctx->pc = 0x27CDA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27CDA0u;
            // 0x27cda4: 0xa600056a  sh          $zero, 0x56A($s0) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 16), 1386), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27CE50u;
            goto label_27ce50;
        }
    }
    ctx->pc = 0x27CDA8u;
label_27cda8:
    // 0x27cda8: 0xc0b6dac  jal         func_2DB6B0
label_27cdac:
    if (ctx->pc == 0x27CDACu) {
        ctx->pc = 0x27CDB0u;
        goto label_27cdb0;
    }
    ctx->pc = 0x27CDA8u;
    SET_GPR_U32(ctx, 31, 0x27CDB0u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x27CDA8u, 0x27CDB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CDB0u;
label_27cdb0:
    // 0x27cdb0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x27cdb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27cdb4:
    // 0x27cdb4: 0x960203ac  lhu         $v0, 0x3AC($s0)
    ctx->pc = 0x27cdb4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
label_27cdb8:
    // 0x27cdb8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x27cdb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_27cdbc:
    // 0x27cdbc: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_27cdc0:
    if (ctx->pc == 0x27CDC0u) {
        ctx->pc = 0x27CDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CDBCu;
        // 0x27cdc0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27CDC4u;
        goto label_27cdc4;
    }
    ctx->pc = 0x27CDBCu;
    {
        const bool branch_taken_0x27cdbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27CDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CDBCu;
        // 0x27cdc0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cdbc) {
            ctx->pc = 0x27CDFCu;
            goto label_27cdfc;
        }
    }
    ctx->pc = 0x27CDC4u;
label_27cdc4:
    // 0x27cdc4: 0x8e430214  lw          $v1, 0x214($s2)
    ctx->pc = 0x27cdc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 532)));
label_27cdc8:
    // 0x27cdc8: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x27cdc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_27cdcc:
    // 0x27cdcc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x27cdccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27cdd0:
    // 0x27cdd0: 0x846400a8  lh          $a0, 0xA8($v1)
    ctx->pc = 0x27cdd0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_27cdd4:
    // 0x27cdd4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x27cdd4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27cdd8:
    // 0x27cdd8: 0x8c6200ac  lw          $v0, 0xAC($v1)
    ctx->pc = 0x27cdd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_27cddc:
    // 0x27cddc: 0x40f809  jalr        $v0
label_27cde0:
    if (ctx->pc == 0x27CDE0u) {
        ctx->pc = 0x27CDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CDDCu;
        // 0x27cde0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27CDE4u;
        goto label_27cde4;
    }
    ctx->pc = 0x27CDDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x27CDE4u);
        ctx->pc = 0x27CDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CDDCu;
        // 0x27cde0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27CDDCu, 0x27CDE4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27CDE4u;
label_27cde4:
    // 0x27cde4: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x27cde4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
label_27cde8:
    // 0x27cde8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x27cde8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_27cdec:
    // 0x27cdec: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x27cdecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_27cdf0:
    // 0x27cdf0: 0x2484b000  addiu       $a0, $a0, -0x5000
    ctx->pc = 0x27cdf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946816));
label_27cdf4:
    // 0x27cdf4: 0xc0aa65e  jal         func_2A9978
label_27cdf8:
    if (ctx->pc == 0x27CDF8u) {
        ctx->pc = 0x27CDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CDF4u;
        // 0x27cdf8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27CDFCu;
        goto label_27cdfc;
    }
    ctx->pc = 0x27CDF4u;
    SET_GPR_U32(ctx, 31, 0x27CDFCu);
    ctx->pc = 0x27CDF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27CDF4u;
    // 0x27cdf8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9978u, 0x27CDF4u, 0x27CDFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CDFCu;
label_27cdfc:
    // 0x27cdfc: 0x960203ac  lhu         $v0, 0x3AC($s0)
    ctx->pc = 0x27cdfcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
label_27ce00:
    // 0x27ce00: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x27ce00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_27ce04:
    // 0x27ce04: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_27ce08:
    if (ctx->pc == 0x27CE08u) {
        ctx->pc = 0x27CE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CE04u;
        // 0x27ce08: 0x2405001e  addiu       $a1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27CE0Cu;
        goto label_27ce0c;
    }
    ctx->pc = 0x27CE04u;
    {
        const bool branch_taken_0x27ce04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27CE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CE04u;
        // 0x27ce08: 0x2405001e  addiu       $a1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ce04) {
            ctx->pc = 0x27CE44u;
            goto label_27ce44;
        }
    }
    ctx->pc = 0x27CE0Cu;
label_27ce0c:
    // 0x27ce0c: 0x8e430214  lw          $v1, 0x214($s2)
    ctx->pc = 0x27ce0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 532)));
label_27ce10:
    // 0x27ce10: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x27ce10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_27ce14:
    // 0x27ce14: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x27ce14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27ce18:
    // 0x27ce18: 0x846400a8  lh          $a0, 0xA8($v1)
    ctx->pc = 0x27ce18u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_27ce1c:
    // 0x27ce1c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x27ce1cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27ce20:
    // 0x27ce20: 0x8c6200ac  lw          $v0, 0xAC($v1)
    ctx->pc = 0x27ce20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_27ce24:
    // 0x27ce24: 0x40f809  jalr        $v0
label_27ce28:
    if (ctx->pc == 0x27CE28u) {
        ctx->pc = 0x27CE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CE24u;
        // 0x27ce28: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27CE2Cu;
        goto label_27ce2c;
    }
    ctx->pc = 0x27CE24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x27CE2Cu);
        ctx->pc = 0x27CE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CE24u;
        // 0x27ce28: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27CE24u, 0x27CE2Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27CE2Cu;
label_27ce2c:
    // 0x27ce2c: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x27ce2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
label_27ce30:
    // 0x27ce30: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x27ce30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_27ce34:
    // 0x27ce34: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x27ce34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_27ce38:
    // 0x27ce38: 0x2484b000  addiu       $a0, $a0, -0x5000
    ctx->pc = 0x27ce38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946816));
label_27ce3c:
    // 0x27ce3c: 0xc0aa65e  jal         func_2A9978
label_27ce40:
    if (ctx->pc == 0x27CE40u) {
        ctx->pc = 0x27CE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CE3Cu;
        // 0x27ce40: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27CE44u;
        goto label_27ce44;
    }
    ctx->pc = 0x27CE3Cu;
    SET_GPR_U32(ctx, 31, 0x27CE44u);
    ctx->pc = 0x27CE40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27CE3Cu;
    // 0x27ce40: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9978u, 0x27CE3Cu, 0x27CE44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CE44u;
label_27ce44:
    // 0x27ce44: 0x10000002  b           . + 4 + (0x2 << 2)
label_27ce48:
    if (ctx->pc == 0x27CE48u) {
        ctx->pc = 0x27CE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CE44u;
        // 0x27ce48: 0xa600056a  sh          $zero, 0x56A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1386), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27CE4Cu;
        goto label_27ce4c;
    }
    ctx->pc = 0x27CE44u;
    {
        const bool branch_taken_0x27ce44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27CE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CE44u;
        // 0x27ce48: 0xa600056a  sh          $zero, 0x56A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1386), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ce44) {
            ctx->pc = 0x27CE50u;
            goto label_27ce50;
        }
    }
    ctx->pc = 0x27CE4Cu;
label_27ce4c:
    // 0x27ce4c: 0xa602056a  sh          $v0, 0x56A($s0)
    ctx->pc = 0x27ce4cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1386), (uint16_t)GPR_U32(ctx, 2));
label_27ce50:
    // 0x27ce50: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x27ce50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_27ce54:
    // 0x27ce54: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x27ce54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_27ce58:
    // 0x27ce58: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x27ce58u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_27ce5c:
    // 0x27ce5c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x27ce5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_27ce60:
    // 0x27ce60: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x27ce60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_27ce64:
    // 0x27ce64: 0x3e00008  jr          $ra
label_27ce68:
    if (ctx->pc == 0x27CE68u) {
        ctx->pc = 0x27CE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CE64u;
        // 0x27ce68: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27CE6Cu;
        goto label_27ce6c;
    }
    ctx->pc = 0x27CE64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27CE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CE64u;
        // 0x27ce68: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27CE64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27CE6Cu;
label_27ce6c:
    // 0x27ce6c: 0x0  nop
    ctx->pc = 0x27ce6cu;
    // NOP
    ctx->pc = 0x27ce70u;
}
