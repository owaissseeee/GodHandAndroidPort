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

// Function: func_003034A8
// Address: 0x3034a8 - 0x3035d0
void func_003034A8_0x3034a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003034A8_0x3034a8");
#endif

    switch (ctx->pc) {
        case 0x303524u: goto label_303524;
        case 0x303538u: goto label_303538;
        case 0x303548u: goto label_303548;
        case 0x30356cu: goto label_30356c;
        case 0x30357cu: goto label_30357c;
        case 0x30358cu: goto label_30358c;
        case 0x303598u: goto label_303598;
        case 0x3035a4u: goto label_3035a4;
        case 0x3035b0u: goto label_3035b0;
        default: break;
    }

    ctx->pc = 0x3034a8u;

    // 0x3034a8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x3034a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x3034ac: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x3034acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x3034b0: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x3034b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x3034b4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3034b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3034b8: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x3034b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x3034bc: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x3034bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x3034c0: 0x8e420104  lw          $v0, 0x104($s2)
    ctx->pc = 0x3034c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
    // 0x3034c4: 0x1040003c  beqz        $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x3034C4u;
    {
        const bool branch_taken_0x3034c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3034C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3034C4u;
        // 0x3034c8: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3034c4) {
            ctx->pc = 0x3035B8u;
            goto label_3035b8;
        }
    }
    ctx->pc = 0x3034CCu;
    // 0x3034cc: 0x8642018a  lh          $v0, 0x18A($s2)
    ctx->pc = 0x3034ccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 394)));
    // 0x3034d0: 0x4400039  bltz        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x3034D0u;
    {
        const bool branch_taken_0x3034d0 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x3034D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3034D0u;
        // 0x3034d4: 0x9643018a  lhu         $v1, 0x18A($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 394)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3034d0) {
            ctx->pc = 0x3035B8u;
            goto label_3035b8;
        }
    }
    ctx->pc = 0x3034D8u;
    // 0x3034d8: 0x2462fffe  addiu       $v0, $v1, -0x2
    ctx->pc = 0x3034d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x3034dc: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x3034dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x3034e0: 0x1c600035  bgtz        $v1, . + 4 + (0x35 << 2)
    ctx->pc = 0x3034E0u;
    {
        const bool branch_taken_0x3034e0 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x3034E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3034E0u;
        // 0x3034e4: 0xa642018a  sh          $v0, 0x18A($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 394), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3034e0) {
            ctx->pc = 0x3035B8u;
            goto label_3035b8;
        }
    }
    ctx->pc = 0x3034E8u;
    // 0x3034e8: 0x8e450108  lw          $a1, 0x108($s2)
    ctx->pc = 0x3034e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 264)));
    // 0x3034ec: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x3034ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3034f0: 0xc643011c  lwc1        $f3, 0x11C($s2)
    ctx->pc = 0x3034f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3034f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3034f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3034f8: 0xc6420120  lwc1        $f2, 0x120($s2)
    ctx->pc = 0x3034f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3034fc: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x3034fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x303500: 0xc6410124  lwc1        $f1, 0x124($s2)
    ctx->pc = 0x303500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x303504: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x303504u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x303508: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x303508u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30350c: 0xa640018a  sh          $zero, 0x18A($s2)
    ctx->pc = 0x30350cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 394), (uint16_t)GPR_U32(ctx, 0));
    // 0x303510: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x303510u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x303514: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x303514u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x303518: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x303518u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x30351c: 0xc051d4a  jal         func_147528
    ctx->pc = 0x30351Cu;
    SET_GPR_U32(ctx, 31, 0x303524u);
    ctx->pc = 0x303520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30351Cu;
    // 0x303520: 0xe7a0000c  swc1        $f0, 0xC($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x147528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147528u, 0x30351Cu, 0x303524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303524u;
label_303524:
    // 0x303524: 0xfba00050  sqc2        $vf0, 0x50($sp)
    ctx->pc = 0x303524u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x303528: 0x27b10050  addiu       $s1, $sp, 0x50
    ctx->pc = 0x303528u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x30352c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30352cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303530: 0xc051f10  jal         func_147C40
    ctx->pc = 0x303530u;
    SET_GPR_U32(ctx, 31, 0x303538u);
    ctx->pc = 0x303534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303530u;
    // 0x303534: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C40u, 0x303530u, 0x303538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303538u;
