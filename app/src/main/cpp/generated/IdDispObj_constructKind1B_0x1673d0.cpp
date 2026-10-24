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

// Function: IdDispObj_constructKind1B
// Address: 0x1673d0 - 0x1674c8
void IdDispObj_constructKind1B_0x1673d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("IdDispObj_constructKind1B_0x1673d0");
#endif

    switch (ctx->pc) {
        case 0x1673ecu: goto label_1673ec;
        case 0x1673fcu: goto label_1673fc;
        case 0x16741cu: goto label_16741c;
        case 0x16742cu: goto label_16742c;
        case 0x167434u: goto label_167434;
        case 0x167444u: goto label_167444;
        case 0x167454u: goto label_167454;
        case 0x16745cu: goto label_16745c;
        case 0x167480u: goto label_167480;
        case 0x167488u: goto label_167488;
        default: break;
    }

    ctx->pc = 0x1673d0u;

    // 0x1673d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1673d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1673d4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1673d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1673d8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1673d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1673dc: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1673dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1673e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1673e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1673e4: 0xc058574  jal         func_1615D0
    ctx->pc = 0x1673E4u;
    SET_GPR_U32(ctx, 31, 0x1673ECu);
    ctx->pc = 0x1673E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1673E4u;
    // 0x1673e8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1615D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1615D0u, 0x1673E4u, 0x1673ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1673ECu;
label_1673ec:
    // 0x1673ec: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x1673ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x1673f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1673f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1673f4: 0xc058540  jal         func_161500
    ctx->pc = 0x1673F4u;
    SET_GPR_U32(ctx, 31, 0x1673FCu);
    ctx->pc = 0x1673F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1673F4u;
    // 0x1673f8: 0x24a5fba0  addiu       $a1, $a1, -0x460 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x161500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161500u, 0x1673F4u, 0x1673FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1673FCu;
label_1673fc:
    // 0x1673fc: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1673FCu;
    {
        const bool branch_taken_0x1673fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x167400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1673FCu;
        // 0x167400: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1673fc) {
            ctx->pc = 0x167474u;
            goto label_167474;
        }
    }
    ctx->pc = 0x167404u;
    // 0x167404: 0x8e260050  lw          $a2, 0x50($s1)
    ctx->pc = 0x167404u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x167408: 0x8c432384  lw          $v1, 0x2384($v0)
    ctx->pc = 0x167408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9092)));
    // 0x16740c: 0x2405001b  addiu       $a1, $zero, 0x1B
    ctx->pc = 0x16740cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x167410: 0x263000c0  addiu       $s0, $s1, 0xC0
    ctx->pc = 0x167410u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
    // 0x167414: 0xc0ab33e  jal         func_2ACCF8
    ctx->pc = 0x167414u;
    SET_GPR_U32(ctx, 31, 0x16741Cu);
    ctx->pc = 0x167418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167414u;
    // 0x167418: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACCF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACCF8u, 0x167414u, 0x16741Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16741Cu;
label_16741c:
    // 0x16741c: 0x2405001b  addiu       $a1, $zero, 0x1B
    ctx->pc = 0x16741cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x167420: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x167420u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167424: 0xc0aa7a8  jal         func_2A9EA0
    ctx->pc = 0x167424u;
    SET_GPR_U32(ctx, 31, 0x16742Cu);
    ctx->pc = 0x167428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167424u;
    // 0x167428: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9EA0u, 0x167424u, 0x16742Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16742Cu;
label_16742c:
    // 0x16742c: 0xc0aae9e  jal         func_2ABA78
    ctx->pc = 0x16742Cu;
    SET_GPR_U32(ctx, 31, 0x167434u);
    ctx->pc = 0x167430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16742Cu;
    // 0x167430: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABA78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABA78u, 0x16742Cu, 0x167434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167434u;
label_167434:
    // 0x167434: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x167434u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167438: 0x2405001b  addiu       $a1, $zero, 0x1B
    ctx->pc = 0x167438u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x16743c: 0xc0aa7cc  jal         func_2A9F30
    ctx->pc = 0x16743Cu;
    SET_GPR_U32(ctx, 31, 0x167444u);
    ctx->pc = 0x167440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16743Cu;
    // 0x167440: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9F30u, 0x16743Cu, 0x167444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167444u;
label_167444:
    // 0x167444: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x167444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167448: 0x2405001b  addiu       $a1, $zero, 0x1B
    ctx->pc = 0x167448u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x16744c: 0xc0aa7a8  jal         func_2A9EA0
    ctx->pc = 0x16744Cu;
    SET_GPR_U32(ctx, 31, 0x167454u);
    ctx->pc = 0x167450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16744Cu;
    // 0x167450: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9EA0u, 0x16744Cu, 0x167454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167454u;
label_167454:
    // 0x167454: 0xc0aae9e  jal         func_2ABA78
    ctx->pc = 0x167454u;
    SET_GPR_U32(ctx, 31, 0x16745Cu);
    ctx->pc = 0x167458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167454u;
    // 0x167458: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABA78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABA78u, 0x167454u, 0x16745Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16745Cu;
label_16745c:
    // 0x16745c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x16745cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x167460: 0xa220005a  sb          $zero, 0x5A($s1)
    ctx->pc = 0x167460u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 90), (uint8_t)GPR_U32(ctx, 0));
    // 0x167464: 0xae220060  sw          $v0, 0x60($s1)
    ctx->pc = 0x167464u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 2));
    // 0x167468: 0xa220005b  sb          $zero, 0x5B($s1)
    ctx->pc = 0x167468u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 91), (uint8_t)GPR_U32(ctx, 0));
    // 0x16746c: 0xa220005c  sb          $zero, 0x5C($s1)
    ctx->pc = 0x16746cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 92), (uint8_t)GPR_U32(ctx, 0));
    // 0x167470: 0xa220005d  sb          $zero, 0x5D($s1)
    ctx->pc = 0x167470u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 93), (uint8_t)GPR_U32(ctx, 0));
label_167474:
    // 0x167474: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x167474u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167478: 0x26320080  addiu       $s2, $s1, 0x80
    ctx->pc = 0x167478u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x16747c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16747cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_167480:
    // 0x167480: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x167480u;
    SET_GPR_U32(ctx, 31, 0x167488u);
    ctx->pc = 0x167484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167480u;
    // 0x167484: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x167480u, 0x167488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167488u;
label_167488:
    // 0x167488: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x167488u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x16748c: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x16748cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x167490: 0x2442021  addu        $a0, $s2, $a0
    ctx->pc = 0x167490u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x167494: 0x3070ffff  andi        $s0, $v1, 0xFFFF
    ctx->pc = 0x167494u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x167498: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x167498u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x16749c: 0x2e020010  sltiu       $v0, $s0, 0x10
    ctx->pc = 0x16749cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x1674a0: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1674A0u;
    {
        const bool branch_taken_0x1674a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1674A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1674A0u;
        // 0x1674a4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1674a0) {
            ctx->pc = 0x167480u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_167480;
        }
    }
    ctx->pc = 0x1674A8u;
    // 0x1674a8: 0xa2200111  sb          $zero, 0x111($s1)
    ctx->pc = 0x1674a8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 273), (uint8_t)GPR_U32(ctx, 0));
    // 0x1674ac: 0xa2200110  sb          $zero, 0x110($s1)
    ctx->pc = 0x1674acu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 272), (uint8_t)GPR_U32(ctx, 0));
    // 0x1674b0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1674b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1674b4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1674b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1674b8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1674b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1674bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1674bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1674c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1674C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1674C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1674C0u;
        // 0x1674c4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1674C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1674C8u;
}
