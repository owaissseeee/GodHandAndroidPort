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

// Function: cEm00_setDevilFlag
// Address: 0x2755e0 - 0x275638
void cEm00_setDevilFlag_0x2755e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cEm00_setDevilFlag_0x2755e0");
#endif

    ctx->pc = 0x2755e0u;

    // 0x2755e0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2755e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2755e4: 0x8ca20564  lw          $v0, 0x564($a1)
    ctx->pc = 0x2755e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1380)));
    // 0x2755e8: 0x2444fdf8  addiu       $a0, $v0, -0x208
    ctx->pc = 0x2755e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966776));
    // 0x2755ec: 0x2c830077  sltiu       $v1, $a0, 0x77
    ctx->pc = 0x2755ecu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)119) ? 1 : 0);
    // 0x2755f0: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2755F0u;
    {
        const bool branch_taken_0x2755f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2755F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2755F0u;
        // 0x2755f4: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2755f0) {
            ctx->pc = 0x275610u;
            goto label_275610;
        }
    }
    ctx->pc = 0x2755F8u;
    // 0x2755f8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2755f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2755fc: 0x24427600  addiu       $v0, $v0, 0x7600
    ctx->pc = 0x2755fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30208));
    // 0x275600: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x275600u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x275604: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x275604u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x275608: 0x800008  jr          $a0
    ctx->pc = 0x275608u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x275610u: goto label_275610;
            case 0x27562Cu: goto label_27562c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x275608u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x275610u;
label_275610:
    // 0x275610: 0x8ca216d0  lw          $v0, 0x16D0($a1)
    ctx->pc = 0x275610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 5840)));
    // 0x275614: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x275614u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x275618: 0x8ca316d4  lw          $v1, 0x16D4($a1)
    ctx->pc = 0x275618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 5844)));
    // 0x27561c: 0x34420200  ori         $v0, $v0, 0x200
    ctx->pc = 0x27561cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
    // 0x275620: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x275620u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x275624: 0xaca216d0  sw          $v0, 0x16D0($a1)
    ctx->pc = 0x275624u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 5840), GPR_U32(ctx, 2));
    // 0x275628: 0xaca316d4  sw          $v1, 0x16D4($a1)
    ctx->pc = 0x275628u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 5844), GPR_U32(ctx, 3));
label_27562c:
    // 0x27562c: 0x3e00008  jr          $ra
    ctx->pc = 0x27562Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27562Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x275634u;
    // 0x275634: 0x0  nop
    ctx->pc = 0x275634u;
    // NOP
    ctx->pc = 0x275638u;
}
