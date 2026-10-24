#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r000_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r000
{
// Function: func_0079BD80
// Address: 0x79bd80 - 0x79c040
void func_0079BD80_0x79bd80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079BD80_0x79bd80");
#endif

    switch (ctx->pc) {
        case 0x79bd80u: goto label_79bd80;
        case 0x79bd84u: goto label_79bd84;
        case 0x79bd88u: goto label_79bd88;
        case 0x79bd8cu: goto label_79bd8c;
        case 0x79bd90u: goto label_79bd90;
        case 0x79bd94u: goto label_79bd94;
        case 0x79bd98u: goto label_79bd98;
        case 0x79bd9cu: goto label_79bd9c;
        case 0x79bda0u: goto label_79bda0;
        case 0x79bda4u: goto label_79bda4;
        case 0x79bda8u: goto label_79bda8;
        case 0x79bdacu: goto label_79bdac;
        case 0x79bdb0u: goto label_79bdb0;
        case 0x79bdb4u: goto label_79bdb4;
        case 0x79bdb8u: goto label_79bdb8;
        case 0x79bdbcu: goto label_79bdbc;
        case 0x79bdc0u: goto label_79bdc0;
        case 0x79bdc4u: goto label_79bdc4;
        case 0x79bdc8u: goto label_79bdc8;
        case 0x79bdccu: goto label_79bdcc;
        case 0x79bdd0u: goto label_79bdd0;
        case 0x79bdd4u: goto label_79bdd4;
        case 0x79bdd8u: goto label_79bdd8;
        case 0x79bddcu: goto label_79bddc;
        case 0x79bde0u: goto label_79bde0;
        case 0x79bde4u: goto label_79bde4;
        case 0x79bde8u: goto label_79bde8;
        case 0x79bdecu: goto label_79bdec;
        case 0x79bdf0u: goto label_79bdf0;
        case 0x79bdf4u: goto label_79bdf4;
        case 0x79bdf8u: goto label_79bdf8;
        case 0x79bdfcu: goto label_79bdfc;
        case 0x79be00u: goto label_79be00;
        case 0x79be04u: goto label_79be04;
        case 0x79be08u: goto label_79be08;
        case 0x79be0cu: goto label_79be0c;
        case 0x79be10u: goto label_79be10;
        case 0x79be14u: goto label_79be14;
        case 0x79be18u: goto label_79be18;
        case 0x79be1cu: goto label_79be1c;
        case 0x79be20u: goto label_79be20;
        case 0x79be24u: goto label_79be24;
        case 0x79be28u: goto label_79be28;
        case 0x79be2cu: goto label_79be2c;
        case 0x79be30u: goto label_79be30;
        case 0x79be34u: goto label_79be34;
        case 0x79be38u: goto label_79be38;
        case 0x79be3cu: goto label_79be3c;
        case 0x79be40u: goto label_79be40;
        case 0x79be44u: goto label_79be44;
        case 0x79be48u: goto label_79be48;
        case 0x79be4cu: goto label_79be4c;
        case 0x79be50u: goto label_79be50;
        case 0x79be54u: goto label_79be54;
        case 0x79be58u: goto label_79be58;
        case 0x79be5cu: goto label_79be5c;
        case 0x79be60u: goto label_79be60;
        case 0x79be64u: goto label_79be64;
        case 0x79be68u: goto label_79be68;
        case 0x79be6cu: goto label_79be6c;
        case 0x79be70u: goto label_79be70;
        case 0x79be74u: goto label_79be74;
        case 0x79be78u: goto label_79be78;
        case 0x79be7cu: goto label_79be7c;
        case 0x79be80u: goto label_79be80;
        case 0x79be84u: goto label_79be84;
        case 0x79be88u: goto label_79be88;
        case 0x79be8cu: goto label_79be8c;
        case 0x79be90u: goto label_79be90;
        case 0x79be94u: goto label_79be94;
        case 0x79be98u: goto label_79be98;
        case 0x79be9cu: goto label_79be9c;
        case 0x79bea0u: goto label_79bea0;
        case 0x79bea4u: goto label_79bea4;
        case 0x79bea8u: goto label_79bea8;
        case 0x79beacu: goto label_79beac;
        case 0x79beb0u: goto label_79beb0;
        case 0x79beb4u: goto label_79beb4;
        case 0x79beb8u: goto label_79beb8;
        case 0x79bebcu: goto label_79bebc;
        case 0x79bec0u: goto label_79bec0;
        case 0x79bec4u: goto label_79bec4;
        case 0x79bec8u: goto label_79bec8;
        case 0x79beccu: goto label_79becc;
        case 0x79bed0u: goto label_79bed0;
        case 0x79bed4u: goto label_79bed4;
        case 0x79bed8u: goto label_79bed8;
        case 0x79bedcu: goto label_79bedc;
        case 0x79bee0u: goto label_79bee0;
        case 0x79bee4u: goto label_79bee4;
        case 0x79bee8u: goto label_79bee8;
        case 0x79beecu: goto label_79beec;
        case 0x79bef0u: goto label_79bef0;
        case 0x79bef4u: goto label_79bef4;
        case 0x79bef8u: goto label_79bef8;
        case 0x79befcu: goto label_79befc;
        case 0x79bf00u: goto label_79bf00;
        case 0x79bf04u: goto label_79bf04;
        case 0x79bf08u: goto label_79bf08;
        case 0x79bf0cu: goto label_79bf0c;
        case 0x79bf10u: goto label_79bf10;
        case 0x79bf14u: goto label_79bf14;
        case 0x79bf18u: goto label_79bf18;
        case 0x79bf1cu: goto label_79bf1c;
        case 0x79bf20u: goto label_79bf20;
        case 0x79bf24u: goto label_79bf24;
        case 0x79bf28u: goto label_79bf28;
        case 0x79bf2cu: goto label_79bf2c;
        case 0x79bf30u: goto label_79bf30;
        case 0x79bf34u: goto label_79bf34;
        case 0x79bf38u: goto label_79bf38;
        case 0x79bf3cu: goto label_79bf3c;
        case 0x79bf40u: goto label_79bf40;
        case 0x79bf44u: goto label_79bf44;
        case 0x79bf48u: goto label_79bf48;
        case 0x79bf4cu: goto label_79bf4c;
        case 0x79bf50u: goto label_79bf50;
        case 0x79bf54u: goto label_79bf54;
        case 0x79bf58u: goto label_79bf58;
        case 0x79bf5cu: goto label_79bf5c;
        case 0x79bf60u: goto label_79bf60;
        case 0x79bf64u: goto label_79bf64;
        case 0x79bf68u: goto label_79bf68;
        case 0x79bf6cu: goto label_79bf6c;
        case 0x79bf70u: goto label_79bf70;
        case 0x79bf74u: goto label_79bf74;
        case 0x79bf78u: goto label_79bf78;
        case 0x79bf7cu: goto label_79bf7c;
        case 0x79bf80u: goto label_79bf80;
        case 0x79bf84u: goto label_79bf84;
        case 0x79bf88u: goto label_79bf88;
        case 0x79bf8cu: goto label_79bf8c;
        case 0x79bf90u: goto label_79bf90;
        case 0x79bf94u: goto label_79bf94;
        case 0x79bf98u: goto label_79bf98;
        case 0x79bf9cu: goto label_79bf9c;
        case 0x79bfa0u: goto label_79bfa0;
        case 0x79bfa4u: goto label_79bfa4;
        case 0x79bfa8u: goto label_79bfa8;
        case 0x79bfacu: goto label_79bfac;
        case 0x79bfb0u: goto label_79bfb0;
        case 0x79bfb4u: goto label_79bfb4;
        case 0x79bfb8u: goto label_79bfb8;
        case 0x79bfbcu: goto label_79bfbc;
        case 0x79bfc0u: goto label_79bfc0;
        case 0x79bfc4u: goto label_79bfc4;
        case 0x79bfc8u: goto label_79bfc8;
        case 0x79bfccu: goto label_79bfcc;
        case 0x79bfd0u: goto label_79bfd0;
        case 0x79bfd4u: goto label_79bfd4;
        case 0x79bfd8u: goto label_79bfd8;
        case 0x79bfdcu: goto label_79bfdc;
        case 0x79bfe0u: goto label_79bfe0;
        case 0x79bfe4u: goto label_79bfe4;
        case 0x79bfe8u: goto label_79bfe8;
        case 0x79bfecu: goto label_79bfec;
        case 0x79bff0u: goto label_79bff0;
        case 0x79bff4u: goto label_79bff4;
        case 0x79bff8u: goto label_79bff8;
        case 0x79bffcu: goto label_79bffc;
        case 0x79c000u: goto label_79c000;
        case 0x79c004u: goto label_79c004;
        case 0x79c008u: goto label_79c008;
        case 0x79c00cu: goto label_79c00c;
        case 0x79c010u: goto label_79c010;
        case 0x79c014u: goto label_79c014;
        case 0x79c018u: goto label_79c018;
        case 0x79c01cu: goto label_79c01c;
        case 0x79c020u: goto label_79c020;
        case 0x79c024u: goto label_79c024;
        case 0x79c028u: goto label_79c028;
        case 0x79c02cu: goto label_79c02c;
        case 0x79c030u: goto label_79c030;
        case 0x79c034u: goto label_79c034;
        case 0x79c038u: goto label_79c038;
        case 0x79c03cu: goto label_79c03c;
        default: break;
    }

    ctx->pc = 0x79bd80u;

label_79bd80:
    // 0x79bd80: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x79bd80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
label_79bd84:
    // 0x79bd84: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x79bd84u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_79bd88:
    // 0x79bd88: 0x8c627a8c  lw          $v0, 0x7A8C($v1)
    ctx->pc = 0x79bd88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 31372)));
