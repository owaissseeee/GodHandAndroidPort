#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r304_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r304
{
// Function: func_00799A88
// Address: 0x799a88 - 0x799ca0
void func_00799A88_0x799a88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00799A88_0x799a88");
#endif

    switch (ctx->pc) {
        case 0x799a88u: goto label_799a88;
        case 0x799a8cu: goto label_799a8c;
        case 0x799a90u: goto label_799a90;
        case 0x799a94u: goto label_799a94;
        case 0x799a98u: goto label_799a98;
        case 0x799a9cu: goto label_799a9c;
        case 0x799aa0u: goto label_799aa0;
        case 0x799aa4u: goto label_799aa4;
        case 0x799aa8u: goto label_799aa8;
        case 0x799aacu: goto label_799aac;
        case 0x799ab0u: goto label_799ab0;
        case 0x799ab4u: goto label_799ab4;
        case 0x799ab8u: goto label_799ab8;
        case 0x799abcu: goto label_799abc;
        case 0x799ac0u: goto label_799ac0;
        case 0x799ac4u: goto label_799ac4;
        case 0x799ac8u: goto label_799ac8;
        case 0x799accu: goto label_799acc;
        case 0x799ad0u: goto label_799ad0;
        case 0x799ad4u: goto label_799ad4;
        case 0x799ad8u: goto label_799ad8;
        case 0x799adcu: goto label_799adc;
        case 0x799ae0u: goto label_799ae0;
        case 0x799ae4u: goto label_799ae4;
        case 0x799ae8u: goto label_799ae8;
        case 0x799aecu: goto label_799aec;
        case 0x799af0u: goto label_799af0;
        case 0x799af4u: goto label_799af4;
        case 0x799af8u: goto label_799af8;
        case 0x799afcu: goto label_799afc;
        case 0x799b00u: goto label_799b00;
        case 0x799b04u: goto label_799b04;
        case 0x799b08u: goto label_799b08;
        case 0x799b0cu: goto label_799b0c;
        case 0x799b10u: goto label_799b10;
        case 0x799b14u: goto label_799b14;
        case 0x799b18u: goto label_799b18;
        case 0x799b1cu: goto label_799b1c;
        case 0x799b20u: goto label_799b20;
        case 0x799b24u: goto label_799b24;
        case 0x799b28u: goto label_799b28;
        case 0x799b2cu: goto label_799b2c;
        case 0x799b30u: goto label_799b30;
        case 0x799b34u: goto label_799b34;
        case 0x799b38u: goto label_799b38;
        case 0x799b3cu: goto label_799b3c;
        case 0x799b40u: goto label_799b40;
        case 0x799b44u: goto label_799b44;
        case 0x799b48u: goto label_799b48;
        case 0x799b4cu: goto label_799b4c;
        case 0x799b50u: goto label_799b50;
        case 0x799b54u: goto label_799b54;
        case 0x799b58u: goto label_799b58;
        case 0x799b5cu: goto label_799b5c;
        case 0x799b60u: goto label_799b60;
        case 0x799b64u: goto label_799b64;
        case 0x799b68u: goto label_799b68;
        case 0x799b6cu: goto label_799b6c;
        case 0x799b70u: goto label_799b70;
        case 0x799b74u: goto label_799b74;
        case 0x799b78u: goto label_799b78;
        case 0x799b7cu: goto label_799b7c;
        case 0x799b80u: goto label_799b80;
        case 0x799b84u: goto label_799b84;
        case 0x799b88u: goto label_799b88;
        case 0x799b8cu: goto label_799b8c;
        case 0x799b90u: goto label_799b90;
        case 0x799b94u: goto label_799b94;
        case 0x799b98u: goto label_799b98;
        case 0x799b9cu: goto label_799b9c;
        case 0x799ba0u: goto label_799ba0;
        case 0x799ba4u: goto label_799ba4;
        case 0x799ba8u: goto label_799ba8;
        case 0x799bacu: goto label_799bac;
        case 0x799bb0u: goto label_799bb0;
        case 0x799bb4u: goto label_799bb4;
        case 0x799bb8u: goto label_799bb8;
        case 0x799bbcu: goto label_799bbc;
        case 0x799bc0u: goto label_799bc0;
        case 0x799bc4u: goto label_799bc4;
        case 0x799bc8u: goto label_799bc8;
        case 0x799bccu: goto label_799bcc;
        case 0x799bd0u: goto label_799bd0;
        case 0x799bd4u: goto label_799bd4;
        case 0x799bd8u: goto label_799bd8;
        case 0x799bdcu: goto label_799bdc;
        case 0x799be0u: goto label_799be0;
        case 0x799be4u: goto label_799be4;
        case 0x799be8u: goto label_799be8;
        case 0x799becu: goto label_799bec;
        case 0x799bf0u: goto label_799bf0;
        case 0x799bf4u: goto label_799bf4;
        case 0x799bf8u: goto label_799bf8;
        case 0x799bfcu: goto label_799bfc;
        case 0x799c00u: goto label_799c00;
        case 0x799c04u: goto label_799c04;
        case 0x799c08u: goto label_799c08;
        case 0x799c0cu: goto label_799c0c;
        case 0x799c10u: goto label_799c10;
        case 0x799c14u: goto label_799c14;
        case 0x799c18u: goto label_799c18;
        case 0x799c1cu: goto label_799c1c;
        case 0x799c20u: goto label_799c20;
        case 0x799c24u: goto label_799c24;
        case 0x799c28u: goto label_799c28;
        case 0x799c2cu: goto label_799c2c;
        case 0x799c30u: goto label_799c30;
        case 0x799c34u: goto label_799c34;
        case 0x799c38u: goto label_799c38;
        case 0x799c3cu: goto label_799c3c;
        case 0x799c40u: goto label_799c40;
        case 0x799c44u: goto label_799c44;
        case 0x799c48u: goto label_799c48;
        case 0x799c4cu: goto label_799c4c;
        case 0x799c50u: goto label_799c50;
        case 0x799c54u: goto label_799c54;
        case 0x799c58u: goto label_799c58;
        case 0x799c5cu: goto label_799c5c;
        case 0x799c60u: goto label_799c60;
        case 0x799c64u: goto label_799c64;
        case 0x799c68u: goto label_799c68;
        case 0x799c6cu: goto label_799c6c;
        case 0x799c70u: goto label_799c70;
        case 0x799c74u: goto label_799c74;
        case 0x799c78u: goto label_799c78;
        case 0x799c7cu: goto label_799c7c;
        case 0x799c80u: goto label_799c80;
        case 0x799c84u: goto label_799c84;
        case 0x799c88u: goto label_799c88;
        case 0x799c8cu: goto label_799c8c;
        case 0x799c90u: goto label_799c90;
        case 0x799c94u: goto label_799c94;
        case 0x799c98u: goto label_799c98;
        case 0x799c9cu: goto label_799c9c;
        default: break;
    }

    ctx->pc = 0x799a88u;

label_799a88:
    // 0x799a88: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x799a88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_799a8c:
    // 0x799a8c: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x799a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
label_799a90:
    // 0x799a90: 0x8c622f84  lw          $v0, 0x2F84($v1)
    ctx->pc = 0x799a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12164)));
