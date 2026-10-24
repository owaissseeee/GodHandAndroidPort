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

// Function: __pack_f
// Address: 0x31eb38 - 0x31ec48
void ps2___pack_f_0x31eb38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___pack_f_0x31eb38");
#endif

    ctx->pc = 0x31eb38u;

    // 0x31eb38: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x31eb38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x31eb3c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x31eb3cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31eb40: 0x8c880004  lw          $t0, 0x4($a0)
    ctx->pc = 0x31eb40u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x31eb44: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x31eb44u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x31eb48: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x31EB48u;
    {
        const bool branch_taken_0x31eb48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31EB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EB48u;
        // 0x31eb4c: 0x8c85000c  lw          $a1, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31eb48) {
            ctx->pc = 0x31EB60u;
            goto label_31eb60;
        }
    }
    ctx->pc = 0x31EB50u;
    // 0x31eb50: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x31eb50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x31eb54: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x31eb54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x31eb58: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x31EB58u;
    {
        const bool branch_taken_0x31eb58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31EB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EB58u;
        // 0x31eb5c: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31eb58) {
            ctx->pc = 0x31EBF4u;
            goto label_31ebf4;
        }
    }
    ctx->pc = 0x31EB60u;
label_31eb60:
    // 0x31eb60: 0x38620004  xori        $v0, $v1, 0x4
    ctx->pc = 0x31eb60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
    // 0x31eb64: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x31EB64u;
    {
        const bool branch_taken_0x31eb64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31EB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EB64u;
        // 0x31eb68: 0x38620002  xori        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31eb64) {
            ctx->pc = 0x31EBB8u;
            goto label_31ebb8;
        }
    }
    ctx->pc = 0x31EB6Cu;
    // 0x31eb6c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31EB6Cu;
    {
        const bool branch_taken_0x31eb6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31eb6c) {
            ctx->pc = 0x31EB7Cu;
            goto label_31eb7c;
        }
    }
    ctx->pc = 0x31EB74u;
    // 0x31eb74: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x31EB74u;
    {
        const bool branch_taken_0x31eb74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31EB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EB74u;
        // 0x31eb78: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31eb74) {
            ctx->pc = 0x31EBF4u;
            goto label_31ebf4;
        }
    }
    ctx->pc = 0x31EB7Cu;
label_31eb7c:
    // 0x31eb7c: 0x10a0001e  beqz        $a1, . + 4 + (0x1E << 2)
    ctx->pc = 0x31EB7Cu;
    {
        const bool branch_taken_0x31eb7c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x31EB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EB7Cu;
        // 0x31eb80: 0x3c03ff80  lui         $v1, 0xFF80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65408 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31eb7c) {
            ctx->pc = 0x31EBF8u;
            goto label_31ebf8;
        }
    }
    ctx->pc = 0x31EB84u;
    // 0x31eb84: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x31eb84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x31eb88: 0x2862ff82  slti        $v0, $v1, -0x7E
    ctx->pc = 0x31eb88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294967170) ? 1 : 0);
    // 0x31eb8c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x31EB8Cu;
    {
        const bool branch_taken_0x31eb8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31EB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EB8Cu;
        // 0x31eb90: 0x2402ff82  addiu       $v0, $zero, -0x7E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967170));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31eb8c) {
            ctx->pc = 0x31EBACu;
            goto label_31ebac;
        }
    }
    ctx->pc = 0x31EB94u;
    // 0x31eb94: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x31eb94u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31eb98: 0x2843001a  slti        $v1, $v0, 0x1A
    ctx->pc = 0x31eb98u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)26) ? 1 : 0);
    // 0x31eb9c: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x31EB9Cu;
    {
        const bool branch_taken_0x31eb9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x31EBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EB9Cu;
        // 0x31eba0: 0x452806  srlv        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), GPR_U32(ctx, 2) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31eb9c) {
            ctx->pc = 0x31EBF0u;
            goto label_31ebf0;
        }
    }
    ctx->pc = 0x31EBA4u;
    // 0x31eba4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x31EBA4u;
    {
        const bool branch_taken_0x31eba4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31EBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EBA4u;
        // 0x31eba8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31eba4) {
            ctx->pc = 0x31EBF0u;
            goto label_31ebf0;
        }
    }
    ctx->pc = 0x31EBACu;