label_303538:
    // 0x303538: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x303538u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30353c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x30353cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303540: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x303540u;
    SET_GPR_U32(ctx, 31, 0x303548u);
    ctx->pc = 0x303544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303540u;
    // 0x303544: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x303540u, 0x303548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303548u;
label_303548:
    // 0x303548: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x303548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30354c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x30354cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303550: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x303550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x303554: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x303554u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303558: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x303558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30355c: 0xe642011c  swc1        $f2, 0x11C($s2)
    ctx->pc = 0x30355cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 284), bits); }
    // 0x303560: 0xe6410120  swc1        $f1, 0x120($s2)
    ctx->pc = 0x303560u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 288), bits); }
    // 0x303564: 0xc0ad8be  jal         func_2B62F8
    ctx->pc = 0x303564u;
    SET_GPR_U32(ctx, 31, 0x30356Cu);
    ctx->pc = 0x303568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303564u;
    // 0x303568: 0xe6400124  swc1        $f0, 0x124($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 292), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B62F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B62F8u, 0x303564u, 0x30356Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30356Cu;
label_30356c:
    // 0x30356c: 0xfba00060  sqc2        $vf0, 0x60($sp)
    ctx->pc = 0x30356cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x303570: 0x27b00060  addiu       $s0, $sp, 0x60
    ctx->pc = 0x303570u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x303574: 0xc0ad86c  jal         func_2B61B0
    ctx->pc = 0x303574u;
    SET_GPR_U32(ctx, 31, 0x30357Cu);
    ctx->pc = 0x303578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303574u;
    // 0x303578: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B61B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B61B0u, 0x303574u, 0x30357Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30357Cu;
label_30357c:
    // 0x30357c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x30357cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303580: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x303580u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303584: 0xc051f22  jal         func_147C88
    ctx->pc = 0x303584u;
    SET_GPR_U32(ctx, 31, 0x30358Cu);
    ctx->pc = 0x303588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303584u;
    // 0x303588: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C88u, 0x303584u, 0x30358Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30358Cu;
label_30358c:
    // 0x30358c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x30358cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303590: 0xc0ad88c  jal         func_2B6230
    ctx->pc = 0x303590u;
    SET_GPR_U32(ctx, 31, 0x303598u);
    ctx->pc = 0x303594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303590u;
    // 0x303594: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6230u, 0x303590u, 0x303598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303598u;
label_303598:
    // 0x303598: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x303598u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30359c: 0xc0ad7ca  jal         func_2B5F28
    ctx->pc = 0x30359Cu;
    SET_GPR_U32(ctx, 31, 0x3035A4u);
    ctx->pc = 0x3035A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30359Cu;
    // 0x3035a0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5F28u, 0x30359Cu, 0x3035A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3035A4u;
label_3035a4:
    // 0x3035a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3035a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3035a8: 0xc0ad756  jal         func_2B5D58
    ctx->pc = 0x3035A8u;
    SET_GPR_U32(ctx, 31, 0x3035B0u);
    ctx->pc = 0x3035ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3035A8u;
    // 0x3035ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5D58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5D58u, 0x3035A8u, 0x3035B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3035B0u;
label_3035b0:
    // 0x3035b0: 0xae400104  sw          $zero, 0x104($s2)
    ctx->pc = 0x3035b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 260), GPR_U32(ctx, 0));
    // 0x3035b4: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x3035b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3035b8:
    // 0x3035b8: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x3035b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3035bc: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x3035bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3035c0: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x3035c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3035c4: 0x3e00008  jr          $ra
    ctx->pc = 0x3035C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3035C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3035C4u;
        // 0x3035c8: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3035C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3035CCu;
    // 0x3035cc: 0x0  nop
    ctx->pc = 0x3035ccu;
    // NOP
    ctx->pc = 0x3035d0u;
}
