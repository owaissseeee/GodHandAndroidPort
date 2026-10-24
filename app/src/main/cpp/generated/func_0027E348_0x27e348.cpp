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

// Function: func_0027E348
// Address: 0x27e348 - 0x27e3f8
void func_0027E348_0x27e348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0027E348_0x27e348");
#endif

    switch (ctx->pc) {
        case 0x27e348u: goto label_27e348;
        case 0x27e34cu: goto label_27e34c;
        case 0x27e350u: goto label_27e350;
        case 0x27e354u: goto label_27e354;
        case 0x27e358u: goto label_27e358;
        case 0x27e35cu: goto label_27e35c;
        case 0x27e360u: goto label_27e360;
        case 0x27e364u: goto label_27e364;
        case 0x27e368u: goto label_27e368;
        case 0x27e36cu: goto label_27e36c;
        case 0x27e370u: goto label_27e370;
        case 0x27e374u: goto label_27e374;
        case 0x27e378u: goto label_27e378;
        case 0x27e37cu: goto label_27e37c;
        case 0x27e380u: goto label_27e380;
        case 0x27e384u: goto label_27e384;
        case 0x27e388u: goto label_27e388;
        case 0x27e38cu: goto label_27e38c;
        case 0x27e390u: goto label_27e390;
        case 0x27e394u: goto label_27e394;
        case 0x27e398u: goto label_27e398;
        case 0x27e39cu: goto label_27e39c;
        case 0x27e3a0u: goto label_27e3a0;
        case 0x27e3a4u: goto label_27e3a4;
        case 0x27e3a8u: goto label_27e3a8;
        case 0x27e3acu: goto label_27e3ac;
        case 0x27e3b0u: goto label_27e3b0;
        case 0x27e3b4u: goto label_27e3b4;
        case 0x27e3b8u: goto label_27e3b8;
        case 0x27e3bcu: goto label_27e3bc;
        case 0x27e3c0u: goto label_27e3c0;
        case 0x27e3c4u: goto label_27e3c4;
        case 0x27e3c8u: goto label_27e3c8;
        case 0x27e3ccu: goto label_27e3cc;
        case 0x27e3d0u: goto label_27e3d0;
        case 0x27e3d4u: goto label_27e3d4;
        case 0x27e3d8u: goto label_27e3d8;
        case 0x27e3dcu: goto label_27e3dc;
        case 0x27e3e0u: goto label_27e3e0;
        case 0x27e3e4u: goto label_27e3e4;
        case 0x27e3e8u: goto label_27e3e8;
        case 0x27e3ecu: goto label_27e3ec;
        case 0x27e3f0u: goto label_27e3f0;
        case 0x27e3f4u: goto label_27e3f4;
        default: break;
    }

    ctx->pc = 0x27e348u;

label_27e348:
    // 0x27e348: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x27e348u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_27e34c:
    // 0x27e34c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x27e34cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_27e350:
    // 0x27e350: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x27e350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_27e354:
    // 0x27e354: 0x90c202f5  lbu         $v0, 0x2F5($a2)
    ctx->pc = 0x27e354u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 757)));
label_27e358:
    // 0x27e358: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x27e358u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_27e35c:
    // 0x27e35c: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_27e360:
    if (ctx->pc == 0x27E360u) {
        ctx->pc = 0x27E360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E35Cu;
        // 0x27e360: 0xa0c002f5  sb          $zero, 0x2F5($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 757), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27E364u;
        goto label_27e364;
    }
    ctx->pc = 0x27E35Cu;
    {
        const bool branch_taken_0x27e35c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27e35c) {
            ctx->pc = 0x27E360u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27E35Cu;
            // 0x27e360: 0xa0c002f5  sb          $zero, 0x2F5($a2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 6), 757), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27E364u;
            goto label_27e364;
        }
    }
    ctx->pc = 0x27E364u;
label_27e364:
    // 0x27e364: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x27e364u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_27e368:
    // 0x27e368: 0x90c302f5  lbu         $v1, 0x2F5($a2)
    ctx->pc = 0x27e368u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 757)));
label_27e36c:
    // 0x27e36c: 0x2447fe88  addiu       $a3, $v0, -0x178
    ctx->pc = 0x27e36cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966920));
label_27e370:
    // 0x27e370: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x27e370u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27e374:
    // 0x27e374: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x27e374u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_27e378:
    // 0x27e378: 0x472021  addu        $a0, $v0, $a3
    ctx->pc = 0x27e378u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_27e37c:
    // 0x27e37c: 0x84850002  lh          $a1, 0x2($a0)
    ctx->pc = 0x27e37cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_27e380:
    // 0x27e380: 0x4a0000a  bltz        $a1, . + 4 + (0xA << 2)
label_27e384:
    if (ctx->pc == 0x27E384u) {
        ctx->pc = 0x27E384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E380u;
        // 0x27e384: 0x60482d  daddu       $t1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27E388u;
        goto label_27e388;
    }
    ctx->pc = 0x27E380u;
    {
        const bool branch_taken_0x27e380 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x27E384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E380u;
        // 0x27e384: 0x60482d  daddu       $t1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e380) {
            ctx->pc = 0x27E3ACu;
            goto label_27e3ac;
        }
    }
    ctx->pc = 0x27E388u;