label_79bd8c:
    // 0x79bd8c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x79bd8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_79bd90:
    // 0x79bd90: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x79bd90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_79bd94:
    // 0x79bd94: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x79bd94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_79bd98:
    // 0x79bd98: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x79bd98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_79bd9c:
    // 0x79bd9c: 0x3c100057  lui         $s0, 0x57
    ctx->pc = 0x79bd9cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)87 << 16));
label_79bda0:
    // 0x79bda0: 0xac627a8c  sw          $v0, 0x7A8C($v1)
    ctx->pc = 0x79bda0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 31372), GPR_U32(ctx, 2));
label_79bda4:
    // 0x79bda4: 0x24727a8c  addiu       $s2, $v1, 0x7A8C
    ctx->pc = 0x79bda4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 31372));
label_79bda8:
    // 0x79bda8: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x79bda8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_79bdac:
    // 0x79bdac: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x79bdacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_79bdb0:
    // 0x79bdb0: 0x3c110100  lui         $s1, 0x100
    ctx->pc = 0x79bdb0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)256 << 16));
label_79bdb4:
    // 0x79bdb4: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x79bdb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_79bdb8:
    // 0x79bdb8: 0x3c14003c  lui         $s4, 0x3C
    ctx->pc = 0x79bdb8u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)60 << 16));
