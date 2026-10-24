#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r505_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r505
{
// Function: __pack_f
// Address: 0x79a5b8 - 0x79a6c8
void ps2___pack_f_0x79a5b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___pack_f_0x79a5b8");
#endif

    ctx->pc = 0x79a5b8u;

    // 0x79a5b8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x79a5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x79a5bc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79a5bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a5c0: 0x8c880004  lw          $t0, 0x4($a0)
    ctx->pc = 0x79a5c0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x79a5c4: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x79a5c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x79a5c8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x79A5C8u;
    {
        const bool branch_taken_0x79a5c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A5C8u;
        // 0x79a5cc: 0x8c85000c  lw          $a1, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a5c8) {
            ctx->pc = 0x79A5E0u;
            goto label_79a5e0;
        }
    }
    ctx->pc = 0x79A5D0u;
    // 0x79a5d0: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x79a5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x79a5d4: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x79a5d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x79a5d8: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x79A5D8u;
    {
        const bool branch_taken_0x79a5d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A5D8u;
        // 0x79a5dc: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a5d8) {
            ctx->pc = 0x79A674u;
            goto label_79a674;
        }
    }
    ctx->pc = 0x79A5E0u;
label_79a5e0:
    // 0x79a5e0: 0x38620004  xori        $v0, $v1, 0x4
    ctx->pc = 0x79a5e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
    // 0x79a5e4: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x79A5E4u;
    {
        const bool branch_taken_0x79a5e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A5E4u;
        // 0x79a5e8: 0x38620002  xori        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a5e4) {
            ctx->pc = 0x79A638u;
            goto label_79a638;
        }
    }
    ctx->pc = 0x79A5ECu;
    // 0x79a5ec: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79A5ECu;
    {
        const bool branch_taken_0x79a5ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79a5ec) {
            ctx->pc = 0x79A5FCu;
            goto label_79a5fc;
        }
    }
    ctx->pc = 0x79A5F4u;
    // 0x79a5f4: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x79A5F4u;
    {
        const bool branch_taken_0x79a5f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A5F4u;
        // 0x79a5f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a5f4) {
            ctx->pc = 0x79A674u;
            goto label_79a674;
        }
    }
    ctx->pc = 0x79A5FCu;
label_79a5fc:
    // 0x79a5fc: 0x10a0001e  beqz        $a1, . + 4 + (0x1E << 2)
    ctx->pc = 0x79A5FCu;
    {
        const bool branch_taken_0x79a5fc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A5FCu;
        // 0x79a600: 0x3c03ff80  lui         $v1, 0xFF80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65408 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a5fc) {
            ctx->pc = 0x79A678u;
            goto label_79a678;
        }
    }
    ctx->pc = 0x79A604u;
    // 0x79a604: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x79a604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x79a608: 0x2862ff82  slti        $v0, $v1, -0x7E
    ctx->pc = 0x79a608u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294967170) ? 1 : 0);
    // 0x79a60c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x79A60Cu;
    {
        const bool branch_taken_0x79a60c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A60Cu;
        // 0x79a610: 0x2402ff82  addiu       $v0, $zero, -0x7E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967170));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a60c) {
            ctx->pc = 0x79A62Cu;
            goto label_79a62c;
        }
    }
    ctx->pc = 0x79A614u;
    // 0x79a614: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x79a614u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x79a618: 0x2843001a  slti        $v1, $v0, 0x1A
    ctx->pc = 0x79a618u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)26) ? 1 : 0);
    // 0x79a61c: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x79A61Cu;
    {
        const bool branch_taken_0x79a61c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A61Cu;
        // 0x79a620: 0x452806  srlv        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), GPR_U32(ctx, 2) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a61c) {
            ctx->pc = 0x79A670u;
            goto label_79a670;
        }
    }
    ctx->pc = 0x79A624u;
    // 0x79a624: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x79A624u;
    {
        const bool branch_taken_0x79a624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A624u;
        // 0x79a628: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a624) {
            ctx->pc = 0x79A670u;
            goto label_79a670;
        }
    }
    ctx->pc = 0x79A62Cu;
