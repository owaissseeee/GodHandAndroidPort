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

// Function: cEm00_startGotoToFire
// Address: 0x26e458 - 0x26e588
void cEm00_startGotoToFire_0x26e458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cEm00_startGotoToFire_0x26e458");
#endif

    switch (ctx->pc) {
        case 0x26e498u: goto label_26e498;
        case 0x26e4a0u: goto label_26e4a0;
        case 0x26e4d0u: goto label_26e4d0;
        case 0x26e4e0u: goto label_26e4e0;
        case 0x26e4f4u: goto label_26e4f4;
        case 0x26e530u: goto label_26e530;
        case 0x26e54cu: goto label_26e54c;
        default: break;
    }

    ctx->pc = 0x26e458u;

    // 0x26e458: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x26e458u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x26e45c: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x26e45cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x26e460: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x26e460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x26e464: 0x24030204  addiu       $v1, $zero, 0x204
    ctx->pc = 0x26e464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 516));
    // 0x26e468: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x26e468u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e46c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x26e46cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x26e470: 0x94447a50  lhu         $a0, 0x7A50($v0)
    ctx->pc = 0x26e470u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)FAST_READ16(0x747A50u));
    // 0x26e474: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x26e474u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x26e478: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x26e478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x26e47c: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x26e47cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x26e480: 0x14830037  bne         $a0, $v1, . + 4 + (0x37 << 2)
    ctx->pc = 0x26E480u;
    {
        const bool branch_taken_0x26e480 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x26E484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E480u;
        // 0x26e484: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e480) {
            ctx->pc = 0x26E560u;
            goto label_26e560;
        }
    }
    ctx->pc = 0x26E488u;
    // 0x26e488: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x26e488u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e48c: 0x3c130058  lui         $s3, 0x58
    ctx->pc = 0x26e48cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)88 << 16));
    // 0x26e490: 0x24140013  addiu       $s4, $zero, 0x13
    ctx->pc = 0x26e490u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x26e494: 0x266464f0  addiu       $a0, $s3, 0x64F0
    ctx->pc = 0x26e494u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 25840));
label_26e498:
    // 0x26e498: 0xc0a5232  jal         func_2948C8
    ctx->pc = 0x26E498u;
    SET_GPR_U32(ctx, 31, 0x26E4A0u);
    ctx->pc = 0x26E49Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E498u;
    // 0x26e49c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2948C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2948C8u, 0x26E498u, 0x26E4A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E4A0u;
label_26e4a0:
    // 0x26e4a0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26e4a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e4a4: 0x5200002b  beql        $s0, $zero, . + 4 + (0x2B << 2)
    ctx->pc = 0x26E4A4u;
    {
        const bool branch_taken_0x26e4a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x26e4a4) {
            ctx->pc = 0x26E4A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26E4A4u;
            // 0x26e4a8: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26E554u;
            goto label_26e554;
        }
    }
    ctx->pc = 0x26E4ACu;
    // 0x26e4ac: 0x8e2206ec  lw          $v0, 0x6EC($s1)
    ctx->pc = 0x26e4acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1772)));
    // 0x26e4b0: 0x50400028  beql        $v0, $zero, . + 4 + (0x28 << 2)
    ctx->pc = 0x26E4B0u;
    {
        const bool branch_taken_0x26e4b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26e4b0) {
            ctx->pc = 0x26E4B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26E4B0u;
            // 0x26e4b4: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26E554u;
            goto label_26e554;
        }
    }
    ctx->pc = 0x26E4B8u;
    // 0x26e4b8: 0x944202fe  lhu         $v0, 0x2FE($v0)
    ctx->pc = 0x26e4b8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 766)));
    // 0x26e4bc: 0x384203b7  xori        $v0, $v0, 0x3B7
    ctx->pc = 0x26e4bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)951);
    // 0x26e4c0: 0x54400024  bnel        $v0, $zero, . + 4 + (0x24 << 2)
    ctx->pc = 0x26E4C0u;
    {
        const bool branch_taken_0x26e4c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26e4c0) {
            ctx->pc = 0x26E4C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26E4C0u;
            // 0x26e4c4: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26E554u;
            goto label_26e554;
        }
    }
    ctx->pc = 0x26E4C8u;
    // 0x26e4c8: 0xc06e190  jal         func_1B8640
    ctx->pc = 0x26E4C8u;
    SET_GPR_U32(ctx, 31, 0x26E4D0u);
    ctx->pc = 0x26E4CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E4C8u;
    // 0x26e4cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8640u, 0x26E4C8u, 0x26E4D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E4D0u;