label_79bdbc:
    // 0x79bdbc: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x79bdbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_79bdc0:
    // 0x79bdc0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x79bdc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_79bdc4:
    // 0x79bdc4: 0xe7b50098  swc1        $f21, 0x98($sp)
    ctx->pc = 0x79bdc4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_79bdc8:
    // 0x79bdc8: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x79bdc8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_79bdcc:
    // 0x79bdcc: 0x8e039b70  lw          $v1, -0x6490($s0)
    ctx->pc = 0x79bdccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294941552)));
label_79bdd0:
    // 0x79bdd0: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x79bdd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_79bdd4:
    // 0x79bdd4: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x79bdd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
label_79bdd8:
    // 0x79bdd8: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
label_79bddc:
    if (ctx->pc == 0x79BDDCu) {
        ctx->pc = 0x79BDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BDD8u;
        // 0x79bddc: 0x26159b70  addiu       $s5, $s0, -0x6490 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79BDE0u;
        goto label_79bde0;
    }
    ctx->pc = 0x79BDD8u;
    {
        const bool branch_taken_0x79bdd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79BDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BDD8u;
        // 0x79bddc: 0x26159b70  addiu       $s5, $s0, -0x6490 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941552));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bdd8) {
            ctx->pc = 0x79BE20u;
            goto label_79be20;
        }
    }
    ctx->pc = 0x79BDE0u;
label_79bde0:
    // 0x79bde0: 0x8e842f84  lw          $a0, 0x2F84($s4)
    ctx->pc = 0x79bde0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12164)));
label_79bde4:
    // 0x79bde4: 0xc0b0e6c  jal         func_2C39B0
label_79bde8:
    if (ctx->pc == 0x79BDE8u) {
        ctx->pc = 0x79BDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BDE4u;
        // 0x79bde8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79BDECu;
        goto label_79bdec;
    }
    ctx->pc = 0x79BDE4u;
    SET_GPR_U32(ctx, 31, 0x79BDECu);
    ctx->pc = 0x79BDE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BDE4u;
    // 0x79bde8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C39B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C39B0u, 0x79BDE4u, 0x79BDECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BDECu;
label_79bdec:
    // 0x79bdec: 0x8e842f84  lw          $a0, 0x2F84($s4)
    ctx->pc = 0x79bdecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12164)));
label_79bdf0:
    // 0x79bdf0: 0x2405102a  addiu       $a1, $zero, 0x102A
    ctx->pc = 0x79bdf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4138));
label_79bdf4:
    // 0x79bdf4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x79bdf4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79bdf8:
    // 0x79bdf8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79bdf8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79bdfc:
    // 0x79bdfc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x79bdfcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79be00:
    // 0x79be00: 0xc0b1032  jal         func_2C40C8
label_79be04:
    if (ctx->pc == 0x79BE04u) {
        ctx->pc = 0x79BE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BE00u;
        // 0x79be04: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79BE08u;
        goto label_79be08;
    }
    ctx->pc = 0x79BE00u;
    SET_GPR_U32(ctx, 31, 0x79BE08u);
    ctx->pc = 0x79BE04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BE00u;
    // 0x79be04: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C40C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C40C8u, 0x79BE00u, 0x79BE08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BE08u;
