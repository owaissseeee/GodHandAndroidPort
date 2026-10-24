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

// Function: func_002B42F0
// Address: 0x2b42f0 - 0x2b4390
void func_002B42F0_0x2b42f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002B42F0_0x2b42f0");
#endif

    switch (ctx->pc) {
        case 0x2b436cu: goto label_2b436c;
        default: break;
    }

    ctx->pc = 0x2b42f0u;

    // 0x2b42f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b42f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b42f4: 0x2403fff7  addiu       $v1, $zero, -0x9
    ctx->pc = 0x2b42f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x2b42f8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2b42f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2b42fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b42fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b4300: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b4300u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4304: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x2b4304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2b4308: 0x431824  and         $v1, $v0, $v1
    ctx->pc = 0x2b4308u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2b430c: 0x211ba  dsrl        $v0, $v0, 6
    ctx->pc = 0x2b430cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 6);
    // 0x2b4310: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2b4310u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2b4314: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B4314u;
    {
        const bool branch_taken_0x2b4314 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4314u;
        // 0x2b4318: 0xae030014  sw          $v1, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4314) {
            ctx->pc = 0x2B432Cu;
            goto label_2b432c;
        }
    }
    ctx->pc = 0x2B431Cu;
    // 0x2b431c: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x2b431cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2b4320: 0xa200000f  sb          $zero, 0xF($s0)
    ctx->pc = 0x2b4320u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 15), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b4324: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2B4324u;
    {
        const bool branch_taken_0x2b4324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4324u;
        // 0x2b4328: 0xa202000c  sb          $v0, 0xC($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 12), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4324) {
            ctx->pc = 0x2B4374u;
            goto label_2b4374;
        }
    }
    ctx->pc = 0x2B432Cu;
label_2b432c:
    // 0x2b432c: 0x8e05008c  lw          $a1, 0x8C($s0)
    ctx->pc = 0x2b432cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x2b4330: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x2b4330u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2b4334: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x2b4334u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2b4338: 0x3044ff00  andi        $a0, $v0, 0xFF00
    ctx->pc = 0x2b4338u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2b433c: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B433Cu;
    {
        const bool branch_taken_0x2b433c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2B4340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B433Cu;
        // 0x2b4340: 0x34029000  ori         $v0, $zero, 0x9000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)36864);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b433c) {
            ctx->pc = 0x2B4354u;
            goto label_2b4354;
        }
    }
    ctx->pc = 0x2B4344u;
    // 0x2b4344: 0x50820007  beql        $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B4344u;
    {
        const bool branch_taken_0x2b4344 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x2b4344) {
            ctx->pc = 0x2B4348u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B4344u;
            // 0x2b4348: 0x94a50002  lhu         $a1, 0x2($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B4364u;
            goto label_2b4364;
        }
    }
    ctx->pc = 0x2B434Cu;
    // 0x2b434c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2B434Cu;
    {
        const bool branch_taken_0x2b434c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B434Cu;
        // 0x2b4350: 0xa200000f  sb          $zero, 0xF($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 15), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b434c) {
            ctx->pc = 0x2B4370u;
            goto label_2b4370;
        }
    }
    ctx->pc = 0x2B4354u;
label_2b4354:
    // 0x2b4354: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x2b4354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2b4358: 0xa200000f  sb          $zero, 0xF($s0)
    ctx->pc = 0x2b4358u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 15), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b435c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2B435Cu;
    {
        const bool branch_taken_0x2b435c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B435Cu;
        // 0x2b4360: 0xa202000c  sb          $v0, 0xC($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 12), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b435c) {
            ctx->pc = 0x2B4374u;
            goto label_2b4374;
        }
    }
    ctx->pc = 0x2B4364u;
label_2b4364:
    // 0x2b4364: 0xc0ac87c  jal         func_2B21F0
    ctx->pc = 0x2B4364u;
    SET_GPR_U32(ctx, 31, 0x2B436Cu);
    ctx->pc = 0x2B4368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4364u;
    // 0x2b4368: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B21F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B21F0u, 0x2B4364u, 0x2B436Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B436Cu;
label_2b436c:
    // 0x2b436c: 0xa200000f  sb          $zero, 0xF($s0)
    ctx->pc = 0x2b436cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 15), (uint8_t)GPR_U32(ctx, 0));
label_2b4370:
    // 0x2b4370: 0xa200000c  sb          $zero, 0xC($s0)
    ctx->pc = 0x2b4370u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12), (uint8_t)GPR_U32(ctx, 0));
label_2b4374:
    // 0x2b4374: 0xa200000d  sb          $zero, 0xD($s0)
    ctx->pc = 0x2b4374u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 13), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b4378: 0xa200000e  sb          $zero, 0xE($s0)
    ctx->pc = 0x2b4378u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 14), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b437c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2b437cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b4380: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b4380u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b4384: 0x3e00008  jr          $ra
    ctx->pc = 0x2B4384u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B4388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4384u;
        // 0x2b4388: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B4384u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B438Cu;
    // 0x2b438c: 0x0  nop
    ctx->pc = 0x2b438cu;
    // NOP
    ctx->pc = 0x2b4390u;
}