label_26e4d0:
    // 0x26e4d0: 0x54400020  bnel        $v0, $zero, . + 4 + (0x20 << 2)
    ctx->pc = 0x26E4D0u;
    {
        const bool branch_taken_0x26e4d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26e4d0) {
            ctx->pc = 0x26E4D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26E4D0u;
            // 0x26e4d4: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26E554u;
            goto label_26e554;
        }
    }
    ctx->pc = 0x26E4D8u;
    // 0x26e4d8: 0xc06e192  jal         func_1B8648
    ctx->pc = 0x26E4D8u;
    SET_GPR_U32(ctx, 31, 0x26E4E0u);
    ctx->pc = 0x26E4DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E4D8u;
    // 0x26e4dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8648u, 0x26E4D8u, 0x26E4E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E4E0u;
label_26e4e0:
    // 0x26e4e0: 0x5440001c  bnel        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x26E4E0u;
    {
        const bool branch_taken_0x26e4e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26e4e0) {
            ctx->pc = 0x26E4E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26E4E0u;
            // 0x26e4e4: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26E554u;
            goto label_26e554;
        }
    }
    ctx->pc = 0x26E4E8u;
    // 0x26e4e8: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x26e4e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x26e4ec: 0xc06e1c8  jal         func_1B8720
    ctx->pc = 0x26E4ECu;
    SET_GPR_U32(ctx, 31, 0x26E4F4u);
    ctx->pc = 0x26E4F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E4ECu;
    // 0x26e4f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8720u, 0x26E4ECu, 0x26E4F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E4F4u;
label_26e4f4:
    // 0x26e4f4: 0x13a20007  beq         $sp, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x26E4F4u;
    {
        const bool branch_taken_0x26e4f4 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 2));
        if (branch_taken_0x26e4f4) {
            ctx->pc = 0x26E514u;
            goto label_26e514;
        }
    }
    ctx->pc = 0x26E4FCu;
    // 0x26e4fc: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x26e4fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26e500: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x26e500u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x26e504: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x26e504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26e508: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x26e508u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x26e50c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x26e50cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26e510: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x26e510u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_26e514:
    // 0x26e514: 0x3c014396  lui         $at, 0x4396
    ctx->pc = 0x26e514u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17302 << 16));
    // 0x26e518: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x26e518u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x26e51c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26e51cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e520: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x26e520u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e524: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x26e524u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x26e528: 0xc09ba62  jal         func_26E988
    ctx->pc = 0x26E528u;
    SET_GPR_U32(ctx, 31, 0x26E530u);
    ctx->pc = 0x26E52Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E528u;
    // 0x26e52c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26E988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26E988u, 0x26E528u, 0x26E530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E530u;
label_26e530:
    // 0x26e530: 0xa23217b1  sb          $s2, 0x17B1($s1)
    ctx->pc = 0x26e530u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 6065), (uint8_t)GPR_U32(ctx, 18));
    // 0x26e534: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26e534u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e538: 0xa23402f5  sb          $s4, 0x2F5($s1)
    ctx->pc = 0x26e538u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 20));
    // 0x26e53c: 0xa22002f4  sb          $zero, 0x2F4($s1)
    ctx->pc = 0x26e53cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x26e540: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x26e540u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x26e544: 0xc06e19c  jal         func_1B8670
    ctx->pc = 0x26E544u;
    SET_GPR_U32(ctx, 31, 0x26E54Cu);
    ctx->pc = 0x26E548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E544u;
    // 0x26e548: 0xa22002f7  sb          $zero, 0x2F7($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8670u, 0x26E544u, 0x26E54Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E54Cu;
label_26e54c:
    // 0x26e54c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x26E54Cu;
    {
        const bool branch_taken_0x26e54c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E54Cu;
        // 0x26e550: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e54c) {
            ctx->pc = 0x26E564u;
            goto label_26e564;
        }
    }
    ctx->pc = 0x26E554u;
label_26e554:
    // 0x26e554: 0x2e420002  sltiu       $v0, $s2, 0x2
    ctx->pc = 0x26e554u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x26e558: 0x1440ffcf  bnez        $v0, . + 4 + (-0x31 << 2)
    ctx->pc = 0x26E558u;
    {
        const bool branch_taken_0x26e558 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26E55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E558u;
        // 0x26e55c: 0x266464f0  addiu       $a0, $s3, 0x64F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 25840));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e558) {
            ctx->pc = 0x26E498u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26e498;
        }
    }
    ctx->pc = 0x26E560u;
label_26e560:
    // 0x26e560: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x26e560u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26e564:
    // 0x26e564: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x26e564u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x26e568: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x26e568u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x26e56c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x26e56cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26e570: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x26e570u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26e574: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x26e574u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26e578: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x26e578u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26e57c: 0x3e00008  jr          $ra
    ctx->pc = 0x26E57Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26E580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E57Cu;
        // 0x26e580: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26E57Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26E584u;
    // 0x26e584: 0x0  nop
    ctx->pc = 0x26e584u;
    // NOP
    ctx->pc = 0x26e588u;
}