label_79be08:
    // 0x79be08: 0x8e039b70  lw          $v1, -0x6490($s0)
    ctx->pc = 0x79be08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294941552)));
label_79be0c:
    // 0x79be0c: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x79be0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_79be10:
    // 0x79be10: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x79be10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
label_79be14:
    // 0x79be14: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x79be14u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
label_79be18:
    // 0x79be18: 0xc0b0f04  jal         func_2C3C10
label_79be1c:
    if (ctx->pc == 0x79BE1Cu) {
        ctx->pc = 0x79BE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BE18u;
        // 0x79be1c: 0x8e842f84  lw          $a0, 0x2F84($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79BE20u;
        goto label_79be20;
    }
    ctx->pc = 0x79BE18u;
    SET_GPR_U32(ctx, 31, 0x79BE20u);
    ctx->pc = 0x79BE1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BE18u;
    // 0x79be1c: 0x8e842f84  lw          $a0, 0x2F84($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3C10u, 0x79BE18u, 0x79BE20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BE20u;
label_79be20:
    // 0x79be20: 0x8e842f84  lw          $a0, 0x2F84($s4)
    ctx->pc = 0x79be20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12164)));
label_79be24:
    // 0x79be24: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x79be24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_79be28:
    // 0x79be28: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x79be28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_79be2c:
    // 0x79be2c: 0xc0b0e6c  jal         func_2C39B0
label_79be30:
    if (ctx->pc == 0x79BE30u) {
        ctx->pc = 0x79BE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BE2Cu;
        // 0x79be30: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79BE34u;
        goto label_79be34;
    }
    ctx->pc = 0x79BE2Cu;
    SET_GPR_U32(ctx, 31, 0x79BE34u);
    ctx->pc = 0x79BE30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BE2Cu;
    // 0x79be30: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C39B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C39B0u, 0x79BE2Cu, 0x79BE34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BE34u;
label_79be34:
    // 0x79be34: 0x3c040074  lui         $a0, 0x74
    ctx->pc = 0x79be34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
label_79be38:
    // 0x79be38: 0x240a0014  addiu       $t2, $zero, 0x14
    ctx->pc = 0x79be38u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_79be3c:
    // 0x79be3c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x79be3cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79be40:
    // 0x79be40: 0x3c09ff00  lui         $t1, 0xFF00
    ctx->pc = 0x79be40u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65280 << 16));
label_79be44:
    // 0x79be44: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x79be44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_79be48:
    // 0x79be48: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79be48u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79be4c:
    // 0x79be4c: 0x24847470  addiu       $a0, $a0, 0x7470
    ctx->pc = 0x79be4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29808));
label_79be50:
    // 0x79be50: 0xc0c1c82  jal         func_307208
label_79be54:
    if (ctx->pc == 0x79BE54u) {
        ctx->pc = 0x79BE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BE50u;
        // 0x79be54: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79BE58u;
        goto label_79be58;
    }
    ctx->pc = 0x79BE50u;
    SET_GPR_U32(ctx, 31, 0x79BE58u);
    ctx->pc = 0x79BE54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BE50u;
    // 0x79be54: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307208u, 0x79BE50u, 0x79BE58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BE58u;
label_79be58:
    // 0x79be58: 0x8e822f84  lw          $v0, 0x2F84($s4)
    ctx->pc = 0x79be58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12164)));
label_79be5c:
    // 0x79be5c: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x79be5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_79be60:
    // 0x79be60: 0xc0b56a8  jal         func_2D5AA0
label_79be64:
    if (ctx->pc == 0x79BE64u) {
        ctx->pc = 0x79BE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BE60u;
        // 0x79be64: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79BE68u;
        goto label_79be68;
    }
    ctx->pc = 0x79BE60u;
    SET_GPR_U32(ctx, 31, 0x79BE68u);
    ctx->pc = 0x79BE64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BE60u;
    // 0x79be64: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79BE60u, 0x79BE68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BE68u;
label_79be68:
    // 0x79be68: 0x8e43ffec  lw          $v1, -0x14($s2)
    ctx->pc = 0x79be68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294967276)));
label_79be6c:
    // 0x79be6c: 0x3c02ff7f  lui         $v0, 0xFF7F
    ctx->pc = 0x79be6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65407 << 16));
label_79be70:
    // 0x79be70: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x79be70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_79be74:
    // 0x79be74: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x79be74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_79be78:
    // 0x79be78: 0xc0b6dac  jal         func_2DB6B0