label_27e388:
    // 0x27e388: 0x84820004  lh          $v0, 0x4($a0)
    ctx->pc = 0x27e388u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_27e38c:
    // 0x27e38c: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x27e38cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_27e390:
    // 0x27e390: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x27e390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_27e394:
    // 0x27e394: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x27e394u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_27e398:
    // 0x27e398: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x27e398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_27e39c:
    // 0x27e39c: 0xdc68fff8  ld          $t0, -0x8($v1)
    ctx->pc = 0x27e39cu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 4294967288)));
label_27e3a0:
    // 0x27e3a0: 0x8383f  dsra32      $a3, $t0, 0
    ctx->pc = 0x27e3a0u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 8) >> (32 + 0));
label_27e3a4:
    // 0x27e3a4: 0x10000004  b           . + 4 + (0x4 << 2)
label_27e3a8:
    if (ctx->pc == 0x27E3A8u) {
        ctx->pc = 0x27E3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E3A4u;
        // 0x27e3a8: 0x2543fe88  addiu       $v1, $t2, -0x178 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 4294966920));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27E3ACu;
        goto label_27e3ac;
    }
    ctx->pc = 0x27E3A4u;
    {
        const bool branch_taken_0x27e3a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E3A4u;
        // 0x27e3a8: 0x2543fe88  addiu       $v1, $t2, -0x178 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 4294966920));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e3a4) {
            ctx->pc = 0x27E3B8u;
            goto label_27e3b8;
        }
    }
    ctx->pc = 0x27E3ACu;
label_27e3ac:
    // 0x27e3ac: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x27e3acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_27e3b0:
    // 0x27e3b0: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x27e3b0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_27e3b4:
    // 0x27e3b4: 0x2543fe88  addiu       $v1, $t2, -0x178
    ctx->pc = 0x27e3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 4294966920));
label_27e3b8:
    // 0x27e3b8: 0x910c0  sll         $v0, $t1, 3
    ctx->pc = 0x27e3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
label_27e3bc:
    // 0x27e3bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27e3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_27e3c0:
    // 0x27e3c0: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
label_27e3c4:
    if (ctx->pc == 0x27E3C4u) {
        ctx->pc = 0x27E3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E3C0u;
        // 0x27e3c4: 0x84430000  lh          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27E3C8u;
        goto label_27e3c8;
    }
    ctx->pc = 0x27E3C0u;
    {
        const bool branch_taken_0x27e3c0 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x27E3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E3C0u;
        // 0x27e3c4: 0x84430000  lh          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e3c0) {
            ctx->pc = 0x27E3DCu;
            goto label_27e3dc;
        }
    }
    ctx->pc = 0x27E3C8u;
label_27e3c8:
    // 0x27e3c8: 0x3102ffff  andi        $v0, $t0, 0xFFFF
    ctx->pc = 0x27e3c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
label_27e3cc:
    // 0x27e3cc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x27e3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_27e3d0:
    // 0x27e3d0: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x27e3d0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_27e3d4:
    // 0x27e3d4: 0x10000002  b           . + 4 + (0x2 << 2)
label_27e3d8:
    if (ctx->pc == 0x27E3D8u) {
        ctx->pc = 0x27E3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E3D4u;
        // 0x27e3d8: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27E3DCu;
        goto label_27e3dc;
    }
    ctx->pc = 0x27E3D4u;
    {
        const bool branch_taken_0x27e3d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E3D4u;
        // 0x27e3d8: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e3d4) {
            ctx->pc = 0x27E3E0u;
            goto label_27e3e0;
        }
    }
    ctx->pc = 0x27E3DCu;
label_27e3dc:
    // 0x27e3dc: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x27e3dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_27e3e0:
    // 0x27e3e0: 0xe0f809  jalr        $a3
label_27e3e4:
    if (ctx->pc == 0x27E3E4u) {
        ctx->pc = 0x27E3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E3E0u;
        // 0x27e3e4: 0xc22021  addu        $a0, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27E3E8u;
        goto label_27e3e8;
    }
    ctx->pc = 0x27E3E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x27E3E8u);
        ctx->pc = 0x27E3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E3E0u;
        // 0x27e3e4: 0xc22021  addu        $a0, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27E3E0u, 0x27E3E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27E3E8u;
label_27e3e8:
    // 0x27e3e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27e3e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_27e3ec:
    // 0x27e3ec: 0x3e00008  jr          $ra
label_27e3f0:
    if (ctx->pc == 0x27E3F0u) {
        ctx->pc = 0x27E3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E3ECu;
        // 0x27e3f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27E3F4u;
        goto label_27e3f4;
    }
    ctx->pc = 0x27E3ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27E3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E3ECu;
        // 0x27e3f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27E3ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27E3F4u;
label_27e3f4:
    // 0x27e3f4: 0x0  nop
    ctx->pc = 0x27e3f4u;
    // NOP
    ctx->pc = 0x27e3f8u;
}
