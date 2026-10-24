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

// Function: func_0035E1B8
// Address: 0x35e1b8 - 0x35e238
void func_0035E1B8_0x35e1b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0035E1B8_0x35e1b8");
#endif

    switch (ctx->pc) {
        case 0x35e1e0u: goto label_35e1e0;
        case 0x35e1f4u: goto label_35e1f4;
        default: break;
    }

    ctx->pc = 0x35e1b8u;

    // 0x35e1b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35e1b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35e1bc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x35e1bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x35e1c0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x35e1c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e1c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35e1c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35e1c8: 0x30b000ff  andi        $s0, $a1, 0xFF
    ctx->pc = 0x35e1c8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x35e1cc: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x35e1ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x35e1d0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x35e1d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x35e1d4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x35e1d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x35e1d8: 0xc0d783c  jal         func_35E0F0
    ctx->pc = 0x35E1D8u;
    SET_GPR_U32(ctx, 31, 0x35E1E0u);
    ctx->pc = 0x35E1DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E1D8u;
    // 0x35e1dc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35E0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35E0F0u, 0x35E1D8u, 0x35E1E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E1E0u;
label_35e1e0:
    // 0x35e1e0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x35e1e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e1e4: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
    ctx->pc = 0x35E1E4u;
    {
        const bool branch_taken_0x35e1e4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x35E1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E1E4u;
        // 0x35e1e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35e1e4) {
            ctx->pc = 0x35E220u;
            goto label_35e220;
        }
    }
    ctx->pc = 0x35E1ECu;
    // 0x35e1ec: 0xc0d7a7a  jal         func_35E9E8
    ctx->pc = 0x35E1ECu;
    SET_GPR_U32(ctx, 31, 0x35E1F4u);
    ctx->pc = 0x35E9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35E9E8u, 0x35E1ECu, 0x35E1F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E1F4u;
label_35e1f4:
    // 0x35e1f4: 0x240300c0  addiu       $v1, $zero, 0xC0
    ctx->pc = 0x35e1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x35e1f8: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x35E1F8u;
    {
        const bool branch_taken_0x35e1f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x35E1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E1F8u;
        // 0x35e1fc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35e1f8) {
            ctx->pc = 0x35E208u;
            goto label_35e208;
        }
    }
    ctx->pc = 0x35E200u;
    // 0x35e200: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x35E200u;
    {
        const bool branch_taken_0x35e200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35E204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E200u;
        // 0x35e204: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35e200) {
            ctx->pc = 0x35E220u;
            goto label_35e220;
        }
    }
    ctx->pc = 0x35E208u;
label_35e208:
    // 0x35e208: 0x92230019  lbu         $v1, 0x19($s1)
    ctx->pc = 0x35e208u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 25)));
    // 0x35e20c: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x35E20Cu;
    {
        const bool branch_taken_0x35e20c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x35E210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E20Cu;
        // 0x35e210: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35e20c) {
            ctx->pc = 0x35E220u;
            goto label_35e220;
        }
    }
    ctx->pc = 0x35E214u;
    // 0x35e214: 0x9223001a  lbu         $v1, 0x1A($s1)
    ctx->pc = 0x35e214u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 26)));
    // 0x35e218: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35e218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35e21c: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x35e21cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_35e220:
    // 0x35e220: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35e220u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35e224: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35e224u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35e228: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x35e228u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35e22c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x35e22cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35e230: 0x3e00008  jr          $ra
    ctx->pc = 0x35E230u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35E234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E230u;
        // 0x35e234: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35E230u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35E238u;
}