label_79be7c:
    if (ctx->pc == 0x79BE7Cu) {
        ctx->pc = 0x79BE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BE78u;
        // 0x79be7c: 0xae43ffec  sw          $v1, -0x14($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4294967276), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79BE80u;
        goto label_79be80;
    }
    ctx->pc = 0x79BE78u;
    SET_GPR_U32(ctx, 31, 0x79BE80u);
    ctx->pc = 0x79BE7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BE78u;
    // 0x79be7c: 0xae43ffec  sw          $v1, -0x14($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294967276), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x79BE78u, 0x79BE80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BE80u;
label_79be80:
    // 0x79be80: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x79be80u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_79be84:
    // 0x79be84: 0x3c100057  lui         $s0, 0x57
    ctx->pc = 0x79be84u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)87 << 16));
label_79be88:
    // 0x79be88: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x79be88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
label_79be8c:
    // 0x79be8c: 0x8653054a  lh          $s3, 0x54A($s2)
    ctx->pc = 0x79be8cu;
    SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1354)));
label_79be90:
    // 0x79be90: 0x26108240  addiu       $s0, $s0, -0x7DC0
    ctx->pc = 0x79be90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294935104));
label_79be94:
    // 0x79be94: 0xc454b004  lwc1        $f20, -0x4FFC($v0)
    ctx->pc = 0x79be94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294946820)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_79be98:
    // 0x79be98: 0xc07e988  jal         func_1FA620
label_79be9c:
    if (ctx->pc == 0x79BE9Cu) {
        ctx->pc = 0x79BE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BE98u;
        // 0x79be9c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79BEA0u;
        goto label_79bea0;
    }
    ctx->pc = 0x79BE98u;
    SET_GPR_U32(ctx, 31, 0x79BEA0u);
    ctx->pc = 0x79BE9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BE98u;
    // 0x79be9c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA620u, 0x79BE98u, 0x79BEA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BEA0u;
label_79bea0:
    // 0x79bea0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x79bea0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_79bea4:
    // 0x79bea4: 0xc07eaec  jal         func_1FABB0
label_79bea8:
    if (ctx->pc == 0x79BEA8u) {
        ctx->pc = 0x79BEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BEA4u;
        // 0x79bea8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79BEACu;
        goto label_79beac;
    }
    ctx->pc = 0x79BEA4u;
    SET_GPR_U32(ctx, 31, 0x79BEACu);
    ctx->pc = 0x79BEA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BEA4u;
    // 0x79bea8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FABB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FABB0u, 0x79BEA4u, 0x79BEACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BEACu;
label_79beac:
    // 0x79beac: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x79beacu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_79beb0:
    // 0x79beb0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x79beb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_79beb4:
    // 0x79beb4: 0x3047ffff  andi        $a3, $v0, 0xFFFF
    ctx->pc = 0x79beb4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_79beb8:
    // 0x79beb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79beb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_79bebc:
    // 0x79bebc: 0xc07db46  jal         func_1F6D18
label_79bec0:
    if (ctx->pc == 0x79BEC0u) {
        ctx->pc = 0x79BEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BEBCu;
        // 0x79bec0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79BEC4u;
        goto label_79bec4;
    }
    ctx->pc = 0x79BEBCu;
    SET_GPR_U32(ctx, 31, 0x79BEC4u);
    ctx->pc = 0x79BEC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BEBCu;
    // 0x79bec0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F6D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F6D18u, 0x79BEBCu, 0x79BEC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BEC4u;
label_79bec4:
    // 0x79bec4: 0x3c0141db  lui         $at, 0x41DB
    ctx->pc = 0x79bec4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16859 << 16));
label_79bec8:
    // 0x79bec8: 0x3421ae14  ori         $at, $at, 0xAE14
    ctx->pc = 0x79bec8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)44564);
label_79becc:
    // 0x79becc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x79beccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_79bed0:
    // 0x79bed0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x79bed0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_79bed4:
    // 0x79bed4: 0x3c01c23a  lui         $at, 0xC23A
    ctx->pc = 0x79bed4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49722 << 16));
label_79bed8:
    // 0x79bed8: 0x34210a3d  ori         $at, $at, 0xA3D
    ctx->pc = 0x79bed8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2621);
label_79bedc:
    // 0x79bedc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79bedcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_79bee0:
    // 0x79bee0: 0xe7b5000c  swc1        $f21, 0xC($sp)
    ctx->pc = 0x79bee0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_79bee4:
    // 0x79bee4: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x79bee4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_79bee8:
    // 0x79bee8: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x79bee8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_79beec:
    // 0x79beec: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x79beecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_79bef0:
    // 0x79bef0: 0x8e420214  lw          $v0, 0x214($s2)
    ctx->pc = 0x79bef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 532)));
