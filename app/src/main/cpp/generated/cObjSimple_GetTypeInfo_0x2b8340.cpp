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

// Function: cObjSimple_GetTypeInfo
// Address: 0x2b8340 - 0x2b83b8
void cObjSimple_GetTypeInfo_0x2b8340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cObjSimple_GetTypeInfo_0x2b8340");
#endif

    switch (ctx->pc) {
        case 0x2b8364u: goto label_2b8364;
        case 0x2b837cu: goto label_2b837c;
        default: break;
    }

    ctx->pc = 0x2b8340u;

    // 0x2b8340: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b8340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b8344: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x2b8344u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x2b8348: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2b8348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2b834c: 0x8c6262e8  lw          $v0, 0x62E8($v1)
    ctx->pc = 0x2b834cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7862E8u));
    // 0x2b8350: 0x247062e8  addiu       $s0, $v1, 0x62E8
    ctx->pc = 0x2b8350u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 25320));
    // 0x2b8354: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2B8354u;
    {
        const bool branch_taken_0x2b8354 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B8358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8354u;
        // 0x2b8358: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8354) {
            ctx->pc = 0x2B837Cu;
            goto label_2b837c;
        }
    }
    ctx->pc = 0x2B835Cu;
    // 0x2b835c: 0xc053f48  jal         func_14FD20
    ctx->pc = 0x2B835Cu;
    SET_GPR_U32(ctx, 31, 0x2B8364u);
    ctx->pc = 0x14FD20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD20u, 0x2B835Cu, 0x2B8364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8364u;
label_2b8364:
    // 0x2b8364: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2b8364u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x2b8368: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x2b8368u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x2b836c: 0x24a5b598  addiu       $a1, $a1, -0x4A68
    ctx->pc = 0x2b836cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948248));
    // 0x2b8370: 0x24c654f8  addiu       $a2, $a2, 0x54F8
    ctx->pc = 0x2b8370u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 21752));
    // 0x2b8374: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x2B8374u;
    SET_GPR_U32(ctx, 31, 0x2B837Cu);
    ctx->pc = 0x2B8378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8374u;
    // 0x2b8378: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x2B8374u, 0x2B837Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B837Cu;
label_2b837c:
    // 0x2b837c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2b837cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8380: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b8380u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b8384: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2b8384u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b8388: 0x3e00008  jr          $ra
    ctx->pc = 0x2B8388u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B838Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8388u;
        // 0x2b838c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B8388u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B8390u;
    // 0x2b8390: 0xac8230a4  sw          $v0, 0x30A4($a0)
    ctx->pc = 0x2b8390u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12452), GPR_U32(ctx, 2));
    // 0x2b8394: 0x0  nop
    ctx->pc = 0x2b8394u;
    // NOP
    // 0x2b8398: 0xac8230a4  sw          $v0, 0x30A4($a0)
    ctx->pc = 0x2b8398u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12452), GPR_U32(ctx, 2));
    // 0x2b839c: 0x0  nop
    ctx->pc = 0x2b839cu;
    // NOP
    // 0x2b83a0: 0xac8230a4  sw          $v0, 0x30A4($a0)
    ctx->pc = 0x2b83a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12452), GPR_U32(ctx, 2));
    // 0x2b83a4: 0x0  nop
    ctx->pc = 0x2b83a4u;
    // NOP
    // 0x2b83a8: 0xac8230a4  sw          $v0, 0x30A4($a0)
    ctx->pc = 0x2b83a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12452), GPR_U32(ctx, 2));
    // 0x2b83ac: 0x0  nop
    ctx->pc = 0x2b83acu;
    // NOP
    // 0x2b83b0: 0xac8230a4  sw          $v0, 0x30A4($a0)
    ctx->pc = 0x2b83b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12452), GPR_U32(ctx, 2));
    // 0x2b83b4: 0x0  nop
    ctx->pc = 0x2b83b4u;
    // NOP
    ctx->pc = 0x2b83b8u;
}
