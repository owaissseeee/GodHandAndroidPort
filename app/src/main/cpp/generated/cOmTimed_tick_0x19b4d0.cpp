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

// Function: cOmTimed_tick
// Address: 0x19b4d0 - 0x19b580
void cOmTimed_tick_0x19b4d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cOmTimed_tick_0x19b4d0");
#endif

    switch (ctx->pc) {
        case 0x19b4d0u: goto label_19b4d0;
        case 0x19b4d4u: goto label_19b4d4;
        case 0x19b4d8u: goto label_19b4d8;
        case 0x19b4dcu: goto label_19b4dc;
        case 0x19b4e0u: goto label_19b4e0;
        case 0x19b4e4u: goto label_19b4e4;
        case 0x19b4e8u: goto label_19b4e8;
        case 0x19b4ecu: goto label_19b4ec;
        case 0x19b4f0u: goto label_19b4f0;
        case 0x19b4f4u: goto label_19b4f4;
        case 0x19b4f8u: goto label_19b4f8;
        case 0x19b4fcu: goto label_19b4fc;
        case 0x19b500u: goto label_19b500;
        case 0x19b504u: goto label_19b504;
        case 0x19b508u: goto label_19b508;
        case 0x19b50cu: goto label_19b50c;
        case 0x19b510u: goto label_19b510;
        case 0x19b514u: goto label_19b514;
        case 0x19b518u: goto label_19b518;
        case 0x19b51cu: goto label_19b51c;
        case 0x19b520u: goto label_19b520;
        case 0x19b524u: goto label_19b524;
        case 0x19b528u: goto label_19b528;
        case 0x19b52cu: goto label_19b52c;
        case 0x19b530u: goto label_19b530;
        case 0x19b534u: goto label_19b534;
        case 0x19b538u: goto label_19b538;
        case 0x19b53cu: goto label_19b53c;
        case 0x19b540u: goto label_19b540;
        case 0x19b544u: goto label_19b544;
        case 0x19b548u: goto label_19b548;
        case 0x19b54cu: goto label_19b54c;
        case 0x19b550u: goto label_19b550;
        case 0x19b554u: goto label_19b554;
        case 0x19b558u: goto label_19b558;
        case 0x19b55cu: goto label_19b55c;
        case 0x19b560u: goto label_19b560;
        case 0x19b564u: goto label_19b564;
        case 0x19b568u: goto label_19b568;
        case 0x19b56cu: goto label_19b56c;
        case 0x19b570u: goto label_19b570;
        case 0x19b574u: goto label_19b574;
        case 0x19b578u: goto label_19b578;
        case 0x19b57cu: goto label_19b57c;
        default: break;
    }

    ctx->pc = 0x19b4d0u;

label_19b4d0:
    // 0x19b4d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19b4d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_19b4d4:
    // 0x19b4d4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x19b4d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_19b4d8:
    // 0x19b4d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x19b4d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_19b4dc:
    // 0x19b4dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19b4dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19b4e0:
    // 0x19b4e0: 0x920302f5  lbu         $v1, 0x2F5($s0)
    ctx->pc = 0x19b4e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 757)));
label_19b4e4:
    // 0x19b4e4: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_19b4e8:
    if (ctx->pc == 0x19B4E8u) {
        ctx->pc = 0x19B4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B4E4u;
        // 0x19b4e8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B4ECu;
        goto label_19b4ec;
    }
    ctx->pc = 0x19B4E4u;
    {
        const bool branch_taken_0x19b4e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B4E4u;
        // 0x19b4e8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b4e4) {
            ctx->pc = 0x19B4FCu;
            goto label_19b4fc;
        }
    }
    ctx->pc = 0x19B4ECu;
label_19b4ec:
    // 0x19b4ec: 0x50620018  beql        $v1, $v0, . + 4 + (0x18 << 2)
label_19b4f0:
    if (ctx->pc == 0x19B4F0u) {
        ctx->pc = 0x19B4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B4ECu;
        // 0x19b4f0: 0x96020a90  lhu         $v0, 0xA90($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2704)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B4F4u;
        goto label_19b4f4;
    }
    ctx->pc = 0x19B4ECu;
    {
        const bool branch_taken_0x19b4ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x19b4ec) {
            ctx->pc = 0x19B4F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19B4ECu;
            // 0x19b4f0: 0x96020a90  lhu         $v0, 0xA90($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2704)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19B550u;
            goto label_19b550;
        }
    }
    ctx->pc = 0x19B4F4u;
label_19b4f4:
    // 0x19b4f4: 0x1000001f  b           . + 4 + (0x1F << 2)
