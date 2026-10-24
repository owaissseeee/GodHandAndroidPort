#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r501_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r501
{
// Function: __pack_f
// Address: 0x79bf28 - 0x79c038
void ps2___pack_f_0x79bf28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___pack_f_0x79bf28");
#endif

    ctx->pc = 0x79bf28u;

    // 0x79bf28: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x79bf28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x79bf2c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79bf2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79bf30: 0x8c880004  lw          $t0, 0x4($a0)
    ctx->pc = 0x79bf30u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x79bf34: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x79bf34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x79bf38: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x79BF38u;
    {
        const bool branch_taken_0x79bf38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79BF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BF38u;
        // 0x79bf3c: 0x8c85000c  lw          $a1, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bf38) {
            ctx->pc = 0x79BF50u;
            goto label_79bf50;
        }
    }
    ctx->pc = 0x79BF40u;
    // 0x79bf40: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x79bf40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x79bf44: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x79bf44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x79bf48: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x79BF48u;
    {
        const bool branch_taken_0x79bf48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79BF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BF48u;
        // 0x79bf4c: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bf48) {
            ctx->pc = 0x79BFE4u;
            goto label_79bfe4;
        }
    }
    ctx->pc = 0x79BF50u;
label_79bf50:
    // 0x79bf50: 0x38620004  xori        $v0, $v1, 0x4
    ctx->pc = 0x79bf50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
    // 0x79bf54: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x79BF54u;
    {
        const bool branch_taken_0x79bf54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79BF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BF54u;
        // 0x79bf58: 0x38620002  xori        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bf54) {
            ctx->pc = 0x79BFA8u;
            goto label_79bfa8;
        }
    }
    ctx->pc = 0x79BF5Cu;
    // 0x79bf5c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79BF5Cu;
    {
        const bool branch_taken_0x79bf5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79bf5c) {
            ctx->pc = 0x79BF6Cu;
            goto label_79bf6c;
        }
    }
    ctx->pc = 0x79BF64u;
    // 0x79bf64: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x79BF64u;
    {
        const bool branch_taken_0x79bf64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79BF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BF64u;
        // 0x79bf68: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bf64) {
            ctx->pc = 0x79BFE4u;
            goto label_79bfe4;
        }
    }
    ctx->pc = 0x79BF6Cu;
label_79bf6c:
    // 0x79bf6c: 0x10a0001e  beqz        $a1, . + 4 + (0x1E << 2)
    ctx->pc = 0x79BF6Cu;
    {
        const bool branch_taken_0x79bf6c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x79BF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BF6Cu;
        // 0x79bf70: 0x3c03ff80  lui         $v1, 0xFF80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65408 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bf6c) {
            ctx->pc = 0x79BFE8u;
            goto label_79bfe8;
        }
    }
    ctx->pc = 0x79BF74u;
    // 0x79bf74: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x79bf74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x79bf78: 0x2862ff82  slti        $v0, $v1, -0x7E
    ctx->pc = 0x79bf78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294967170) ? 1 : 0);
    // 0x79bf7c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x79BF7Cu;
    {
        const bool branch_taken_0x79bf7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79BF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BF7Cu;
        // 0x79bf80: 0x2402ff82  addiu       $v0, $zero, -0x7E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967170));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bf7c) {
            ctx->pc = 0x79BF9Cu;
            goto label_79bf9c;
        }
    }
    ctx->pc = 0x79BF84u;
    // 0x79bf84: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x79bf84u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x79bf88: 0x2843001a  slti        $v1, $v0, 0x1A
    ctx->pc = 0x79bf88u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)26) ? 1 : 0);
    // 0x79bf8c: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x79BF8Cu;
    {
        const bool branch_taken_0x79bf8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x79BF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BF8Cu;
        // 0x79bf90: 0x452806  srlv        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), GPR_U32(ctx, 2) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bf8c) {
            ctx->pc = 0x79BFE0u;
            goto label_79bfe0;
        }
    }
    ctx->pc = 0x79BF94u;
    // 0x79bf94: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x79BF94u;
    {
        const bool branch_taken_0x79bf94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79BF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BF94u;
        // 0x79bf98: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bf94) {
            ctx->pc = 0x79BFE0u;
            goto label_79bfe0;
        }
    }
    ctx->pc = 0x79BF9Cu;
