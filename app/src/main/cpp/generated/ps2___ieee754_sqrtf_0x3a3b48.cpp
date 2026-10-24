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

// Function: __ieee754_sqrtf
// Address: 0x3a3b48 - 0x3a3c80
void ps2___ieee754_sqrtf_0x3a3b48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___ieee754_sqrtf_0x3a3b48");
#endif

    switch (ctx->pc) {
        case 0x3a3bc8u: goto label_3a3bc8;
        case 0x3a3c30u: goto label_3a3c30;
        default: break;
    }

    ctx->pc = 0x3a3b48u;

    // 0x3a3b48: 0x44026000  mfc1        $v0, $f12
    ctx->pc = 0x3a3b48u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3a3b4c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3a3b4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a3b50: 0x3c037f80  lui         $v1, 0x7F80
    ctx->pc = 0x3a3b50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32640 << 16));
    // 0x3a3b54: 0xa31024  and         $v0, $a1, $v1
    ctx->pc = 0x3a3b54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x3a3b58: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A3B58u;
    {
        const bool branch_taken_0x3a3b58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3a3b58) {
            ctx->pc = 0x3A3B70u;
            goto label_3a3b70;
        }
    }
    ctx->pc = 0x3A3B60u;
    // 0x3a3b60: 0x460c6002  mul.s       $f0, $f12, $f12
    ctx->pc = 0x3a3b60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x3a3b64: 0x3e00008  jr          $ra
    ctx->pc = 0x3A3B64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A3B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3B64u;
        // 0x3a3b68: 0x460c0000  add.s       $f0, $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A3B64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A3B6Cu;
    // 0x3a3b6c: 0x0  nop
    ctx->pc = 0x3a3b6cu;
    // NOP
label_3a3b70:
    // 0x3a3b70: 0x1ca0000e  bgtz        $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x3A3B70u;
    {
        const bool branch_taken_0x3a3b70 = (GPR_S64(ctx, 5) > 0);
        ctx->pc = 0x3A3B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3B70u;
        // 0x3a3b74: 0x535c3  sra         $a2, $a1, 23 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 5), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3b70) {
            ctx->pc = 0x3A3BACu;
            goto label_3a3bac;
        }
    }
    ctx->pc = 0x3A3B78u;
    // 0x3a3b78: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x3a3b78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x3a3b7c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3a3b7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3a3b80: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x3a3b80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x3a3b84: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3A3B84u;
    {
        const bool branch_taken_0x3a3b84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A3B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3B84u;
        // 0x3a3b88: 0x46006006  mov.s       $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3b84) {
            ctx->pc = 0x3A3BA4u;
            goto label_3a3ba4;
        }
    }
    ctx->pc = 0x3A3B8Cu;
    // 0x3a3b8c: 0x4a10007  bgez        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3A3B8Cu;
    {
        const bool branch_taken_0x3a3b8c = (GPR_S64(ctx, 5) >= 0);
        if (branch_taken_0x3a3b8c) {
            ctx->pc = 0x3A3BACu;
            goto label_3a3bac;
        }
    }
    ctx->pc = 0x3A3B94u;
    // 0x3a3b94: 0x460c6001  sub.s       $f0, $f12, $f12
    ctx->pc = 0x3a3b94u;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[12]);
    // 0x3a3b98: 0x0  nop
    ctx->pc = 0x3a3b98u;
    // NOP
    // 0x3a3b9c: 0x0  nop
    ctx->pc = 0x3a3b9cu;
    // NOP
    // 0x3a3ba0: 0x46000003  div.s       $f0, $f0, $f0
    ctx->pc = 0x3a3ba0u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[0]);
label_3a3ba4:
    // 0x3a3ba4: 0x3e00008  jr          $ra
    ctx->pc = 0x3A3BA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A3BA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A3BACu;
label_3a3bac:
    // 0x3a3bac: 0x14c00012  bnez        $a2, . + 4 + (0x12 << 2)
    ctx->pc = 0x3A3BACu;
    {
        const bool branch_taken_0x3a3bac = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A3BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3BACu;
        // 0x3a3bb0: 0x3c02007f  lui         $v0, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3bac) {
            ctx->pc = 0x3A3BF8u;
            goto label_3a3bf8;
        }
    }
    ctx->pc = 0x3A3BB4u;
    // 0x3a3bb4: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x3a3bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x3a3bb8: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x3a3bb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x3a3bbc: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3A3BBCu;
    {
        const bool branch_taken_0x3a3bbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A3BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3BBCu;
        // 0x3a3bc0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3bbc) {
            ctx->pc = 0x3A3BECu;
            goto label_3a3bec;
        }
    }
    ctx->pc = 0x3A3BC4u;
    // 0x3a3bc4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3a3bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a3bc8:
    // 0x3a3bc8: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x3a3bc8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x3a3bcc: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x3a3bccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x3a3bd0: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x3a3bd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x3a3bd4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3a3bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3a3bd8: 0x0  nop
    ctx->pc = 0x3a3bd8u;
    // NOP
    // 0x3a3bdc: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3A3BDCu;
    {
        const bool branch_taken_0x3a3bdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a3bdc) {
            ctx->pc = 0x3A3BC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a3bc8;
        }
    }
    ctx->pc = 0x3A3BE4u;
    // 0x3a3be4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3A3BE4u;
    {
        const bool branch_taken_0x3a3be4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A3BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3BE4u;
        // 0x3a3be8: 0x643023  subu        $a2, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3be4) {
            ctx->pc = 0x3A3BF4u;
            goto label_3a3bf4;
        }
    }
    ctx->pc = 0x3A3BECu;