label_19b4f8:
    if (ctx->pc == 0x19B4F8u) {
        ctx->pc = 0x19B4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B4F4u;
        // 0x19b4f8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B4FCu;
        goto label_19b4fc;
    }
    ctx->pc = 0x19B4F4u;
    {
        const bool branch_taken_0x19b4f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B4F4u;
        // 0x19b4f8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b4f4) {
            ctx->pc = 0x19B574u;
            goto label_19b574;
        }
    }
    ctx->pc = 0x19B4FCu;
label_19b4fc:
    // 0x19b4fc: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x19b4fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
label_19b500:
    // 0x19b500: 0x8e030214  lw          $v1, 0x214($s0)
    ctx->pc = 0x19b500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
label_19b504:
    // 0x19b504: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x19b504u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_19b508:
    // 0x19b508: 0x8c620084  lw          $v0, 0x84($v1)
    ctx->pc = 0x19b508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_19b50c:
    // 0x19b50c: 0x40f809  jalr        $v0
label_19b510:
    if (ctx->pc == 0x19B510u) {
        ctx->pc = 0x19B510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B50Cu;
        // 0x19b510: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B514u;
        goto label_19b514;
    }
    ctx->pc = 0x19B50Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19B514u);
        ctx->pc = 0x19B510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B50Cu;
        // 0x19b510: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19B50Cu, 0x19B514u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19B514u;
label_19b514:
    // 0x19b514: 0x53a20008  beql        $sp, $v0, . + 4 + (0x8 << 2)
label_19b518:
    if (ctx->pc == 0x19B518u) {
        ctx->pc = 0x19B518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B514u;
        // 0x19b518: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B51Cu;
        goto label_19b51c;
    }
    ctx->pc = 0x19B514u;
    {
        const bool branch_taken_0x19b514 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 2));
        if (branch_taken_0x19b514) {
            ctx->pc = 0x19B518u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19B514u;
            // 0x19b518: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19B538u;
            goto label_19b538;
        }
    }
    ctx->pc = 0x19B51Cu;
label_19b51c:
    // 0x19b51c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x19b51cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19b520:
    // 0x19b520: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x19b520u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_19b524:
    // 0x19b524: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x19b524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19b528:
    // 0x19b528: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x19b528u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_19b52c:
    // 0x19b52c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x19b52cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19b530:
    // 0x19b530: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x19b530u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_19b534:
    // 0x19b534: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x19b534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_19b538:
    // 0x19b538: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19b538u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19b53c:
    // 0x19b53c: 0xa6020a90  sh          $v0, 0xA90($s0)
    ctx->pc = 0x19b53cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2704), (uint16_t)GPR_U32(ctx, 2));
label_19b540:
    // 0x19b540: 0xa20302f5  sb          $v1, 0x2F5($s0)
    ctx->pc = 0x19b540u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 3));
label_19b544:
    // 0x19b544: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x19b544u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
label_19b548:
    // 0x19b548: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x19b548u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
label_19b54c:
    // 0x19b54c: 0x96020a90  lhu         $v0, 0xA90($s0)
    ctx->pc = 0x19b54cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2704)));
label_19b550:
    // 0x19b550: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x19b550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_19b554:
    // 0x19b554: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x19b554u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_19b558:
    // 0x19b558: 0x1c600005  bgtz        $v1, . + 4 + (0x5 << 2)
label_19b55c:
    if (ctx->pc == 0x19B55Cu) {
        ctx->pc = 0x19B55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B558u;
        // 0x19b55c: 0xa6020a90  sh          $v0, 0xA90($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 2704), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B560u;
        goto label_19b560;
    }
    ctx->pc = 0x19B558u;
    {
        const bool branch_taken_0x19b558 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x19B55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B558u;
        // 0x19b55c: 0xa6020a90  sh          $v0, 0xA90($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 2704), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b558) {
            ctx->pc = 0x19B570u;
            goto label_19b570;
        }
    }
    ctx->pc = 0x19B560u;
label_19b560:
    // 0x19b560: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x19b560u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
label_19b564:
    // 0x19b564: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x19b564u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
label_19b568:
    // 0x19b568: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x19b568u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
label_19b56c:
    // 0x19b56c: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x19b56cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
label_19b570:
    // 0x19b570: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x19b570u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_19b574:
    // 0x19b574: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19b574u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_19b578:
    // 0x19b578: 0x3e00008  jr          $ra
label_19b57c:
    if (ctx->pc == 0x19B57Cu) {
        ctx->pc = 0x19B57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B578u;
        // 0x19b57c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B580u;
        goto label_fallthrough_0x19b578;
    }
    ctx->pc = 0x19B578u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19B57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B578u;
        // 0x19b57c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19B578u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x19b578:
    ctx->pc = 0x19B580u;
}
