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

// Function: cOmDoor_setClose
// Address: 0x1bd120 - 0x1bd178
void cOmDoor_setClose_0x1bd120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cOmDoor_setClose_0x1bd120");
#endif

    ctx->pc = 0x1bd120u;

    // 0x1bd120: 0x9c830620  lwu         $v1, 0x620($a0)
    ctx->pc = 0x1bd120u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 1568)));
    // 0x1bd124: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x1bd124u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1bd128: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1BD128u;
    {
        const bool branch_taken_0x1bd128 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD128u;
        // 0x1bd12c: 0x8c850620  lw          $a1, 0x620($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1568)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd128) {
            ctx->pc = 0x1BD170u;
            goto label_1bd170;
        }
    }
    ctx->pc = 0x1BD130u;
    // 0x1bd130: 0x3107b  dsra        $v0, $v1, 1
    ctx->pc = 0x1bd130u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 3) >> 1);
    // 0x1bd134: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1bd134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bd138: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1bd138u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1bd13c: 0x1043000c  beq         $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1BD13Cu;
    {
        const bool branch_taken_0x1bd13c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1bd13c) {
            ctx->pc = 0x1BD170u;
            goto label_1bd170;
        }
    }
    ctx->pc = 0x1BD144u;
    // 0x1bd144: 0x908202f4  lbu         $v0, 0x2F4($a0)
    ctx->pc = 0x1bd144u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 756)));
    // 0x1bd148: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1bd148u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1bd14c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BD14Cu;
    {
        const bool branch_taken_0x1bd14c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD14Cu;
        // 0x1bd150: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd14c) {
            ctx->pc = 0x1BD170u;
            goto label_1bd170;
        }
    }
    ctx->pc = 0x1BD154u;
    // 0x1bd154: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1bd154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1bd158: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x1bd158u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x1bd15c: 0xa08302f5  sb          $v1, 0x2F5($a0)
    ctx->pc = 0x1bd15cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x1bd160: 0xac820620  sw          $v0, 0x620($a0)
    ctx->pc = 0x1bd160u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1568), GPR_U32(ctx, 2));
    // 0x1bd164: 0xa08002f7  sb          $zero, 0x2F7($a0)
    ctx->pc = 0x1bd164u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bd168: 0xa08002f4  sb          $zero, 0x2F4($a0)
    ctx->pc = 0x1bd168u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bd16c: 0xa08002f6  sb          $zero, 0x2F6($a0)
    ctx->pc = 0x1bd16cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 758), (uint8_t)GPR_U32(ctx, 0));
label_1bd170:
    // 0x1bd170: 0x3e00008  jr          $ra
    ctx->pc = 0x1BD170u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BD170u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BD178u;
}