label_79bef4:
    // 0x79bef4: 0x84440070  lh          $a0, 0x70($v0)
    ctx->pc = 0x79bef4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_79bef8:
    // 0x79bef8: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x79bef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_79befc:
    // 0x79befc: 0x60f809  jalr        $v1
label_79bf00:
    if (ctx->pc == 0x79BF00u) {
        ctx->pc = 0x79BF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BEFCu;
        // 0x79bf00: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79BF04u;
        goto label_79bf04;
    }
    ctx->pc = 0x79BEFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x79BF04u);
        ctx->pc = 0x79BF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BEFCu;
        // 0x79bf00: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79BEFCu, 0x79BF04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x79BF04u;
label_79bf04:
    // 0x79bf04: 0x8e460214  lw          $a2, 0x214($s2)
    ctx->pc = 0x79bf04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 532)));
label_79bf08:
    // 0x79bf08: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x79bf08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_79bf0c:
    // 0x79bf0c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x79bf0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_79bf10:
    // 0x79bf10: 0x84c40078  lh          $a0, 0x78($a2)
    ctx->pc = 0x79bf10u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 120)));
label_79bf14:
    // 0x79bf14: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x79bf14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_79bf18:
    // 0x79bf18: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x79bf18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
label_79bf1c:
    // 0x79bf1c: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x79bf1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
label_79bf20:
    // 0x79bf20: 0xe615000c  swc1        $f21, 0xC($s0)
    ctx->pc = 0x79bf20u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_79bf24:
    // 0x79bf24: 0x8cc2007c  lw          $v0, 0x7C($a2)
    ctx->pc = 0x79bf24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 124)));
label_79bf28:
    // 0x79bf28: 0x40f809  jalr        $v0
label_79bf2c:
    if (ctx->pc == 0x79BF2Cu) {
        ctx->pc = 0x79BF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BF28u;
        // 0x79bf2c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79BF30u;
        goto label_79bf30;
    }
    ctx->pc = 0x79BF28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x79BF30u);
        ctx->pc = 0x79BF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BF28u;
        // 0x79bf2c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79BF28u, 0x79BF30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x79BF30u;
label_79bf30:
    // 0x79bf30: 0xc04b106  jal         func_12C418
label_79bf34:
    if (ctx->pc == 0x79BF34u) {
        ctx->pc = 0x79BF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BF30u;
        // 0x79bf34: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79BF38u;
        goto label_79bf38;
    }
    ctx->pc = 0x79BF30u;
    SET_GPR_U32(ctx, 31, 0x79BF38u);
    ctx->pc = 0x79BF34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BF30u;
    // 0x79bf34: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C418u, 0x79BF30u, 0x79BF38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BF38u;
label_79bf38:
    // 0x79bf38: 0x3c04005f  lui         $a0, 0x5F
    ctx->pc = 0x79bf38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)95 << 16));
label_79bf3c:
    // 0x79bf3c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x79bf3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_79bf40:
    // 0x79bf40: 0xc0afc1e  jal         func_2BF078
label_79bf44:
    if (ctx->pc == 0x79BF44u) {
        ctx->pc = 0x79BF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BF40u;
        // 0x79bf44: 0x24848658  addiu       $a0, $a0, -0x79A8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936152));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79BF48u;
        goto label_79bf48;
    }
    ctx->pc = 0x79BF40u;
    SET_GPR_U32(ctx, 31, 0x79BF48u);
    ctx->pc = 0x79BF44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BF40u;
    // 0x79bf44: 0x24848658  addiu       $a0, $a0, -0x79A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF078u, 0x79BF40u, 0x79BF48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BF48u;
label_79bf48:
    // 0x79bf48: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x79bf48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_79bf4c:
    // 0x79bf4c: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x79bf4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
label_79bf50:
    // 0x79bf50: 0xa3a30010  sb          $v1, 0x10($sp)
    ctx->pc = 0x79bf50u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 3));
label_79bf54:
    // 0x79bf54: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x79bf54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_79bf58:
    // 0x79bf58: 0xc0a54b4  jal         func_2952D0
label_79bf5c:
    if (ctx->pc == 0x79BF5Cu) {
        ctx->pc = 0x79BF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BF58u;
        // 0x79bf5c: 0x24846ab0  addiu       $a0, $a0, 0x6AB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27312));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79BF60u;
        goto label_79bf60;
    }
    ctx->pc = 0x79BF58u;
    SET_GPR_U32(ctx, 31, 0x79BF60u);
    ctx->pc = 0x79BF5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BF58u;
    // 0x79bf5c: 0x24846ab0  addiu       $a0, $a0, 0x6AB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x79BF58u, 0x79BF60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BF60u;
label_79bf60:
    // 0x79bf60: 0xc0a573a  jal         func_295CE8