label_799a94:
    // 0x799a94: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799a94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_799a98:
    // 0x799a98: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x799a98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_799a9c:
    // 0x799a9c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x799a9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_799aa0:
    // 0x799aa0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x799aa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_799aa4:
    // 0x799aa4: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x799aa4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_799aa8:
    // 0x799aa8: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x799aa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_799aac:
    // 0x799aac: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x799aacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_799ab0:
    // 0x799ab0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x799ab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_799ab4:
    // 0x799ab4: 0xc0b56a8  jal         func_2D5AA0
label_799ab8:
    if (ctx->pc == 0x799AB8u) {
        ctx->pc = 0x799AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799AB4u;
        // 0x799ab8: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799ABCu;
        goto label_799abc;
    }
    ctx->pc = 0x799AB4u;
    SET_GPR_U32(ctx, 31, 0x799ABCu);
    ctx->pc = 0x799AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799AB4u;
    // 0x799ab8: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799AB4u, 0x799ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799ABCu;
label_799abc:
    // 0x799abc: 0x3c04007a  lui         $a0, 0x7A
    ctx->pc = 0x799abcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)122 << 16));
label_799ac0:
    // 0x799ac0: 0x8c82ad00  lw          $v0, -0x5300($a0)
    ctx->pc = 0x799ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294946048)));