label_3a3bec:
    // 0x3a3bec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3a3becu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a3bf0: 0x643023  subu        $a2, $v1, $a0
    ctx->pc = 0x3a3bf0u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3a3bf4:
    // 0x3a3bf4: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x3a3bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
label_3a3bf8:
    // 0x3a3bf8: 0x24c6ff81  addiu       $a2, $a2, -0x7F
    ctx->pc = 0x3a3bf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967169));
    // 0x3a3bfc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3a3bfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3a3c00: 0x30c40001  andi        $a0, $a2, 0x1
    ctx->pc = 0x3a3c00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x3a3c04: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x3a3c04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x3a3c08: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x3a3c08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x3a3c0c: 0x63043  sra         $a2, $a2, 1
    ctx->pc = 0x3a3c0cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 1));
    // 0x3a3c10: 0x432825  or          $a1, $v0, $v1
    ctx->pc = 0x3a3c10u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3a3c14: 0x852804  sllv        $a1, $a1, $a0
    ctx->pc = 0x3a3c14u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 4) & 0x1F));
    // 0x3a3c18: 0x645c0  sll         $t0, $a2, 23
    ctx->pc = 0x3a3c18u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 6), 23));
    // 0x3a3c1c: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x3a3c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x3a3c20: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3a3c20u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a3c24: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3a3c24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a3c28: 0x3c060100  lui         $a2, 0x100
    ctx->pc = 0x3a3c28u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)256 << 16));
    // 0x3a3c2c: 0x0  nop
    ctx->pc = 0x3a3c2cu;
    // NOP
label_3a3c30:
    // 0x3a3c30: 0xe61821  addu        $v1, $a3, $a2
    ctx->pc = 0x3a3c30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x3a3c34: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x3a3c34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3a3c38: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A3C38u;
    {
        const bool branch_taken_0x3a3c38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a3c38) {
            ctx->pc = 0x3A3C3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A3C38u;
            // 0x3a3c3c: 0x63042  srl         $a2, $a2, 1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A3C50u;
            goto label_3a3c50;
        }
    }
    ctx->pc = 0x3A3C40u;
    // 0x3a3c40: 0xa32823  subu        $a1, $a1, $v1
    ctx->pc = 0x3a3c40u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x3a3c44: 0x663821  addu        $a3, $v1, $a2
    ctx->pc = 0x3a3c44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x3a3c48: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x3a3c48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x3a3c4c: 0x63042  srl         $a2, $a2, 1
    ctx->pc = 0x3a3c4cu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
label_3a3c50:
    // 0x3a3c50: 0x14c0fff7  bnez        $a2, . + 4 + (-0x9 << 2)
    ctx->pc = 0x3A3C50u;
    {
        const bool branch_taken_0x3a3c50 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A3C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3C50u;
        // 0x3a3c54: 0x52840  sll         $a1, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3c50) {
            ctx->pc = 0x3A3C30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a3c30;
        }
    }
    ctx->pc = 0x3A3C58u;
    // 0x3a3c58: 0x10a00002  beqz        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x3A3C58u;
    {
        const bool branch_taken_0x3a3c58 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A3C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3C58u;
        // 0x3a3c5c: 0x30820001  andi        $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3c58) {
            ctx->pc = 0x3A3C64u;
            goto label_3a3c64;
        }
    }
    ctx->pc = 0x3A3C60u;
    // 0x3a3c60: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x3a3c60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_3a3c64:
    // 0x3a3c64: 0x42043  sra         $a0, $a0, 1
    ctx->pc = 0x3a3c64u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 1));
    // 0x3a3c68: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x3a3c68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x3a3c6c: 0x832821  addu        $a1, $a0, $v1
    ctx->pc = 0x3a3c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3a3c70: 0xa81021  addu        $v0, $a1, $t0
    ctx->pc = 0x3a3c70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x3a3c74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3a3c74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a3c78: 0x3e00008  jr          $ra
    ctx->pc = 0x3A3C78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A3C78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A3C80u;
}
