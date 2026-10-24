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

// Function: func_00344278
// Address: 0x344278 - 0x344300
void func_00344278_0x344278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00344278_0x344278");
#endif

    switch (ctx->pc) {
        case 0x3442a4u: goto label_3442a4;
        case 0x3442c4u: goto label_3442c4;
        case 0x3442e4u: goto label_3442e4;
        default: break;
    }

    ctx->pc = 0x344278u;

    // 0x344278: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x344278u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x34427c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x34427cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x344280: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x344280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x344284: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x344284u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344288: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x344288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x34428c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x34428cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x344290: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x344290u;
    {
        const bool branch_taken_0x344290 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x344294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344290u;
        // 0x344294: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344290) {
            ctx->pc = 0x3442A8u;
            goto label_3442a8;
        }
    }
    ctx->pc = 0x344298u;
    // 0x344298: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x344298u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x34429c: 0xc0d22f8  jal         func_348BE0
    ctx->pc = 0x34429Cu;
    SET_GPR_U32(ctx, 31, 0x3442A4u);
    ctx->pc = 0x3442A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34429Cu;
    // 0x3442a0: 0x248475c8  addiu       $a0, $a0, 0x75C8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x348BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348BE0u, 0x34429Cu, 0x3442A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3442A4u;
label_3442a4:
    // 0x3442a4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3442a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3442a8:
    // 0x3442a8: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x3442a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x3442ac: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x3442acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x3442b0: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x3442B0u;
    {
        const bool branch_taken_0x3442b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3442b0) {
            ctx->pc = 0x3442B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3442B0u;
            // 0x3442b4: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3442CCu;
            goto label_3442cc;
        }
    }
    ctx->pc = 0x3442B8u;
    // 0x3442b8: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x3442b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x3442bc: 0xc0d22f8  jal         func_348BE0
    ctx->pc = 0x3442BCu;
    SET_GPR_U32(ctx, 31, 0x3442C4u);
    ctx->pc = 0x3442C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3442BCu;
    // 0x3442c0: 0x248475f8  addiu       $a0, $a0, 0x75F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x348BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348BE0u, 0x3442BCu, 0x3442C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3442C4u;
label_3442c4:
    // 0x3442c4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3442c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3442c8: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x3442c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3442cc:
    // 0x3442cc: 0x2842000f  slti        $v0, $v0, 0xF
    ctx->pc = 0x3442ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)15) ? 1 : 0);
    // 0x3442d0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3442D0u;
    {
        const bool branch_taken_0x3442d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3442D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3442D0u;
        // 0x3442d4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3442d0) {
            ctx->pc = 0x3442ECu;
            goto label_3442ec;
        }
    }
    ctx->pc = 0x3442D8u;
    // 0x3442d8: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x3442d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x3442dc: 0xc0d22f8  jal         func_348BE0
    ctx->pc = 0x3442DCu;
    SET_GPR_U32(ctx, 31, 0x3442E4u);
    ctx->pc = 0x3442E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3442DCu;
    // 0x3442e0: 0x24847620  addiu       $a0, $a0, 0x7620 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x348BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348BE0u, 0x3442DCu, 0x3442E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3442E4u;
label_3442e4:
    // 0x3442e4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3442e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3442e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3442e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3442ec:
    // 0x3442ec: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x3442ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3442f0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3442f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3442f4: 0x3e00008  jr          $ra
    ctx->pc = 0x3442F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3442F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3442F4u;
        // 0x3442f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3442F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3442FCu;
    // 0x3442fc: 0x0  nop
    ctx->pc = 0x3442fcu;
    // NOP
    ctx->pc = 0x344300u;
}