label_799ac4:
    // 0x799ac4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x799ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_799ac8:
    // 0x799ac8: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_799acc:
    if (ctx->pc == 0x799ACCu) {
        ctx->pc = 0x799ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799AC8u;
        // 0x799acc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799AD0u;
        goto label_799ad0;
    }
    ctx->pc = 0x799AC8u;
    {
        const bool branch_taken_0x799ac8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x799ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799AC8u;
        // 0x799acc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799ac8) {
            ctx->pc = 0x799ADCu;
            goto label_799adc;
        }
    }
    ctx->pc = 0x799AD0u;
label_799ad0:
    // 0x799ad0: 0x8e222f84  lw          $v0, 0x2F84($s1)
    ctx->pc = 0x799ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
label_799ad4:
    // 0x799ad4: 0xc0b5692  jal         func_2D5A48
label_799ad8:
    if (ctx->pc == 0x799AD8u) {
        ctx->pc = 0x799AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799AD4u;
        // 0x799ad8: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799ADCu;
        goto label_799adc;
    }
    ctx->pc = 0x799AD4u;
    SET_GPR_U32(ctx, 31, 0x799ADCu);
    ctx->pc = 0x799AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799AD4u;
    // 0x799ad8: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x799AD4u, 0x799ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799ADCu;
label_799adc:
    // 0x799adc: 0x8e02ad00  lw          $v0, -0x5300($s0)
    ctx->pc = 0x799adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294946048)));
label_799ae0:
    // 0x799ae0: 0x3c12005f  lui         $s2, 0x5F
    ctx->pc = 0x799ae0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)95 << 16));
label_799ae4:
    // 0x799ae4: 0x3c140060  lui         $s4, 0x60
    ctx->pc = 0x799ae4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)96 << 16));
label_799ae8:
    // 0x799ae8: 0x3c134000  lui         $s3, 0x4000
    ctx->pc = 0x799ae8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)16384 << 16));
label_799aec:
    // 0x799aec: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x799aecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_799af0:
    // 0x799af0: 0x8ca30214  lw          $v1, 0x214($a1)
    ctx->pc = 0x799af0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 532)));
label_799af4:
    // 0x799af4: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x799af4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_799af8:
    // 0x799af8: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x799af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_799afc:
    // 0x799afc: 0x40f809  jalr        $v0
label_799b00:
    if (ctx->pc == 0x799B00u) {
        ctx->pc = 0x799B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799AFCu;
        // 0x799b00: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799B04u;
        goto label_799b04;
    }
    ctx->pc = 0x799AFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x799B04u);
        ctx->pc = 0x799B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799AFCu;
        // 0x799b00: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799AFCu, 0x799B04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x799B04u;
label_799b04:
    // 0x799b04: 0x8e03ad00  lw          $v1, -0x5300($s0)
    ctx->pc = 0x799b04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294946048)));
label_799b08:
    // 0x799b08: 0x3c01c2c8  lui         $at, 0xC2C8
    ctx->pc = 0x799b08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49864 << 16));
label_799b0c:
    // 0x799b0c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x799b0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_799b10:
    // 0x799b10: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x799b10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_799b14:
    // 0x799b14: 0x3c01419d  lui         $at, 0x419D
    ctx->pc = 0x799b14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16797 << 16));
label_799b18:
    // 0x799b18: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x799b18u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_799b1c:
    // 0x799b1c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x799b1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_799b20:
    // 0x799b20: 0x8c8200f0  lw          $v0, 0xF0($a0)
    ctx->pc = 0x799b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 240)));
label_799b24:
    // 0x799b24: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x799b24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