label_31ebac:
    // 0x31ebac: 0x28620080  slti        $v0, $v1, 0x80
    ctx->pc = 0x31ebacu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x31ebb0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x31EBB0u;
    {
        const bool branch_taken_0x31ebb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31EBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EBB0u;
        // 0x31ebb4: 0x2467007f  addiu       $a3, $v1, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 127));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ebb0) {
            ctx->pc = 0x31EBC4u;
            goto label_31ebc4;
        }
    }
    ctx->pc = 0x31EBB8u;
label_31ebb8:
    // 0x31ebb8: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x31ebb8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x31ebbc: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x31EBBCu;
    {
        const bool branch_taken_0x31ebbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31EBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EBBCu;
        // 0x31ebc0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ebbc) {
            ctx->pc = 0x31EBF4u;
            goto label_31ebf4;
        }
    }
    ctx->pc = 0x31EBC4u;
label_31ebc4:
    // 0x31ebc4: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x31ebc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x31ebc8: 0x30a3007f  andi        $v1, $a1, 0x7F
    ctx->pc = 0x31ebc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)127);
    // 0x31ebcc: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x31EBCCu;
    {
        const bool branch_taken_0x31ebcc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x31ebcc) {
            ctx->pc = 0x31EBD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31EBCCu;
            // 0x31ebd0: 0x24a5003f  addiu       $a1, $a1, 0x3F (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 63));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31EBE0u;
            goto label_31ebe0;
        }
    }
    ctx->pc = 0x31EBD4u;
    // 0x31ebd4: 0x30a30080  andi        $v1, $a1, 0x80
    ctx->pc = 0x31ebd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)128);
    // 0x31ebd8: 0x24a20040  addiu       $v0, $a1, 0x40
    ctx->pc = 0x31ebd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x31ebdc: 0x43280b  movn        $a1, $v0, $v1
    ctx->pc = 0x31ebdcu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
label_31ebe0:
    // 0x31ebe0: 0x4a30004  bgezl       $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x31EBE0u;
    {
        const bool branch_taken_0x31ebe0 = (GPR_S64(ctx, 5) >= 0);
        if (branch_taken_0x31ebe0) {
            ctx->pc = 0x31EBE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31EBE0u;
            // 0x31ebe4: 0x529c2  srl         $a1, $a1, 7 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31EBF4u;
            goto label_31ebf4;
        }
    }
    ctx->pc = 0x31EBE8u;
    // 0x31ebe8: 0x52842  srl         $a1, $a1, 1
    ctx->pc = 0x31ebe8u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
    // 0x31ebec: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x31ebecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_31ebf0:
    // 0x31ebf0: 0x529c2  srl         $a1, $a1, 7
    ctx->pc = 0x31ebf0u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 7));
label_31ebf4:
    // 0x31ebf4: 0x3c03ff80  lui         $v1, 0xFF80
    ctx->pc = 0x31ebf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65408 << 16));
label_31ebf8:
    // 0x31ebf8: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x31ebf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x31ebfc: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x31ebfcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x31ec00: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x31ec00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x31ec04: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x31ec04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x31ec08: 0x3c03807f  lui         $v1, 0x807F
    ctx->pc = 0x31ec08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32895 << 16));
    // 0x31ec0c: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x31ec0cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x31ec10: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x31ec10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x31ec14: 0x30e400ff  andi        $a0, $a3, 0xFF
    ctx->pc = 0x31ec14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x31ec18: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x31ec18u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x31ec1c: 0x425c0  sll         $a0, $a0, 23
    ctx->pc = 0x31ec1cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 23));
    // 0x31ec20: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x31ec20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x31ec24: 0xc43025  or          $a2, $a2, $a0
    ctx->pc = 0x31ec24u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
    // 0x31ec28: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x31ec28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x31ec2c: 0x81fc0  sll         $v1, $t0, 31
    ctx->pc = 0x31ec2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 31));
    // 0x31ec30: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x31ec30u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x31ec34: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x31ec34u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x31ec38: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x31ec38u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31ec3c: 0x3e00008  jr          $ra
    ctx->pc = 0x31EC3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31EC3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31EC44u;
    // 0x31ec44: 0x0  nop
    ctx->pc = 0x31ec44u;
    // NOP
    ctx->pc = 0x31ec48u;
}
