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

// Function: func_00329D78
// Address: 0x329d78 - 0x329e08
void func_00329D78_0x329d78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00329D78_0x329d78");
#endif

    switch (ctx->pc) {
        case 0x329dc0u: goto label_329dc0;
        case 0x329dc8u: goto label_329dc8;
        case 0x329ddcu: goto label_329ddc;
        case 0x329de8u: goto label_329de8;
        default: break;
    }

    ctx->pc = 0x329d78u;

    // 0x329d78: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x329d78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x329d7c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x329d7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x329d80: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x329d80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329d84: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x329d84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x329d88: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x329d88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329d8c: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x329D8Cu;
    {
        const bool branch_taken_0x329d8c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x329D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329D8Cu;
        // 0x329d90: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329d8c) {
            ctx->pc = 0x329D9Cu;
            goto label_329d9c;
        }
    }
    ctx->pc = 0x329D94u;
    // 0x329d94: 0x16200008  bnez        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x329D94u;
    {
        const bool branch_taken_0x329d94 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x329d94) {
            ctx->pc = 0x329DB8u;
            goto label_329db8;
        }
    }
    ctx->pc = 0x329D9Cu;
label_329d9c:
    // 0x329d9c: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x329d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x329da0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x329da0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x329da4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x329da4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x329da8: 0x24842038  addiu       $a0, $a0, 0x2038
    ctx->pc = 0x329da8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8248));
    // 0x329dac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x329dacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x329db0: 0x80cfc4c  j           func_33F130
    ctx->pc = 0x329DB0u;
    ctx->pc = 0x329DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329DB0u;
    // 0x329db4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33F130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F130u, 0x329DB0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x329DB8u;
label_329db8:
    // 0x329db8: 0xc0ca7b6  jal         func_329ED8
    ctx->pc = 0x329DB8u;
    SET_GPR_U32(ctx, 31, 0x329DC0u);
    ctx->pc = 0x329ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329ED8u, 0x329DB8u, 0x329DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329DC0u;
label_329dc0:
    // 0x329dc0: 0xc0cf99e  jal         func_33E678
    ctx->pc = 0x329DC0u;
    SET_GPR_U32(ctx, 31, 0x329DC8u);
    ctx->pc = 0x33E678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33E678u, 0x329DC0u, 0x329DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329DC8u;
label_329dc8:
    // 0x329dc8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x329dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x329dcc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x329dccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329dd0: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x329dd0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x329dd4: 0xc0ca6d8  jal         func_329B60
    ctx->pc = 0x329DD4u;
    SET_GPR_U32(ctx, 31, 0x329DDCu);
    ctx->pc = 0x329DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329DD4u;
    // 0x329dd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329B60u, 0x329DD4u, 0x329DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329DDCu;
label_329ddc:
    // 0x329ddc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x329ddcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329de0: 0xc0cada8  jal         func_32B6A0
    ctx->pc = 0x329DE0u;
    SET_GPR_U32(ctx, 31, 0x329DE8u);
    ctx->pc = 0x329DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329DE0u;
    // 0x329de4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32B6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32B6A0u, 0x329DE0u, 0x329DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329DE8u;
label_329de8:
    // 0x329de8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x329de8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x329dec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x329decu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x329df0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x329df0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x329df4: 0x80cf9a4  j           func_33E690
    ctx->pc = 0x329DF4u;
    ctx->pc = 0x329DF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329DF4u;
    // 0x329df8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33E690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33E690u, 0x329DF4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x329DFCu;
    // 0x329dfc: 0x0  nop
    ctx->pc = 0x329dfcu;
    // NOP
    // 0x329e00: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x329e00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x329e04: 0x0  nop
    ctx->pc = 0x329e04u;
    // NOP
    ctx->pc = 0x329e08u;
}