label_799b28:
    // 0x799b28: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x799b28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_799b2c:
    // 0x799b2c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x799b2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_799b30:
    // 0x799b30: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x799b30u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_799b34:
    // 0x799b34: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x799b34u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_799b38:
    // 0x799b38: 0x3c014096  lui         $at, 0x4096
    ctx->pc = 0x799b38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16534 << 16));
label_799b3c:
    // 0x799b3c: 0x3421cbe4  ori         $at, $at, 0xCBE4
    ctx->pc = 0x799b3cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52196);
label_799b40:
    // 0x799b40: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x799b40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_799b44:
    // 0x799b44: 0x8e03ad00  lw          $v1, -0x5300($s0)
    ctx->pc = 0x799b44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294946048)));
label_799b48:
    // 0x799b48: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x799b48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_799b4c:
    // 0x799b4c: 0xac400100  sw          $zero, 0x100($v0)
    ctx->pc = 0x799b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 256), GPR_U32(ctx, 0));
label_799b50:
    // 0x799b50: 0x24420100  addiu       $v0, $v0, 0x100
    ctx->pc = 0x799b50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
label_799b54:
    // 0x799b54: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x799b54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_799b58:
    // 0x799b58: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x799b58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
label_799b5c:
    // 0x799b5c: 0x8e438658  lw          $v1, -0x79A8($s2)
    ctx->pc = 0x799b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294936152)));
label_799b60:
    // 0x799b60: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x799b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_799b64:
    // 0x799b64: 0x531024  and         $v0, $v0, $s3
    ctx->pc = 0x799b64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 19));
label_799b68:
    // 0x799b68: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_799b6c:
    if (ctx->pc == 0x799B6Cu) {
        ctx->pc = 0x799B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B68u;
        // 0x799b6c: 0x8e222f84  lw          $v0, 0x2F84($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799B70u;
        goto label_799b70;
    }
    ctx->pc = 0x799B68u;
    {
        const bool branch_taken_0x799b68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B68u;
        // 0x799b6c: 0x8e222f84  lw          $v0, 0x2F84($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799b68) {
            ctx->pc = 0x799B9Cu;
            goto label_799b9c;
        }
    }
    ctx->pc = 0x799B70u;
label_799b70:
    // 0x799b70: 0xc1e64fc  jal         func_7993F0
label_799b74:
    if (ctx->pc == 0x799B74u) {
        ctx->pc = 0x799B78u;
        goto label_799b78;
    }
    ctx->pc = 0x799B70u;
    SET_GPR_U32(ctx, 31, 0x799B78u);
    ctx->pc = 0x7993F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7993F0u, 0x799B70u, 0x799B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799B78u;
label_799b78:
    // 0x799b78: 0x2c420006  sltiu       $v0, $v0, 0x6
    ctx->pc = 0x799b78u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_799b7c:
    // 0x799b7c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_799b80:
    if (ctx->pc == 0x799B80u) {
        ctx->pc = 0x799B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B7Cu;
        // 0x799b80: 0x2684ea60  addiu       $a0, $s4, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294961760));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799B84u;
        goto label_799b84;
    }
    ctx->pc = 0x799B7Cu;
    {
        const bool branch_taken_0x799b7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B7Cu;
        // 0x799b80: 0x2684ea60  addiu       $a0, $s4, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799b7c) {
            ctx->pc = 0x799B98u;
            goto label_799b98;
        }
    }
    ctx->pc = 0x799B84u;
label_799b84:
    // 0x799b84: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x799b84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_799b88:
    // 0x799b88: 0xc0b0aa6  jal         func_2C2A98
label_799b8c:
    if (ctx->pc == 0x799B8Cu) {
        ctx->pc = 0x799B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B88u;
        // 0x799b8c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799B90u;
        goto label_799b90;
    }
    ctx->pc = 0x799B88u;
    SET_GPR_U32(ctx, 31, 0x799B90u);
    ctx->pc = 0x799B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799B88u;
    // 0x799b8c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A98u, 0x799B88u, 0x799B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799B90u;
