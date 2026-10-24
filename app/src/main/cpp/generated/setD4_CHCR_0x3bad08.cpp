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

// Function: setD4_CHCR
// Address: 0x3bad08 - 0x3bad80
void setD4_CHCR_0x3bad08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("setD4_CHCR_0x3bad08");
#endif

    switch (ctx->pc) {
        case 0x3bad1cu: goto label_3bad1c;
        default: break;
    }

    ctx->pc = 0x3bad08u;

    // 0x3bad08: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3bad08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3bad0c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3bad0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3bad10: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3bad10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3bad14: 0xc0ed8e8  jal         func_3B63A0
    ctx->pc = 0x3BAD14u;
    SET_GPR_U32(ctx, 31, 0x3BAD1Cu);
    ctx->pc = 0x3BAD18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BAD14u;
    // 0x3bad18: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B63A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B63A0u, 0x3BAD14u, 0x3BAD1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BAD1Cu;
label_3bad1c:
    // 0x3bad1c: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x3bad1cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x3bad20: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x3bad20u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x3bad24: 0x34c6f520  ori         $a2, $a2, 0xF520
    ctx->pc = 0x3bad24u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)62752);
    // 0x3bad28: 0x3c080001  lui         $t0, 0x1
    ctx->pc = 0x3bad28u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)1 << 16));
    // 0x3bad2c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x3bad2cu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000F520u));
    // 0x3bad30: 0x34e7f590  ori         $a3, $a3, 0xF590
    ctx->pc = 0x3bad30u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)62864);
    // 0x3bad34: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x3bad34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x3bad38: 0x3c05fffe  lui         $a1, 0xFFFE
    ctx->pc = 0x3bad38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65534 << 16));
    // 0x3bad3c: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x3bad3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x3bad40: 0x3484b400  ori         $a0, $a0, 0xB400
    ctx->pc = 0x3bad40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)46080);
    // 0x3bad44: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x3bad44u;
    runtime->Store32(rdram, ctx, 0x1000F590u, GPR_U32(ctx, 3));
    // 0x3bad48: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x3bad48u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x3bad4c: 0xac900000  sw          $s0, 0x0($a0)
    ctx->pc = 0x3bad4cu;
    runtime->Store32(rdram, ctx, 0x1000B400u, GPR_U32(ctx, 16));
    // 0x3bad50: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x3bad50u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000F520u));
    // 0x3bad54: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x3bad54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x3bad58: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x3bad58u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x3bad5c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3BAD5Cu;
    {
        const bool branch_taken_0x3bad5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BAD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BAD5Cu;
        // 0x3bad60: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bad5c) {
            ctx->pc = 0x3BAD70u;
            goto label_3bad70;
        }
    }
    ctx->pc = 0x3BAD64u;
    // 0x3bad64: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3bad64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3bad68: 0x80ed8fc  j           func_3B63F0
    ctx->pc = 0x3BAD68u;
    ctx->pc = 0x3BAD6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BAD68u;
    // 0x3bad6c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B63F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B63F0u, 0x3BAD68u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3BAD70u;
label_3bad70:
    // 0x3bad70: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3bad70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3bad74: 0x3e00008  jr          $ra
    ctx->pc = 0x3BAD74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BAD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BAD74u;
        // 0x3bad78: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BAD74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BAD7Cu;
    // 0x3bad7c: 0x0  nop
    ctx->pc = 0x3bad7cu;
    // NOP
    ctx->pc = 0x3bad80u;
}
