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

// Function: func_00344300
// Address: 0x344300 - 0x3443c8
void func_00344300_0x344300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00344300_0x344300");
#endif

    switch (ctx->pc) {
        case 0x344328u: goto label_344328;
        case 0x344338u: goto label_344338;
        case 0x344354u: goto label_344354;
        case 0x344368u: goto label_344368;
        case 0x344380u: goto label_344380;
        case 0x344388u: goto label_344388;
        default: break;
    }

    ctx->pc = 0x344300u;

    // 0x344300: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x344300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x344304: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x344304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x344308: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x344308u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34430c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x34430cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x344310: 0x26110008  addiu       $s1, $s0, 0x8
    ctx->pc = 0x344310u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x344314: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x344314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x344318: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x344318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x34431c: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x34431cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x344320: 0xc0d1b04  jal         func_346C10
    ctx->pc = 0x344320u;
    SET_GPR_U32(ctx, 31, 0x344328u);
    ctx->pc = 0x344324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344320u;
    // 0x344324: 0x8e25000c  lw          $a1, 0xC($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x346C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x346C10u, 0x344320u, 0x344328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344328u;
label_344328:
    // 0x344328: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x344328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34432c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x34432cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344330: 0xc0d115a  jal         func_344568
    ctx->pc = 0x344330u;
    SET_GPR_U32(ctx, 31, 0x344338u);
    ctx->pc = 0x344334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344330u;
    // 0x344334: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344568u, 0x344330u, 0x344338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344338u;
label_344338:
    // 0x344338: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x344338u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x34433c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x34433Cu;
    {
        const bool branch_taken_0x34433c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x344340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34433Cu;
        // 0x344340: 0x24847650  addiu       $a0, $a0, 0x7650 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34433c) {
            ctx->pc = 0x344378u;
            goto label_344378;
        }
    }
    ctx->pc = 0x344344u;
    // 0x344344: 0xae0200ac  sw          $v0, 0xAC($s0)
    ctx->pc = 0x344344u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 2));
    // 0x344348: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x344348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34434c: 0xc0d1cba  jal         func_3472E8
    ctx->pc = 0x34434Cu;
    SET_GPR_U32(ctx, 31, 0x344354u);
    ctx->pc = 0x344350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34434Cu;
    // 0x344350: 0xae1200b0  sw          $s2, 0xB0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3472E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3472E8u, 0x34434Cu, 0x344354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344354u;
label_344354:
    // 0x344354: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x344354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x344358: 0x14430011  bne         $v0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x344358u;
    {
        const bool branch_taken_0x344358 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x34435Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344358u;
        // 0x34435c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344358) {
            ctx->pc = 0x3443A0u;
            goto label_3443a0;
        }
    }
    ctx->pc = 0x344360u;
    // 0x344360: 0xc0d115a  jal         func_344568
    ctx->pc = 0x344360u;
    SET_GPR_U32(ctx, 31, 0x344368u);
    ctx->pc = 0x344364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344360u;
    // 0x344364: 0x3c050002  lui         $a1, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344568u, 0x344360u, 0x344368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344368u;
label_344368:
    // 0x344368: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x344368u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x34436c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x34436cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344370: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x344370u;
    {
        const bool branch_taken_0x344370 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x344374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344370u;
        // 0x344374: 0x24847678  addiu       $a0, $a0, 0x7678 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30328));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344370) {
            ctx->pc = 0x344390u;
            goto label_344390;
        }
    }
    ctx->pc = 0x344378u;
label_344378:
    // 0x344378: 0xc0d22f8  jal         func_348BE0
    ctx->pc = 0x344378u;
    SET_GPR_U32(ctx, 31, 0x344380u);
    ctx->pc = 0x348BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348BE0u, 0x344378u, 0x344380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344380u;
label_344380:
    // 0x344380: 0xc0d11c4  jal         func_344710
    ctx->pc = 0x344380u;
    SET_GPR_U32(ctx, 31, 0x344388u);
    ctx->pc = 0x344384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344380u;
    // 0x344384: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344710u, 0x344380u, 0x344388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344388u;
label_344388:
    // 0x344388: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x344388u;
    {
        const bool branch_taken_0x344388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34438Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344388u;
        // 0x34438c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344388) {
            ctx->pc = 0x3443ACu;
            goto label_3443ac;
        }
    }
    ctx->pc = 0x344390u;
label_344390:
    // 0x344390: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x344390u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x344394: 0xae030180  sw          $v1, 0x180($s0)
    ctx->pc = 0x344394u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 384), GPR_U32(ctx, 3));
    // 0x344398: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x344398u;
    {
        const bool branch_taken_0x344398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34439Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344398u;
        // 0x34439c: 0xae020184  sw          $v0, 0x184($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 388), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344398) {
            ctx->pc = 0x3443A8u;
            goto label_3443a8;
        }
    }
    ctx->pc = 0x3443A0u;
label_3443a0:
    // 0x3443a0: 0xae000184  sw          $zero, 0x184($s0)
    ctx->pc = 0x3443a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 388), GPR_U32(ctx, 0));
    // 0x3443a4: 0xae000180  sw          $zero, 0x180($s0)
    ctx->pc = 0x3443a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 384), GPR_U32(ctx, 0));
label_3443a8:
    // 0x3443a8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3443a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3443ac:
    // 0x3443ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3443acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3443b0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3443b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3443b4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3443b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3443b8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3443b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3443bc: 0x3e00008  jr          $ra
    ctx->pc = 0x3443BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3443C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3443BCu;
        // 0x3443c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3443BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3443C4u;
    // 0x3443c4: 0x0  nop
    ctx->pc = 0x3443c4u;
    // NOP
    ctx->pc = 0x3443c8u;
}