label_799b90:
    // 0x799b90: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_799b94:
    if (ctx->pc == 0x799B94u) {
        ctx->pc = 0x799B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B90u;
        // 0x799b94: 0x8e242f84  lw          $a0, 0x2F84($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799B98u;
        goto label_799b98;
    }
    ctx->pc = 0x799B90u;
    {
        const bool branch_taken_0x799b90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B90u;
        // 0x799b94: 0x8e242f84  lw          $a0, 0x2F84($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799b90) {
            ctx->pc = 0x799BB0u;
            goto label_799bb0;
        }
    }
    ctx->pc = 0x799B98u;
label_799b98:
    // 0x799b98: 0x8e222f84  lw          $v0, 0x2F84($s1)
    ctx->pc = 0x799b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
label_799b9c:
    // 0x799b9c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799b9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_799ba0:
    // 0x799ba0: 0xc0b56a8  jal         func_2D5AA0
label_799ba4:
    if (ctx->pc == 0x799BA4u) {
        ctx->pc = 0x799BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799BA0u;
        // 0x799ba4: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799BA8u;
        goto label_799ba8;
    }
    ctx->pc = 0x799BA0u;
    SET_GPR_U32(ctx, 31, 0x799BA8u);
    ctx->pc = 0x799BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799BA0u;
    // 0x799ba4: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799BA0u, 0x799BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799BA8u;
label_799ba8:
    // 0x799ba8: 0x1000ffed  b           . + 4 + (-0x13 << 2)
label_799bac:
    if (ctx->pc == 0x799BACu) {
        ctx->pc = 0x799BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799BA8u;
        // 0x799bac: 0x8e438658  lw          $v1, -0x79A8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294936152)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799BB0u;
        goto label_799bb0;
    }
    ctx->pc = 0x799BA8u;
    {
        const bool branch_taken_0x799ba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799BA8u;
        // 0x799bac: 0x8e438658  lw          $v1, -0x79A8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294936152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799ba8) {
            ctx->pc = 0x799B60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799b60;
        }
    }
    ctx->pc = 0x799BB0u;
label_799bb0:
    // 0x799bb0: 0xc0b0e6c  jal         func_2C39B0
label_799bb4:
    if (ctx->pc == 0x799BB4u) {
        ctx->pc = 0x799BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799BB0u;
        // 0x799bb4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799BB8u;
        goto label_799bb8;
    }
    ctx->pc = 0x799BB0u;
    SET_GPR_U32(ctx, 31, 0x799BB8u);
    ctx->pc = 0x799BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799BB0u;
    // 0x799bb4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C39B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C39B0u, 0x799BB0u, 0x799BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799BB8u;
label_799bb8:
    // 0x799bb8: 0x8e02ad00  lw          $v0, -0x5300($s0)
    ctx->pc = 0x799bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294946048)));
label_799bbc:
    // 0x799bbc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x799bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_799bc0:
    // 0x799bc0: 0x10800025  beqz        $a0, . + 4 + (0x25 << 2)
label_799bc4:
    if (ctx->pc == 0x799BC4u) {
        ctx->pc = 0x799BC8u;
        goto label_799bc8;
    }
    ctx->pc = 0x799BC0u;
    {
        const bool branch_taken_0x799bc0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x799bc0) {
            ctx->pc = 0x799C58u;
            goto label_799c58;
        }
    }
    ctx->pc = 0x799BC8u;
label_799bc8:
    // 0x799bc8: 0xc06a03c  jal         func_1A80F0
label_799bcc:
    if (ctx->pc == 0x799BCCu) {
        ctx->pc = 0x799BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799BC8u;
        // 0x799bcc: 0x2405005a  addiu       $a1, $zero, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799BD0u;
        goto label_799bd0;
    }
    ctx->pc = 0x799BC8u;
    SET_GPR_U32(ctx, 31, 0x799BD0u);
    ctx->pc = 0x799BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799BC8u;
    // 0x799bcc: 0x2405005a  addiu       $a1, $zero, 0x5A (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A80F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A80F0u, 0x799BC8u, 0x799BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799BD0u;
