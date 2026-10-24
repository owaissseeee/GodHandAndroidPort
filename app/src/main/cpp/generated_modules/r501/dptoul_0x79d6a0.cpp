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
// Function: dptoul
// Address: 0x79d6a0 - 0x79d740
void dptoul_0x79d6a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("dptoul_0x79d6a0");
#endif

    switch (ctx->pc) {
        case 0x79d6b8u: goto label_79d6b8;
        case 0x79d6d0u: goto label_79d6d0;
        default: break;
    }

    ctx->pc = 0x79d6a0u;

    // 0x79d6a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x79d6a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x79d6a4: 0xffa40020  sd          $a0, 0x20($sp)
    ctx->pc = 0x79d6a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 4));
    // 0x79d6a8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x79d6a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79d6ac: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x79d6acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x79d6b0: 0xc1e730e  jal         func_79CC38
    ctx->pc = 0x79D6B0u;
    SET_GPR_U32(ctx, 31, 0x79D6B8u);
    ctx->pc = 0x79D6B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79D6B0u;
    // 0x79d6b4: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79CC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79CC38u, 0x79D6B0u, 0x79D6B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79D6B8u;
label_79d6b8:
    // 0x79d6b8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x79d6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79d6bc: 0x38620002  xori        $v0, $v1, 0x2
    ctx->pc = 0x79d6bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
    // 0x79d6c0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79D6C0u;
    {
        const bool branch_taken_0x79d6c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79D6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79D6C0u;
        // 0x79d6c4: 0x2c620002  sltiu       $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79d6c0) {
            ctx->pc = 0x79D6D0u;
            goto label_79d6d0;
        }
    }
    ctx->pc = 0x79D6C8u;
    // 0x79d6c8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79D6C8u;
    {
        const bool branch_taken_0x79d6c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79D6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79D6C8u;
        // 0x79d6cc: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79d6c8) {
            ctx->pc = 0x79D6D8u;
            goto label_79d6d8;
        }
    }
    ctx->pc = 0x79D6D0u;
label_79d6d0:
    // 0x79d6d0: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x79D6D0u;
    {
        const bool branch_taken_0x79d6d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79D6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79D6D0u;
        // 0x79d6d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79d6d0) {
            ctx->pc = 0x79D734u;
            goto label_79d734;
        }
    }
    ctx->pc = 0x79D6D8u;
label_79d6d8:
    // 0x79d6d8: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x79D6D8u;
    {
        const bool branch_taken_0x79d6d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79D6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79D6D8u;
        // 0x79d6dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79d6d8) {
            ctx->pc = 0x79D734u;
            goto label_79d734;
        }
    }
    ctx->pc = 0x79D6E0u;
    // 0x79d6e0: 0x38620004  xori        $v0, $v1, 0x4
    ctx->pc = 0x79d6e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
    // 0x79d6e4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x79D6E4u;
    {
        const bool branch_taken_0x79d6e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79D6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79D6E4u;
        // 0x79d6e8: 0x8fa40008  lw          $a0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79d6e4) {
            ctx->pc = 0x79D6FCu;
            goto label_79d6fc;
        }
    }
    ctx->pc = 0x79D6ECu;
    // 0x79d6ec: 0x480fff8  bltz        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x79D6ECu;
    {
        const bool branch_taken_0x79d6ec = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x79D6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79D6ECu;
        // 0x79d6f0: 0x28820020  slti        $v0, $a0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)32) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79d6ec) {
            ctx->pc = 0x79D6D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79d6d0;
        }
    }
    ctx->pc = 0x79D6F4u;
    // 0x79d6f4: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x79D6F4u;
    {
        const bool branch_taken_0x79d6f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79d6f4) {
            ctx->pc = 0x79D6F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79D6F4u;
            // 0x79d6f8: 0x2882003d  slti        $v0, $a0, 0x3D (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)61) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x79D708u;
            goto label_79d708;
        }
    }
    ctx->pc = 0x79D6FCu;
label_79d6fc:
    // 0x79d6fc: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x79d6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x79d700: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x79D700u;
    {
        const bool branch_taken_0x79d700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79D704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79D700u;
        // 0x79d704: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79d700) {
            ctx->pc = 0x79D734u;
            goto label_79d734;
        }
    }
    ctx->pc = 0x79D708u;
label_79d708:
    // 0x79d708: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x79D708u;
    {
        const bool branch_taken_0x79d708 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79D70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79D708u;
        // 0x79d70c: 0x2403003c  addiu       $v1, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79d708) {
            ctx->pc = 0x79D720u;
            goto label_79d720;
        }
    }
    ctx->pc = 0x79D710u;
    // 0x79d710: 0xdfa20010  ld          $v0, 0x10($sp)
    ctx->pc = 0x79d710u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79d714: 0x2483ffc4  addiu       $v1, $a0, -0x3C
    ctx->pc = 0x79d714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967236));
    // 0x79d718: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x79D718u;
    {
        const bool branch_taken_0x79d718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79D71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79D718u;
        // 0x79d71c: 0x621014  dsllv       $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 3) & 0x3F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79d718) {
            ctx->pc = 0x79D72Cu;
            goto label_79d72c;
        }
    }
    ctx->pc = 0x79D720u;
label_79d720:
    // 0x79d720: 0xdfa20010  ld          $v0, 0x10($sp)
    ctx->pc = 0x79d720u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79d724: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x79d724u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x79d728: 0x621016  dsrlv       $v0, $v0, $v1
    ctx->pc = 0x79d728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (GPR_U32(ctx, 3) & 0x3F));
label_79d72c:
    // 0x79d72c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x79d72cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x79d730: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x79d730u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_79d734:
    // 0x79d734: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x79d734u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79d738: 0x3e00008  jr          $ra
    ctx->pc = 0x79D738u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79D73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79D738u;
        // 0x79d73c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79D738u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79D740u;
}
} // namespace gh_r501
