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
// Function: dptoli
// Address: 0x79d608 - 0x79d6a0
void dptoli_0x79d608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("dptoli_0x79d608");
#endif

    switch (ctx->pc) {
        case 0x79d620u: goto label_79d620;
        case 0x79d638u: goto label_79d638;
        default: break;
    }

    ctx->pc = 0x79d608u;

    // 0x79d608: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x79d608u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x79d60c: 0xffa40020  sd          $a0, 0x20($sp)
    ctx->pc = 0x79d60cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 4));
    // 0x79d610: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x79d610u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79d614: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x79d614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x79d618: 0xc1e730e  jal         func_79CC38
    ctx->pc = 0x79D618u;
    SET_GPR_U32(ctx, 31, 0x79D620u);
    ctx->pc = 0x79D61Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79D618u;
    // 0x79d61c: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79CC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79CC38u, 0x79D618u, 0x79D620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79D620u;
label_79d620:
    // 0x79d620: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x79d620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79d624: 0x38620002  xori        $v0, $v1, 0x2
    ctx->pc = 0x79d624u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
    // 0x79d628: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79D628u;
    {
        const bool branch_taken_0x79d628 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79D62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79D628u;
        // 0x79d62c: 0x2c620002  sltiu       $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79d628) {
            ctx->pc = 0x79D638u;
            goto label_79d638;
        }
    }
    ctx->pc = 0x79D630u;
    // 0x79d630: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79D630u;
    {
        const bool branch_taken_0x79d630 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79D634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79D630u;
        // 0x79d634: 0x38620004  xori        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79d630) {
            ctx->pc = 0x79D640u;
            goto label_79d640;
        }
    }
    ctx->pc = 0x79D638u;
label_79d638:
    // 0x79d638: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x79D638u;
    {
        const bool branch_taken_0x79d638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79D63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79D638u;
        // 0x79d63c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79d638) {
            ctx->pc = 0x79D690u;
            goto label_79d690;
        }
    }
    ctx->pc = 0x79D640u;
label_79d640:
    // 0x79d640: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x79D640u;
    {
        const bool branch_taken_0x79d640 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79D644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79D640u;
        // 0x79d644: 0x8fa40008  lw          $a0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79d640) {
            ctx->pc = 0x79D658u;
            goto label_79d658;
        }
    }
    ctx->pc = 0x79D648u;
    // 0x79d648: 0x480fffb  bltz        $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x79D648u;
    {
        const bool branch_taken_0x79d648 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x79D64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79D648u;
        // 0x79d64c: 0x2882001f  slti        $v0, $a0, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)31) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79d648) {
            ctx->pc = 0x79D638u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79d638;
        }
    }
    ctx->pc = 0x79D650u;
    // 0x79d650: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x79D650u;
    {
        const bool branch_taken_0x79d650 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79D654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79D650u;
        // 0x79d654: 0x2403003c  addiu       $v1, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79d650) {
            ctx->pc = 0x79D670u;
            goto label_79d670;
        }
    }
    ctx->pc = 0x79D658u;
label_79d658:
    // 0x79d658: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x79d658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x79d65c: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x79d65cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x79d660: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x79d660u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x79d664: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x79d664u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x79d668: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x79D668u;
    {
        const bool branch_taken_0x79d668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79D66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79D668u;
        // 0x79d66c: 0x83100b  movn        $v0, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79d668) {
            ctx->pc = 0x79D690u;
            goto label_79d690;
        }
    }
    ctx->pc = 0x79D670u;
label_79d670:
    // 0x79d670: 0xdfa20010  ld          $v0, 0x10($sp)
    ctx->pc = 0x79d670u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79d674: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x79d674u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x79d678: 0x621016  dsrlv       $v0, $v0, $v1
    ctx->pc = 0x79d678u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (GPR_U32(ctx, 3) & 0x3F));
    // 0x79d67c: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x79d67cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x79d680: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x79d680u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x79d684: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x79d684u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x79d688: 0x21823  negu        $v1, $v0
    ctx->pc = 0x79d688u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x79d68c: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x79d68cu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
label_79d690:
    // 0x79d690: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x79d690u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79d694: 0x3e00008  jr          $ra
    ctx->pc = 0x79D694u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79D698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79D694u;
        // 0x79d698: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79D694u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79D69Cu;
    // 0x79d69c: 0x0  nop
    ctx->pc = 0x79d69cu;
    // NOP
    ctx->pc = 0x79d6a0u;
}
} // namespace gh_r501