label_79bf64:
    if (ctx->pc == 0x79BF64u) {
        ctx->pc = 0x79BF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BF60u;
        // 0x79bf64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79BF68u;
        goto label_79bf68;
    }
    ctx->pc = 0x79BF60u;
    SET_GPR_U32(ctx, 31, 0x79BF68u);
    ctx->pc = 0x79BF64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BF60u;
    // 0x79bf64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CE8u, 0x79BF60u, 0x79BF68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BF68u;
label_79bf68:
    // 0x79bf68: 0xc0b0f04  jal         func_2C3C10
label_79bf6c:
    if (ctx->pc == 0x79BF6Cu) {
        ctx->pc = 0x79BF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BF68u;
        // 0x79bf6c: 0x8e842f84  lw          $a0, 0x2F84($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79BF70u;
        goto label_79bf70;
    }
    ctx->pc = 0x79BF68u;
    SET_GPR_U32(ctx, 31, 0x79BF70u);
    ctx->pc = 0x79BF6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BF68u;
    // 0x79bf6c: 0x8e842f84  lw          $a0, 0x2F84($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3C10u, 0x79BF68u, 0x79BF70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BF70u;
label_79bf70:
    // 0x79bf70: 0x3c10007a  lui         $s0, 0x7A
    ctx->pc = 0x79bf70u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)122 << 16));
label_79bf74:
    // 0x79bf74: 0x2610c900  addiu       $s0, $s0, -0x3700
    ctx->pc = 0x79bf74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294953216));
label_79bf78:
    // 0x79bf78: 0xc1e6496  jal         func_799258
label_79bf7c:
    if (ctx->pc == 0x79BF7Cu) {
        ctx->pc = 0x79BF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BF78u;
        // 0x79bf7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79BF80u;
        goto label_79bf80;
    }
    ctx->pc = 0x79BF78u;
    SET_GPR_U32(ctx, 31, 0x79BF80u);
    ctx->pc = 0x79BF7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BF78u;
    // 0x79bf7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x799258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799258u, 0x79BF78u, 0x79BF80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BF80u;
label_79bf80:
    // 0x79bf80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79bf80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_79bf84:
    // 0x79bf84: 0xc1e6500  jal         func_799400
label_79bf88:
    if (ctx->pc == 0x79BF88u) {
        ctx->pc = 0x79BF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BF84u;
        // 0x79bf88: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79BF8Cu;
        goto label_79bf8c;
    }
    ctx->pc = 0x79BF84u;
    SET_GPR_U32(ctx, 31, 0x79BF8Cu);
    ctx->pc = 0x79BF88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BF84u;
    // 0x79bf88: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x799400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799400u, 0x79BF84u, 0x79BF8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BF8Cu;
label_79bf8c:
    // 0x79bf8c: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x79bf8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_79bf90:
    // 0x79bf90: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x79bf90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79bf94:
    // 0x79bf94: 0x8c44d930  lw          $a0, -0x26D0($v0)
    ctx->pc = 0x79bf94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294957360)));
label_79bf98:
    // 0x79bf98: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79bf98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79bf9c:
    // 0x79bf9c: 0xc058008  jal         func_160020
label_79bfa0:
    if (ctx->pc == 0x79BFA0u) {
        ctx->pc = 0x79BFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BF9Cu;
        // 0x79bfa0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79BFA4u;
        goto label_79bfa4;
    }
    ctx->pc = 0x79BF9Cu;
    SET_GPR_U32(ctx, 31, 0x79BFA4u);
    ctx->pc = 0x79BFA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BF9Cu;
    // 0x79bfa0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x160020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160020u, 0x79BF9Cu, 0x79BFA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BFA4u;
label_79bfa4:
    // 0x79bfa4: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x79bfa4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
label_79bfa8:
    // 0x79bfa8: 0x3c07007a  lui         $a3, 0x7A
    ctx->pc = 0x79bfa8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)122 << 16));
label_79bfac:
    // 0x79bfac: 0x2610ea60  addiu       $s0, $s0, -0x15A0
    ctx->pc = 0x79bfacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961760));
label_79bfb0:
    // 0x79bfb0: 0x24e7c040  addiu       $a3, $a3, -0x3FC0
    ctx->pc = 0x79bfb0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294950976));
label_79bfb4:
    // 0x79bfb4: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x79bfb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_79bfb8:
    // 0x79bfb8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x79bfb8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79bfbc:
    // 0x79bfbc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x79bfbcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79bfc0:
    // 0x79bfc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79bfc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_79bfc4:
    // 0x79bfc4: 0xc0b09e4  jal         func_2C2790
