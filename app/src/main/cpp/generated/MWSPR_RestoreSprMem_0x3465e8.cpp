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

// Function: MWSPR_RestoreSprMem
// Address: 0x3465e8 - 0x346660
void MWSPR_RestoreSprMem_0x3465e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MWSPR_RestoreSprMem_0x3465e8");
#endif

    switch (ctx->pc) {
        case 0x346610u: goto label_346610;
        case 0x346630u: goto label_346630;
        default: break;
    }

    ctx->pc = 0x3465e8u;

    // 0x3465e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3465e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3465ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3465ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3465f0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3465f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3465f4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3465f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3465f8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3465f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3465fc: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x3465fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x346600: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x346600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x346604: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x346604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x346608: 0xc0e5c40  jal         func_397100
    ctx->pc = 0x346608u;
    SET_GPR_U32(ctx, 31, 0x346610u);
    ctx->pc = 0x34660Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346608u;
    // 0x34660c: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x397100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397100u, 0x346608u, 0x346610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346610u;
label_346610:
    // 0x346610: 0x2604000f  addiu       $a0, $s0, 0xF
    ctx->pc = 0x346610u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 15));
    // 0x346614: 0x2a030000  slti        $v1, $s0, 0x0
    ctx->pc = 0x346614u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x346618: 0xac510080  sw          $s1, 0x80($v0)
    ctx->pc = 0x346618u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 17));
    // 0x34661c: 0x83800b  movn        $s0, $a0, $v1
    ctx->pc = 0x34661cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 4));
    // 0x346620: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x346620u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346624: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x346624u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346628: 0xc0e5d14  jal         func_397450
    ctx->pc = 0x346628u;
    SET_GPR_U32(ctx, 31, 0x346630u);
    ctx->pc = 0x34662Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346628u;
    // 0x34662c: 0x103103  sra         $a2, $s0, 4 (Delay Slot)
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x397450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397450u, 0x346628u, 0x346630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346630u;
label_346630:
    // 0x346630: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x346630u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346634: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x346634u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x346638: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x346638u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x34663c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x34663cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x346640: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x346640u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x346644: 0x3e00008  jr          $ra
    ctx->pc = 0x346644u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x346648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346644u;
        // 0x346648: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x346644u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34664Cu;
    // 0x34664c: 0x0  nop
    ctx->pc = 0x34664cu;
    // NOP
    // 0x346650: 0xac44000c  sw          $a0, 0xC($v0)
    ctx->pc = 0x346650u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 4));
    // 0x346654: 0x0  nop
    ctx->pc = 0x346654u;
    // NOP
    // 0x346658: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x346658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x34665c: 0x0  nop
    ctx->pc = 0x34665cu;
    // NOP
    ctx->pc = 0x346660u;
}
