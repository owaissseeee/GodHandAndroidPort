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

// Function: func_00368C60
// Address: 0x368c60 - 0x368ce8
void func_00368C60_0x368c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00368C60_0x368c60");
#endif

    switch (ctx->pc) {
        case 0x368c7cu: goto label_368c7c;
        default: break;
    }

    ctx->pc = 0x368c60u;

    // 0x368c60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x368c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x368c64: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x368c64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x368c68: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x368c68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368c6c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x368c6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x368c70: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x368c70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x368c74: 0xc0da3f0  jal         func_368FC0
    ctx->pc = 0x368C74u;
    SET_GPR_U32(ctx, 31, 0x368C7Cu);
    ctx->pc = 0x368C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368C74u;
    // 0x368c78: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x368FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x368FC0u, 0x368C74u, 0x368C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368C7Cu;
label_368c7c:
    // 0x368c7c: 0x3c05ff02  lui         $a1, 0xFF02
    ctx->pc = 0x368c7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65282 << 16));
    // 0x368c80: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x368C80u;
    {
        const bool branch_taken_0x368c80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x368C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368C80u;
        // 0x368c84: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x368c80) {
            ctx->pc = 0x368CA0u;
            goto label_368ca0;
        }
    }
    ctx->pc = 0x368C88u;
    // 0x368c88: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x368c88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x368c8c: 0x34a50203  ori         $a1, $a1, 0x203
    ctx->pc = 0x368c8cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)515);
    // 0x368c90: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x368c90u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x368c94: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x368c94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x368c98: 0x80da3a4  j           func_368E90
    ctx->pc = 0x368C98u;
    ctx->pc = 0x368C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368C98u;
    // 0x368c9c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x368E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x368E90u, 0x368C98u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x368CA0u;
label_368ca0:
    // 0x368ca0: 0xde0300a8  ld          $v1, 0xA8($s0)
    ctx->pc = 0x368ca0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 168)));
    // 0x368ca4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x368ca4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x368ca8: 0xfe230000  sd          $v1, 0x0($s1)
    ctx->pc = 0x368ca8u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 3));
    // 0x368cac: 0xde0400b0  ld          $a0, 0xB0($s0)
    ctx->pc = 0x368cacu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x368cb0: 0xfe240008  sd          $a0, 0x8($s1)
    ctx->pc = 0x368cb0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 4));
    // 0x368cb4: 0xde0300b8  ld          $v1, 0xB8($s0)
    ctx->pc = 0x368cb4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x368cb8: 0xfe230010  sd          $v1, 0x10($s1)
    ctx->pc = 0x368cb8u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 16), GPR_U64(ctx, 3));
    // 0x368cbc: 0xde0400c0  ld          $a0, 0xC0($s0)
    ctx->pc = 0x368cbcu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x368cc0: 0xfe240018  sd          $a0, 0x18($s1)
    ctx->pc = 0x368cc0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 24), GPR_U64(ctx, 4));
    // 0x368cc4: 0xde0300c8  ld          $v1, 0xC8($s0)
    ctx->pc = 0x368cc4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 200)));
    // 0x368cc8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x368cc8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x368ccc: 0xfe230020  sd          $v1, 0x20($s1)
    ctx->pc = 0x368cccu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 32), GPR_U64(ctx, 3));
    // 0x368cd0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x368cd0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x368cd4: 0x3e00008  jr          $ra
    ctx->pc = 0x368CD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x368CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368CD4u;
        // 0x368cd8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x368CD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x368CDCu;
    // 0x368cdc: 0x0  nop
    ctx->pc = 0x368cdcu;
    // NOP
    // 0x368ce0: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x368ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
    // 0x368ce4: 0x0  nop
    ctx->pc = 0x368ce4u;
    // NOP
    ctx->pc = 0x368ce8u;
}