label_79bfc8:
    if (ctx->pc == 0x79BFC8u) {
        ctx->pc = 0x79BFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BFC4u;
        // 0x79bfc8: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79BFCCu;
        goto label_79bfcc;
    }
    ctx->pc = 0x79BFC4u;
    SET_GPR_U32(ctx, 31, 0x79BFCCu);
    ctx->pc = 0x79BFC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BFC4u;
    // 0x79bfc8: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2790u, 0x79BFC4u, 0x79BFCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BFCCu;
label_79bfcc:
    // 0x79bfcc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79bfccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_79bfd0:
    // 0x79bfd0: 0xc0b0a54  jal         func_2C2950
label_79bfd4:
    if (ctx->pc == 0x79BFD4u) {
        ctx->pc = 0x79BFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BFD0u;
        // 0x79bfd4: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79BFD8u;
        goto label_79bfd8;
    }
    ctx->pc = 0x79BFD0u;
    SET_GPR_U32(ctx, 31, 0x79BFD8u);
    ctx->pc = 0x79BFD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BFD0u;
    // 0x79bfd4: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2950u, 0x79BFD0u, 0x79BFD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BFD8u;
label_79bfd8:
    // 0x79bfd8: 0x3c07007a  lui         $a3, 0x7A
    ctx->pc = 0x79bfd8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)122 << 16));
label_79bfdc:
    // 0x79bfdc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79bfdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_79bfe0:
    // 0x79bfe0: 0x24e7c128  addiu       $a3, $a3, -0x3ED8
    ctx->pc = 0x79bfe0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294951208));
label_79bfe4:
    // 0x79bfe4: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x79bfe4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_79bfe8:
    // 0x79bfe8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x79bfe8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79bfec:
    // 0x79bfec: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x79bfecu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79bff0:
    // 0x79bff0: 0xc0b09e4  jal         func_2C2790
label_79bff4:
    if (ctx->pc == 0x79BFF4u) {
        ctx->pc = 0x79BFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BFF0u;
        // 0x79bff4: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79BFF8u;
        goto label_79bff8;
    }
    ctx->pc = 0x79BFF0u;
    SET_GPR_U32(ctx, 31, 0x79BFF8u);
    ctx->pc = 0x79BFF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BFF0u;
    // 0x79bff4: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2790u, 0x79BFF0u, 0x79BFF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BFF8u;
label_79bff8:
    // 0x79bff8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79bff8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_79bffc:
    // 0x79bffc: 0xc0b0a7e  jal         func_2C29F8
label_79c000:
    if (ctx->pc == 0x79C000u) {
        ctx->pc = 0x79C000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BFFCu;
        // 0x79c000: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79C004u;
        goto label_79c004;
    }
    ctx->pc = 0x79BFFCu;
    SET_GPR_U32(ctx, 31, 0x79C004u);
    ctx->pc = 0x79C000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BFFCu;
    // 0x79c000: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C29F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C29F8u, 0x79BFFCu, 0x79C004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79C004u;
label_79c004:
    // 0x79c004: 0x8e832f84  lw          $v1, 0x2F84($s4)
    ctx->pc = 0x79c004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12164)));
label_79c008:
    // 0x79c008: 0xc0b5692  jal         func_2D5A48
label_79c00c:
    if (ctx->pc == 0x79C00Cu) {
        ctx->pc = 0x79C00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C008u;
        // 0x79c00c: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79C010u;
        goto label_79c010;
    }
    ctx->pc = 0x79C008u;
    SET_GPR_U32(ctx, 31, 0x79C010u);
    ctx->pc = 0x79C00Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79C008u;
    // 0x79c00c: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79C008u, 0x79C010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79C010u;
label_79c010:
    // 0x79c010: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x79c010u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_79c014:
    // 0x79c014: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x79c014u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_79c018:
    // 0x79c018: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x79c018u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_79c01c:
    // 0x79c01c: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x79c01cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_79c020:
    // 0x79c020: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x79c020u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_79c024:
    // 0x79c024: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x79c024u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_79c028:
    // 0x79c028: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x79c028u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_79c02c:
    // 0x79c02c: 0xc7b50098  lwc1        $f21, 0x98($sp)
    ctx->pc = 0x79c02cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_79c030:
    // 0x79c030: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x79c030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_79c034:
    // 0x79c034: 0x3e00008  jr          $ra
label_79c038:
    if (ctx->pc == 0x79C038u) {
        ctx->pc = 0x79C038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C034u;
        // 0x79c038: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79C03Cu;
        goto label_79c03c;
    }
    ctx->pc = 0x79C034u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79C038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C034u;
        // 0x79c038: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79C034u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79C03Cu;
label_79c03c:
    // 0x79c03c: 0x0  nop
    ctx->pc = 0x79c03cu;
    // NOP
    ctx->pc = 0x79c040u;
}
} // namespace gh_r000