label_79bf9c:
    // 0x79bf9c: 0x28620080  slti        $v0, $v1, 0x80
    ctx->pc = 0x79bf9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x79bfa0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x79BFA0u;
    {
        const bool branch_taken_0x79bfa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79BFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BFA0u;
        // 0x79bfa4: 0x2467007f  addiu       $a3, $v1, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 127));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bfa0) {
            ctx->pc = 0x79BFB4u;
            goto label_79bfb4;
        }
    }
    ctx->pc = 0x79BFA8u;
label_79bfa8:
    // 0x79bfa8: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x79bfa8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x79bfac: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x79BFACu;
    {
        const bool branch_taken_0x79bfac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79BFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BFACu;
        // 0x79bfb0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bfac) {
            ctx->pc = 0x79BFE4u;
            goto label_79bfe4;
        }
    }
    ctx->pc = 0x79BFB4u;
label_79bfb4:
    // 0x79bfb4: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x79bfb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x79bfb8: 0x30a3007f  andi        $v1, $a1, 0x7F
    ctx->pc = 0x79bfb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)127);
    // 0x79bfbc: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x79BFBCu;
    {
        const bool branch_taken_0x79bfbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x79bfbc) {
            ctx->pc = 0x79BFC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79BFBCu;
            // 0x79bfc0: 0x24a5003f  addiu       $a1, $a1, 0x3F (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 63));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79BFD0u;
            goto label_79bfd0;
        }
    }
    ctx->pc = 0x79BFC4u;
    // 0x79bfc4: 0x30a30080  andi        $v1, $a1, 0x80
    ctx->pc = 0x79bfc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)128);
    // 0x79bfc8: 0x24a20040  addiu       $v0, $a1, 0x40
    ctx->pc = 0x79bfc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x79bfcc: 0x43280b  movn        $a1, $v0, $v1
    ctx->pc = 0x79bfccu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
label_79bfd0:
    // 0x79bfd0: 0x4a30004  bgezl       $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x79BFD0u;
    {
        const bool branch_taken_0x79bfd0 = (GPR_S64(ctx, 5) >= 0);
        if (branch_taken_0x79bfd0) {
            ctx->pc = 0x79BFD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79BFD0u;
            // 0x79bfd4: 0x529c2  srl         $a1, $a1, 7 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79BFE4u;
            goto label_79bfe4;
        }
    }
    ctx->pc = 0x79BFD8u;
    // 0x79bfd8: 0x52842  srl         $a1, $a1, 1
    ctx->pc = 0x79bfd8u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
    // 0x79bfdc: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x79bfdcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_79bfe0:
    // 0x79bfe0: 0x529c2  srl         $a1, $a1, 7
    ctx->pc = 0x79bfe0u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 7));
label_79bfe4:
    // 0x79bfe4: 0x3c03ff80  lui         $v1, 0xFF80
    ctx->pc = 0x79bfe4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65408 << 16));
label_79bfe8:
    // 0x79bfe8: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x79bfe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x79bfec: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x79bfecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x79bff0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x79bff0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x79bff4: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x79bff4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x79bff8: 0x3c03807f  lui         $v1, 0x807F
    ctx->pc = 0x79bff8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32895 << 16));
    // 0x79bffc: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x79bffcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x79c000: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x79c000u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x79c004: 0x30e400ff  andi        $a0, $a3, 0xFF
    ctx->pc = 0x79c004u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x79c008: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x79c008u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x79c00c: 0x425c0  sll         $a0, $a0, 23
    ctx->pc = 0x79c00cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 23));
    // 0x79c010: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x79c010u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x79c014: 0xc43025  or          $a2, $a2, $a0
    ctx->pc = 0x79c014u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
    // 0x79c018: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x79c018u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x79c01c: 0x81fc0  sll         $v1, $t0, 31
    ctx->pc = 0x79c01cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 31));
    // 0x79c020: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x79c020u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x79c024: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x79c024u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x79c028: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x79c028u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x79c02c: 0x3e00008  jr          $ra
    ctx->pc = 0x79C02Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79C02Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79C034u;
    // 0x79c034: 0x0  nop
    ctx->pc = 0x79c034u;
    // NOP
    ctx->pc = 0x79c038u;
}
} // namespace gh_r501