label_799bd0:
    // 0x799bd0: 0x8e02ad00  lw          $v0, -0x5300($s0)
    ctx->pc = 0x799bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294946048)));
label_799bd4:
    // 0x799bd4: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x799bd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_799bd8:
    // 0x799bd8: 0xc069fb0  jal         func_1A7EC0
label_799bdc:
    if (ctx->pc == 0x799BDCu) {
        ctx->pc = 0x799BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799BD8u;
        // 0x799bdc: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799BE0u;
        goto label_799be0;
    }
    ctx->pc = 0x799BD8u;
    SET_GPR_U32(ctx, 31, 0x799BE0u);
    ctx->pc = 0x799BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799BD8u;
    // 0x799bdc: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7EC0u, 0x799BD8u, 0x799BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799BE0u;
label_799be0:
    // 0x799be0: 0x8e03ad00  lw          $v1, -0x5300($s0)
    ctx->pc = 0x799be0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294946048)));
label_799be4:
    // 0x799be4: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x799be4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_799be8:
    // 0x799be8: 0xc069fb0  jal         func_1A7EC0
label_799bec:
    if (ctx->pc == 0x799BECu) {
        ctx->pc = 0x799BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799BE8u;
        // 0x799bec: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799BF0u;
        goto label_799bf0;
    }
    ctx->pc = 0x799BE8u;
    SET_GPR_U32(ctx, 31, 0x799BF0u);
    ctx->pc = 0x799BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799BE8u;
    // 0x799bec: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7EC0u, 0x799BE8u, 0x799BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799BF0u;
label_799bf0:
    // 0x799bf0: 0x8e03ad00  lw          $v1, -0x5300($s0)
    ctx->pc = 0x799bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294946048)));
label_799bf4:
    // 0x799bf4: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x799bf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_799bf8:
    // 0x799bf8: 0xc069fb0  jal         func_1A7EC0
label_799bfc:
    if (ctx->pc == 0x799BFCu) {
        ctx->pc = 0x799BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799BF8u;
        // 0x799bfc: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799C00u;
        goto label_799c00;
    }
    ctx->pc = 0x799BF8u;
    SET_GPR_U32(ctx, 31, 0x799C00u);
    ctx->pc = 0x799BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799BF8u;
    // 0x799bfc: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7EC0u, 0x799BF8u, 0x799C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799C00u;
label_799c00:
    // 0x799c00: 0x8e04ad00  lw          $a0, -0x5300($s0)
    ctx->pc = 0x799c00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294946048)));
label_799c04:
    // 0x799c04: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x799c04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_799c08:
    // 0x799c08: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x799c08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_799c0c:
    // 0x799c0c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x799c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_799c10:
    // 0x799c10: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x799c10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_799c14:
    // 0x799c14: 0x8e03ad00  lw          $v1, -0x5300($s0)
    ctx->pc = 0x799c14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294946048)));
label_799c18:
    // 0x799c18: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x799c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_799c1c:
    // 0x799c1c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x799c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_799c20:
    // 0x799c20: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x799c20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_799c24:
    // 0x799c24: 0x8e04ad00  lw          $a0, -0x5300($s0)
    ctx->pc = 0x799c24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294946048)));
label_799c28:
    // 0x799c28: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x799c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_799c2c:
    // 0x799c2c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x799c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_799c30:
    // 0x799c30: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x799c30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_799c34:
    // 0x799c34: 0x8e03ad00  lw          $v1, -0x5300($s0)
    ctx->pc = 0x799c34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294946048)));
label_799c38:
    // 0x799c38: 0xc069fc8  jal         func_1A7F20
label_799c3c:
    if (ctx->pc == 0x799C3Cu) {
        ctx->pc = 0x799C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C38u;
        // 0x799c3c: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799C40u;
        goto label_799c40;
    }
    ctx->pc = 0x799C38u;
    SET_GPR_U32(ctx, 31, 0x799C40u);
    ctx->pc = 0x799C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799C38u;
    // 0x799c3c: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7F20u, 0x799C38u, 0x799C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799C40u;
