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

// Function: func_002834E8
// Address: 0x2834e8 - 0x283620
void func_002834E8_0x2834e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002834E8_0x2834e8");
#endif

    switch (ctx->pc) {
        case 0x283520u: goto label_283520;
        case 0x2835fcu: goto label_2835fc;
        case 0x283604u: goto label_283604;
        default: break;
    }

    ctx->pc = 0x2834e8u;

    // 0x2834e8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2834e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2834ec: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2834ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2834f0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2834f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2834f4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2834f4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2834f8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2834f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2834fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2834fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283500: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x283500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x283504: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x283504u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283508: 0x8e060304  lw          $a2, 0x304($s0)
    ctx->pc = 0x283508u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x28350c: 0x8cc50004  lw          $a1, 0x4($a2)
    ctx->pc = 0x28350cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x283510: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x283510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x283514: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x283514u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x283518: 0xc0525ce  jal         func_149738
    ctx->pc = 0x283518u;
    SET_GPR_U32(ctx, 31, 0x283520u);
    ctx->pc = 0x28351Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x283518u;
    // 0x28351c: 0x463021  addu        $a2, $v0, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149738u, 0x283518u, 0x283520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283520u;
label_283520:
    // 0x283520: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x283520u;
    {
        const bool branch_taken_0x283520 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x283524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283520u;
        // 0x283524: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283520) {
            ctx->pc = 0x283604u;
            goto label_283604;
        }
    }
    ctx->pc = 0x283528u;
    // 0x283528: 0x8e0202f0  lw          $v0, 0x2F0($s0)
    ctx->pc = 0x283528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 752)));
    // 0x28352c: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x28352cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x283530: 0x8e030250  lw          $v1, 0x250($s0)
    ctx->pc = 0x283530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
    // 0x283534: 0x920602b4  lbu         $a2, 0x2B4($s0)
    ctx->pc = 0x283534u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x283538: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x283538u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x28353c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x28353cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x283540: 0xae0202f0  sw          $v0, 0x2F0($s0)
    ctx->pc = 0x283540u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 752), GPR_U32(ctx, 2));
    // 0x283544: 0xa2050531  sb          $a1, 0x531($s0)
    ctx->pc = 0x283544u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1329), (uint8_t)GPR_U32(ctx, 5));
    // 0x283548: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x283548u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28354c: 0xae030250  sw          $v1, 0x250($s0)
    ctx->pc = 0x28354cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 3));
    // 0x283550: 0xae0021b0  sw          $zero, 0x21B0($s0)
    ctx->pc = 0x283550u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8624), GPR_U32(ctx, 0));
    // 0x283554: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x283554u;
    {
        const bool branch_taken_0x283554 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x283558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283554u;
        // 0x283558: 0xafa60000  sw          $a2, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283554) {
            ctx->pc = 0x283568u;
            goto label_283568;
        }
    }
    ctx->pc = 0x28355Cu;
    // 0x28355c: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x28355cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x283560: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x283560u;
    {
        const bool branch_taken_0x283560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283560u;
        // 0x283564: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283560) {
            ctx->pc = 0x28356Cu;
            goto label_28356c;
        }
    }
    ctx->pc = 0x283568u;
label_283568:
    // 0x283568: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x283568u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28356c:
    // 0x28356c: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x28356Cu;
    {
        const bool branch_taken_0x28356c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28356c) {
            ctx->pc = 0x2835F4u;
            goto label_2835f4;
        }
    }
    ctx->pc = 0x283574u;
    // 0x283574: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x283574u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x283578: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x283578u;
    {
        const bool branch_taken_0x283578 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28357Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283578u;
        // 0x28357c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283578) {
            ctx->pc = 0x28358Cu;
            goto label_28358c;
        }
    }
    ctx->pc = 0x283580u;
    // 0x283580: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x283580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x283584: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x283584u;
    {
        const bool branch_taken_0x283584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283584u;
        // 0x283588: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283584) {
            ctx->pc = 0x283590u;
            goto label_283590;
        }
    }
    ctx->pc = 0x28358Cu;
label_28358c:
    // 0x28358c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x28358cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_283590:
    // 0x283590: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x283590u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x283594: 0x248300e0  addiu       $v1, $a0, 0xE0
    ctx->pc = 0x283594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 224));
    // 0x283598: 0xc441d880  lwc1        $f1, -0x2780($v0)
    ctx->pc = 0x283598u;
    { uint32_t bits = FAST_READ32(0x3BD880u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28359c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x28359cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2835a0: 0x2442d880  addiu       $v0, $v0, -0x2780
    ctx->pc = 0x2835a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957184));
    // 0x2835a4: 0xe48100e0  swc1        $f1, 0xE0($a0)
    ctx->pc = 0x2835a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 224), bits); }
    // 0x2835a8: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2835a8u;
    { uint32_t bits = FAST_READ32(0x3BD884u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2835ac: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x2835acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2835b0: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x2835b0u;
    { uint32_t bits = FAST_READ32(0x3BD888u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2835b4: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x2835b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x2835b8: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x2835b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x2835bc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2835BCu;
    {
        const bool branch_taken_0x2835bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2835C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2835BCu;
        // 0x2835c0: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2835bc) {
            ctx->pc = 0x2835D0u;
            goto label_2835d0;
        }
    }
    ctx->pc = 0x2835C4u;
    // 0x2835c4: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x2835c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x2835c8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2835C8u;
    {
        const bool branch_taken_0x2835c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2835CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2835C8u;
        // 0x2835cc: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2835c8) {
            ctx->pc = 0x2835D4u;
            goto label_2835d4;
        }
    }
    ctx->pc = 0x2835D0u;
label_2835d0:
    // 0x2835d0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2835d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2835d4:
    // 0x2835d4: 0xc4a0d880  lwc1        $f0, -0x2780($a1)
    ctx->pc = 0x2835d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4294957184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2835d8: 0x24a3d880  addiu       $v1, $a1, -0x2780
    ctx->pc = 0x2835d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957184));
    // 0x2835dc: 0x8c4200d0  lw          $v0, 0xD0($v0)
    ctx->pc = 0x2835dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 208)));
    // 0x2835e0: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2835e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2835e4: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2835e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2835e8: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2835e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2835ec: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2835ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2835f0: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2835f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2835f4:
    // 0x2835f4: 0xc0527ae  jal         func_149EB8
    ctx->pc = 0x2835F4u;
    SET_GPR_U32(ctx, 31, 0x2835FCu);
    ctx->pc = 0x2835F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2835F4u;
    // 0x2835f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149EB8u, 0x2835F4u, 0x2835FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2835FCu;
label_2835fc:
    // 0x2835fc: 0xc0a0e5a  jal         func_283968
    ctx->pc = 0x2835FCu;
    SET_GPR_U32(ctx, 31, 0x283604u);
    ctx->pc = 0x283600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2835FCu;
    // 0x283600: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x283968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x283968u, 0x2835FCu, 0x283604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283604u;
label_283604:
    // 0x283604: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x283604u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283608: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x283608u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28360c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x28360cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x283610: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x283610u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x283614: 0x3e00008  jr          $ra
    ctx->pc = 0x283614u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x283618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283614u;
        // 0x283618: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x283614u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28361Cu;
    // 0x28361c: 0x0  nop
    ctx->pc = 0x28361cu;
    // NOP
    ctx->pc = 0x283620u;
}
