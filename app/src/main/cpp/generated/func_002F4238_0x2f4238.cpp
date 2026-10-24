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

// Function: func_002F4238
// Address: 0x2f4238 - 0x2f4290
void func_002F4238_0x2f4238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002F4238_0x2f4238");
#endif

    switch (ctx->pc) {
        case 0x2f425cu: goto label_2f425c;
        case 0x2f4274u: goto label_2f4274;
        default: break;
    }

    ctx->pc = 0x2f4238u;

    // 0x2f4238: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f4238u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2f423c: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x2f423cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x2f4240: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2f4240u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2f4244: 0x8c6264d8  lw          $v0, 0x64D8($v1)
    ctx->pc = 0x2f4244u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7864D8u));
    // 0x2f4248: 0x247064d8  addiu       $s0, $v1, 0x64D8
    ctx->pc = 0x2f4248u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 25816));
    // 0x2f424c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2F424Cu;
    {
        const bool branch_taken_0x2f424c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F4250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F424Cu;
        // 0x2f4250: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f424c) {
            ctx->pc = 0x2F4274u;
            goto label_2f4274;
        }
    }
    ctx->pc = 0x2F4254u;
    // 0x2f4254: 0xc0c0052  jal         func_300148
    ctx->pc = 0x2F4254u;
    SET_GPR_U32(ctx, 31, 0x2F425Cu);
    ctx->pc = 0x300148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x300148u, 0x2F4254u, 0x2F425Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F425Cu;
label_2f425c:
    // 0x2f425c: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2f425cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x2f4260: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x2f4260u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x2f4264: 0x24a5f108  addiu       $a1, $a1, -0xEF8
    ctx->pc = 0x2f4264u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963464));
    // 0x2f4268: 0x24c663c8  addiu       $a2, $a2, 0x63C8
    ctx->pc = 0x2f4268u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 25544));
    // 0x2f426c: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x2F426Cu;
    SET_GPR_U32(ctx, 31, 0x2F4274u);
    ctx->pc = 0x2F4270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F426Cu;
    // 0x2f4270: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x2F426Cu, 0x2F4274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4274u;
label_2f4274:
    // 0x2f4274: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2f4274u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4278: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2f4278u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f427c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2f427cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f4280: 0x3e00008  jr          $ra
    ctx->pc = 0x2F4280u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F4284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4280u;
        // 0x2f4284: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F4280u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F4288u;
    // 0x2f4288: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2f4288u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2f428c: 0x0  nop
    ctx->pc = 0x2f428cu;
    // NOP
    ctx->pc = 0x2f4290u;
}