label_799c40:
    // 0x799c40: 0x8e242f84  lw          $a0, 0x2F84($s1)
    ctx->pc = 0x799c40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
label_799c44:
    // 0x799c44: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x799c44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
label_799c48:
    // 0x799c48: 0xc0b0fb6  jal         func_2C3ED8
label_799c4c:
    if (ctx->pc == 0x799C4Cu) {
        ctx->pc = 0x799C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C48u;
        // 0x799c4c: 0x24a5abb8  addiu       $a1, $a1, -0x5448 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945720));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799C50u;
        goto label_799c50;
    }
    ctx->pc = 0x799C48u;
    SET_GPR_U32(ctx, 31, 0x799C50u);
    ctx->pc = 0x799C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799C48u;
    // 0x799c4c: 0x24a5abb8  addiu       $a1, $a1, -0x5448 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3ED8u, 0x799C48u, 0x799C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799C50u;
label_799c50:
    // 0x799c50: 0xc0b101e  jal         func_2C4078
label_799c54:
    if (ctx->pc == 0x799C54u) {
        ctx->pc = 0x799C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C50u;
        // 0x799c54: 0x8e242f84  lw          $a0, 0x2F84($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799C58u;
        goto label_799c58;
    }
    ctx->pc = 0x799C50u;
    SET_GPR_U32(ctx, 31, 0x799C58u);
    ctx->pc = 0x799C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799C50u;
    // 0x799c54: 0x8e242f84  lw          $a0, 0x2F84($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4078u, 0x799C50u, 0x799C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799C58u;
label_799c58:
    // 0x799c58: 0xc0b0f04  jal         func_2C3C10
label_799c5c:
    if (ctx->pc == 0x799C5Cu) {
        ctx->pc = 0x799C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C58u;
        // 0x799c5c: 0x8e242f84  lw          $a0, 0x2F84($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799C60u;
        goto label_799c60;
    }
    ctx->pc = 0x799C58u;
    SET_GPR_U32(ctx, 31, 0x799C60u);
    ctx->pc = 0x799C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799C58u;
    // 0x799c5c: 0x8e242f84  lw          $a0, 0x2F84($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3C10u, 0x799C58u, 0x799C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799C60u;
label_799c60:
    // 0x799c60: 0x8e448658  lw          $a0, -0x79A8($s2)
    ctx->pc = 0x799c60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294936152)));
label_799c64:
    // 0x799c64: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x799c64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_799c68:
    // 0x799c68: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x799c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_799c6c:
    // 0x799c6c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x799c6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_799c70:
    // 0x799c70: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x799c70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_799c74:
    // 0x799c74: 0x8e232f84  lw          $v1, 0x2F84($s1)
    ctx->pc = 0x799c74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
label_799c78:
    // 0x799c78: 0xc0b5692  jal         func_2D5A48
label_799c7c:
    if (ctx->pc == 0x799C7Cu) {
        ctx->pc = 0x799C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C78u;
        // 0x799c7c: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799C80u;
        goto label_799c80;
    }
    ctx->pc = 0x799C78u;
    SET_GPR_U32(ctx, 31, 0x799C80u);
    ctx->pc = 0x799C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799C78u;
    // 0x799c7c: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x799C78u, 0x799C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799C80u;
label_799c80:
    // 0x799c80: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x799c80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_799c84:
    // 0x799c84: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x799c84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_799c88:
    // 0x799c88: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x799c88u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_799c8c:
    // 0x799c8c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x799c8cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_799c90:
    // 0x799c90: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x799c90u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_799c94:
    // 0x799c94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x799c94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_799c98:
    // 0x799c98: 0x3e00008  jr          $ra
label_799c9c:
    if (ctx->pc == 0x799C9Cu) {
        ctx->pc = 0x799C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C98u;
        // 0x799c9c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799CA0u;
        goto label_fallthrough_0x799c98;
    }
    ctx->pc = 0x799C98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C98u;
        // 0x799c9c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799C98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x799c98:
    ctx->pc = 0x799CA0u;
}
} // namespace gh_r304