label_79a62c:
    // 0x79a62c: 0x28620080  slti        $v0, $v1, 0x80
    ctx->pc = 0x79a62cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x79a630: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x79A630u;
    {
        const bool branch_taken_0x79a630 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A630u;
        // 0x79a634: 0x2467007f  addiu       $a3, $v1, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 127));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a630) {
            ctx->pc = 0x79A644u;
            goto label_79a644;
        }
    }
    ctx->pc = 0x79A638u;
label_79a638:
    // 0x79a638: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x79a638u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x79a63c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x79A63Cu;
    {
        const bool branch_taken_0x79a63c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A63Cu;
        // 0x79a640: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a63c) {
            ctx->pc = 0x79A674u;
            goto label_79a674;
        }
    }
    ctx->pc = 0x79A644u;
label_79a644:
    // 0x79a644: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x79a644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x79a648: 0x30a3007f  andi        $v1, $a1, 0x7F
    ctx->pc = 0x79a648u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)127);
    // 0x79a64c: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x79A64Cu;
    {
        const bool branch_taken_0x79a64c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x79a64c) {
            ctx->pc = 0x79A650u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A64Cu;
            // 0x79a650: 0x24a5003f  addiu       $a1, $a1, 0x3F (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 63));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A660u;
            goto label_79a660;
        }
    }
    ctx->pc = 0x79A654u;
    // 0x79a654: 0x30a30080  andi        $v1, $a1, 0x80
    ctx->pc = 0x79a654u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)128);
    // 0x79a658: 0x24a20040  addiu       $v0, $a1, 0x40
    ctx->pc = 0x79a658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x79a65c: 0x43280b  movn        $a1, $v0, $v1
    ctx->pc = 0x79a65cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
label_79a660:
    // 0x79a660: 0x4a30004  bgezl       $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x79A660u;
    {
        const bool branch_taken_0x79a660 = (GPR_S64(ctx, 5) >= 0);
        if (branch_taken_0x79a660) {
            ctx->pc = 0x79A664u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A660u;
            // 0x79a664: 0x529c2  srl         $a1, $a1, 7 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A674u;
            goto label_79a674;
        }
    }
    ctx->pc = 0x79A668u;
    // 0x79a668: 0x52842  srl         $a1, $a1, 1
    ctx->pc = 0x79a668u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
    // 0x79a66c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x79a66cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_79a670:
    // 0x79a670: 0x529c2  srl         $a1, $a1, 7
    ctx->pc = 0x79a670u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 7));
label_79a674:
    // 0x79a674: 0x3c03ff80  lui         $v1, 0xFF80
    ctx->pc = 0x79a674u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65408 << 16));
label_79a678:
    // 0x79a678: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x79a678u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x79a67c: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x79a67cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x79a680: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x79a680u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x79a684: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x79a684u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x79a688: 0x3c03807f  lui         $v1, 0x807F
    ctx->pc = 0x79a688u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32895 << 16));
    // 0x79a68c: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x79a68cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x79a690: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x79a690u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x79a694: 0x30e400ff  andi        $a0, $a3, 0xFF
    ctx->pc = 0x79a694u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x79a698: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x79a698u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x79a69c: 0x425c0  sll         $a0, $a0, 23
    ctx->pc = 0x79a69cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 23));
    // 0x79a6a0: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x79a6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x79a6a4: 0xc43025  or          $a2, $a2, $a0
    ctx->pc = 0x79a6a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
    // 0x79a6a8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x79a6a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x79a6ac: 0x81fc0  sll         $v1, $t0, 31
    ctx->pc = 0x79a6acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 31));
    // 0x79a6b0: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x79a6b0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x79a6b4: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x79a6b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x79a6b8: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x79a6b8u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x79a6bc: 0x3e00008  jr          $ra
    ctx->pc = 0x79A6BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A6BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A6C4u;
    // 0x79a6c4: 0x0  nop
    ctx->pc = 0x79a6c4u;
    // NOP
    ctx->pc = 0x79a6c8u;
}
} // namespace gh_r505
