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

// Function: setD3_CHCR
// Address: 0x3ba978 - 0x3ba9f0
void setD3_CHCR_0x3ba978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("setD3_CHCR_0x3ba978");
#endif

    switch (ctx->pc) {
        case 0x3ba98cu: goto label_3ba98c;
        default: break;
    }

    ctx->pc = 0x3ba978u;

    // 0x3ba978: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3ba978u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3ba97c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3ba97cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3ba980: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3ba980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3ba984: 0xc0ed8e8  jal         func_3B63A0
    ctx->pc = 0x3BA984u;
    SET_GPR_U32(ctx, 31, 0x3BA98Cu);
    ctx->pc = 0x3BA988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BA984u;
    // 0x3ba988: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B63A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B63A0u, 0x3BA984u, 0x3BA98Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BA98Cu;
label_3ba98c:
    // 0x3ba98c: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x3ba98cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x3ba990: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x3ba990u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x3ba994: 0x34c6f520  ori         $a2, $a2, 0xF520
    ctx->pc = 0x3ba994u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)62752);
    // 0x3ba998: 0x3c080001  lui         $t0, 0x1
    ctx->pc = 0x3ba998u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)1 << 16));
    // 0x3ba99c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x3ba99cu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000F520u));
    // 0x3ba9a0: 0x34e7f590  ori         $a3, $a3, 0xF590
    ctx->pc = 0x3ba9a0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)62864);
    // 0x3ba9a4: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x3ba9a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x3ba9a8: 0x3c05fffe  lui         $a1, 0xFFFE
    ctx->pc = 0x3ba9a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65534 << 16));
    // 0x3ba9ac: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x3ba9acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x3ba9b0: 0x3484b000  ori         $a0, $a0, 0xB000
    ctx->pc = 0x3ba9b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)45056);
    // 0x3ba9b4: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x3ba9b4u;
    runtime->Store32(rdram, ctx, 0x1000F590u, GPR_U32(ctx, 3));
    // 0x3ba9b8: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x3ba9b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x3ba9bc: 0xac900000  sw          $s0, 0x0($a0)
    ctx->pc = 0x3ba9bcu;
    runtime->Store32(rdram, ctx, 0x1000B000u, GPR_U32(ctx, 16));
    // 0x3ba9c0: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x3ba9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000F520u));
    // 0x3ba9c4: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x3ba9c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x3ba9c8: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x3ba9c8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x3ba9cc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3BA9CCu;
    {
        const bool branch_taken_0x3ba9cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BA9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA9CCu;
        // 0x3ba9d0: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ba9cc) {
            ctx->pc = 0x3BA9E0u;
            goto label_3ba9e0;
        }
    }
    ctx->pc = 0x3BA9D4u;
    // 0x3ba9d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3ba9d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ba9d8: 0x80ed8fc  j           func_3B63F0
    ctx->pc = 0x3BA9D8u;
    ctx->pc = 0x3BA9DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BA9D8u;
    // 0x3ba9dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B63F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B63F0u, 0x3BA9D8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3BA9E0u;
label_3ba9e0:
    // 0x3ba9e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3ba9e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ba9e4: 0x3e00008  jr          $ra
    ctx->pc = 0x3BA9E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BA9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA9E4u;
        // 0x3ba9e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BA9E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BA9ECu;
    // 0x3ba9ec: 0x0  nop
    ctx->pc = 0x3ba9ecu;
    // NOP
    ctx->pc = 0x3ba9f0u;
}
