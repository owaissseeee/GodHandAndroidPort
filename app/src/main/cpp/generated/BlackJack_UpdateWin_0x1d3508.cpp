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

// Function: BlackJack_UpdateWin
// Address: 0x1d3508 - 0x1d3808
void BlackJack_UpdateWin_0x1d3508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BlackJack_UpdateWin_0x1d3508");
#endif

    switch (ctx->pc) {
        case 0x1d3588u: goto label_1d3588;
        case 0x1d3594u: goto label_1d3594;
        case 0x1d35a0u: goto label_1d35a0;
        case 0x1d35acu: goto label_1d35ac;
        case 0x1d35e0u: goto label_1d35e0;
        case 0x1d35e8u: goto label_1d35e8;
        case 0x1d35f4u: goto label_1d35f4;
        case 0x1d35fcu: goto label_1d35fc;
        case 0x1d3608u: goto label_1d3608;
        case 0x1d3614u: goto label_1d3614;
        case 0x1d361cu: goto label_1d361c;
        case 0x1d3634u: goto label_1d3634;
        case 0x1d3640u: goto label_1d3640;
        case 0x1d36f0u: goto label_1d36f0;
        case 0x1d3710u: goto label_1d3710;
        case 0x1d3738u: goto label_1d3738;
        case 0x1d374cu: goto label_1d374c;
        case 0x1d3774u: goto label_1d3774;
        case 0x1d3780u: goto label_1d3780;
        case 0x1d378cu: goto label_1d378c;
        case 0x1d37b4u: goto label_1d37b4;
        default: break;
    }

    ctx->pc = 0x1d3508u;

    // 0x1d3508: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d3508u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d350c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1d350cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1d3510: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d3510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d3514: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d3514u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3518: 0x8e031808  lw          $v1, 0x1808($s0)
    ctx->pc = 0x1d3518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6152)));
    // 0x1d351c: 0x2c62000a  sltiu       $v0, $v1, 0xA
    ctx->pc = 0x1d351cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x1d3520: 0x104000b5  beqz        $v0, . + 4 + (0xB5 << 2)
    ctx->pc = 0x1D3520u;
    {
        const bool branch_taken_0x1d3520 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3520u;
        // 0x1d3524: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3520) {
            ctx->pc = 0x1D37F8u;
            goto label_1d37f8;
        }
    }
    ctx->pc = 0x1D3528u;
    // 0x1d3528: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d3528u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1d352c: 0x2442b040  addiu       $v0, $v0, -0x4FC0
    ctx->pc = 0x1d352cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946880));
    // 0x1d3530: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1d3530u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1d3534: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1d3534u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d3538: 0x800008  jr          $a0
    ctx->pc = 0x1D3538u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D3540u: goto label_1d3540;
            case 0x1D3570u: goto label_1d3570;
            case 0x1D35BCu: goto label_1d35bc;
            case 0x1D3650u: goto label_1d3650;
            case 0x1D366Cu: goto label_1d366c;
            case 0x1D36BCu: goto label_1d36bc;
            case 0x1D3754u: goto label_1d3754;
            case 0x1D379Cu: goto label_1d379c;
            case 0x1D37C4u: goto label_1d37c4;
            case 0x1D37ECu: goto label_1d37ec;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D3538u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1D3540u;
label_1d3540:
    // 0x1d3540: 0xc6001814  lwc1        $f0, 0x1814($s0)
    ctx->pc = 0x1d3540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 6164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d3544: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d3544u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1d3548: 0x8e021808  lw          $v0, 0x1808($s0)
    ctx->pc = 0x1d3548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6152)));
    // 0x1d354c: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x1d354cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1d3550: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d3550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d3554: 0xae03180c  sw          $v1, 0x180C($s0)
    ctx->pc = 0x1d3554u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6156), GPR_U32(ctx, 3));
    // 0x1d3558: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1d3558u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x1d355c: 0xae021808  sw          $v0, 0x1808($s0)
    ctx->pc = 0x1d355cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6152), GPR_U32(ctx, 2));
    // 0x1d3560: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1d3560u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1d3564: 0xe6011818  swc1        $f1, 0x1818($s0)
    ctx->pc = 0x1d3564u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 6168), bits); }
    // 0x1d3568: 0x100000a4  b           . + 4 + (0xA4 << 2)
    ctx->pc = 0x1D3568u;
    {
        const bool branch_taken_0x1d3568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D356Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3568u;
        // 0x1d356c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3568) {
            ctx->pc = 0x1D37FCu;
            goto label_1d37fc;
        }
    }
    ctx->pc = 0x1D3570u;
label_1d3570:
    // 0x1d3570: 0x8e02180c  lw          $v0, 0x180C($s0)
    ctx->pc = 0x1d3570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6156)));
    // 0x1d3574: 0x1440009b  bnez        $v0, . + 4 + (0x9B << 2)
    ctx->pc = 0x1D3574u;
    {
        const bool branch_taken_0x1d3574 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D3578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3574u;
        // 0x1d3578: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3574) {
            ctx->pc = 0x1D37E4u;
            goto label_1d37e4;
        }
    }
    ctx->pc = 0x1D357Cu;
    // 0x1d357c: 0x8e051818  lw          $a1, 0x1818($s0)
    ctx->pc = 0x1d357cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6168)));
    // 0x1d3580: 0xc0755d8  jal         func_1D5760
    ctx->pc = 0x1D3580u;
    SET_GPR_U32(ctx, 31, 0x1D3588u);
    ctx->pc = 0x1D3584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3580u;
    // 0x1d3584: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5760u, 0x1D3580u, 0x1D3588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3588u;
label_1d3588:
    // 0x1d3588: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d3588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d358c: 0xc075b48  jal         func_1D6D20
    ctx->pc = 0x1D358Cu;
    SET_GPR_U32(ctx, 31, 0x1D3594u);
    ctx->pc = 0x1D3590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D358Cu;
    // 0x1d3590: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6D20u, 0x1D358Cu, 0x1D3594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3594u;
label_1d3594:
    // 0x1d3594: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d3594u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3598: 0xc075b5a  jal         func_1D6D68
    ctx->pc = 0x1D3598u;
    SET_GPR_U32(ctx, 31, 0x1D35A0u);
    ctx->pc = 0x1D359Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3598u;
    // 0x1d359c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6D68u, 0x1D3598u, 0x1D35A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D35A0u;
label_1d35a0:
    // 0x1d35a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d35a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d35a4: 0xc075a9c  jal         func_1D6A70
    ctx->pc = 0x1D35A4u;
    SET_GPR_U32(ctx, 31, 0x1D35ACu);
    ctx->pc = 0x1D35A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D35A4u;
    // 0x1d35a8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6A70u, 0x1D35A4u, 0x1D35ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D35ACu;
label_1d35ac:
    // 0x1d35ac: 0x8e021808  lw          $v0, 0x1808($s0)
    ctx->pc = 0x1d35acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6152)));
    // 0x1d35b0: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x1d35b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1d35b4: 0x10000087  b           . + 4 + (0x87 << 2)
    ctx->pc = 0x1D35B4u;
    {
        const bool branch_taken_0x1d35b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D35B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D35B4u;
        // 0x1d35b8: 0xae03180c  sw          $v1, 0x180C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 6156), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d35b4) {
            ctx->pc = 0x1D37D4u;
            goto label_1d37d4;
        }
    }
    ctx->pc = 0x1D35BCu;
label_1d35bc:
    // 0x1d35bc: 0x8e02180c  lw          $v0, 0x180C($s0)
    ctx->pc = 0x1d35bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6156)));
    // 0x1d35c0: 0x14400088  bnez        $v0, . + 4 + (0x88 << 2)
    ctx->pc = 0x1D35C0u;
    {
        const bool branch_taken_0x1d35c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D35C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D35C0u;
        // 0x1d35c4: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d35c0) {
            ctx->pc = 0x1D37E4u;
            goto label_1d37e4;
        }
    }
    ctx->pc = 0x1D35C8u;
    // 0x1d35c8: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1d35c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1d35cc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d35ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d35d0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d35d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d35d4: 0x24050029  addiu       $a1, $zero, 0x29
    ctx->pc = 0x1d35d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x1d35d8: 0xc0b4584  jal         func_2D1610
    ctx->pc = 0x1D35D8u;
    SET_GPR_U32(ctx, 31, 0x1D35E0u);
    ctx->pc = 0x1D35DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D35D8u;
    // 0x1d35dc: 0x2484ee00  addiu       $a0, $a0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1610u, 0x1D35D8u, 0x1D35E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D35E0u;
label_1d35e0:
    // 0x1d35e0: 0xc0751c8  jal         func_1D4720
    ctx->pc = 0x1D35E0u;
    SET_GPR_U32(ctx, 31, 0x1D35E8u);
    ctx->pc = 0x1D35E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D35E0u;
    // 0x1d35e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4720u, 0x1D35E0u, 0x1D35E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D35E8u;
label_1d35e8:
    // 0x1d35e8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d35e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d35ec: 0xc075a94  jal         func_1D6A50
    ctx->pc = 0x1D35ECu;
    SET_GPR_U32(ctx, 31, 0x1D35F4u);
    ctx->pc = 0x1D35F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D35ECu;
    // 0x1d35f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6A50u, 0x1D35ECu, 0x1D35F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D35F4u;
label_1d35f4:
    // 0x1d35f4: 0xc0751fa  jal         func_1D47E8
    ctx->pc = 0x1D35F4u;
    SET_GPR_U32(ctx, 31, 0x1D35FCu);
    ctx->pc = 0x1D35F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D35F4u;
    // 0x1d35f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D47E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D47E8u, 0x1D35F4u, 0x1D35FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D35FCu;
label_1d35fc:
    // 0x1d35fc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d35fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3600: 0xc075a8c  jal         func_1D6A30
    ctx->pc = 0x1D3600u;
    SET_GPR_U32(ctx, 31, 0x1D3608u);
    ctx->pc = 0x1D3604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3600u;
    // 0x1d3604: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6A30u, 0x1D3600u, 0x1D3608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3608u;
label_1d3608:
    // 0x1d3608: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1d3608u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d360c: 0xc075278  jal         func_1D49E0
    ctx->pc = 0x1D360Cu;
    SET_GPR_U32(ctx, 31, 0x1D3614u);
    ctx->pc = 0x1D3610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D360Cu;
    // 0x1d3610: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D49E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D49E0u, 0x1D360Cu, 0x1D3614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3614u;
label_1d3614:
    // 0x1d3614: 0xc0751fa  jal         func_1D47E8
    ctx->pc = 0x1D3614u;
    SET_GPR_U32(ctx, 31, 0x1D361Cu);
    ctx->pc = 0x1D3618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3614u;
    // 0x1d3618: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D47E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D47E8u, 0x1D3614u, 0x1D361Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D361Cu;
label_1d361c:
    // 0x1d361c: 0x28420016  slti        $v0, $v0, 0x16
    ctx->pc = 0x1d361cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)22) ? 1 : 0);
    // 0x1d3620: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d3620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d3624: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1d3624u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d3628: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d3628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d362c: 0xc0752aa  jal         func_1D4AA8
    ctx->pc = 0x1D362Cu;
    SET_GPR_U32(ctx, 31, 0x1D3634u);
    ctx->pc = 0x1D3630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D362Cu;
    // 0x1d3630: 0x62280b  movn        $a1, $v1, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4AA8u, 0x1D362Cu, 0x1D3634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3634u;
label_1d3634:
    // 0x1d3634: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d3634u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3638: 0xc0758c4  jal         func_1D6310
    ctx->pc = 0x1D3638u;
    SET_GPR_U32(ctx, 31, 0x1D3640u);
    ctx->pc = 0x1D363Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3638u;
    // 0x1d363c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6310u, 0x1D3638u, 0x1D3640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3640u;
label_1d3640:
    // 0x1d3640: 0x8e021808  lw          $v0, 0x1808($s0)
    ctx->pc = 0x1d3640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6152)));
    // 0x1d3644: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x1d3644u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1d3648: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x1D3648u;
    {
        const bool branch_taken_0x1d3648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D364Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3648u;
        // 0x1d364c: 0xae03180c  sw          $v1, 0x180C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 6156), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3648) {
            ctx->pc = 0x1D37D4u;
            goto label_1d37d4;
        }
    }
    ctx->pc = 0x1D3650u;
label_1d3650:
    // 0x1d3650: 0x8e02180c  lw          $v0, 0x180C($s0)
    ctx->pc = 0x1d3650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6156)));
    // 0x1d3654: 0x14400063  bnez        $v0, . + 4 + (0x63 << 2)
    ctx->pc = 0x1D3654u;
    {
        const bool branch_taken_0x1d3654 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D3658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3654u;
        // 0x1d3658: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3654) {
            ctx->pc = 0x1D37E4u;
            goto label_1d37e4;
        }
    }
    ctx->pc = 0x1D365Cu;
    // 0x1d365c: 0x8e021808  lw          $v0, 0x1808($s0)
    ctx->pc = 0x1d365cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6152)));
    // 0x1d3660: 0x2403012c  addiu       $v1, $zero, 0x12C
    ctx->pc = 0x1d3660u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x1d3664: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x1D3664u;
    {
        const bool branch_taken_0x1d3664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3664u;
        // 0x1d3668: 0xae03180c  sw          $v1, 0x180C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 6156), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3664) {
            ctx->pc = 0x1D37D4u;
            goto label_1d37d4;
        }
    }
    ctx->pc = 0x1D366Cu;
label_1d366c:
    // 0x1d366c: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x1d366cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x1d3670: 0x3c043000  lui         $a0, 0x3000
    ctx->pc = 0x1d3670u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)12288 << 16));
    // 0x1d3674: 0xdc437640  ld          $v1, 0x7640($v0)
    ctx->pc = 0x1d3674u;
    SET_GPR_U64(ctx, 3, FAST_READ64(0x747640u));
    // 0x1d3678: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1d3678u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1d367c: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D367Cu;
    {
        const bool branch_taken_0x1d367c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d367c) {
            ctx->pc = 0x1D3680u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D367Cu;
            // 0x1d3680: 0x8e041818  lw          $a0, 0x1818($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6168)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D3694u;
            goto label_1d3694;
        }
    }
    ctx->pc = 0x1D3684u;
    // 0x1d3684: 0x8e02180c  lw          $v0, 0x180C($s0)
    ctx->pc = 0x1d3684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6156)));
    // 0x1d3688: 0x14400056  bnez        $v0, . + 4 + (0x56 << 2)
    ctx->pc = 0x1D3688u;
    {
        const bool branch_taken_0x1d3688 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D368Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3688u;
        // 0x1d368c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3688) {
            ctx->pc = 0x1D37E4u;
            goto label_1d37e4;
        }
    }
    ctx->pc = 0x1D3690u;
    // 0x1d3690: 0x8e041818  lw          $a0, 0x1818($s0)
    ctx->pc = 0x1d3690u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6168)));
label_1d3694:
    // 0x1d3694: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1d3694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1d3698: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1D3698u;
    {
        const bool branch_taken_0x1d3698 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d3698) {
            ctx->pc = 0x1D369Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D3698u;
            // 0x1d369c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D36A0u;
            goto label_1d36a0;
        }
    }
    ctx->pc = 0x1D36A0u;
label_1d36a0:
    // 0x1d36a0: 0x82001a  div         $zero, $a0, $v0
    ctx->pc = 0x1d36a0u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1d36a4: 0x8e031808  lw          $v1, 0x1808($s0)
    ctx->pc = 0x1d36a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6152)));
    // 0x1d36a8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d36a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d36ac: 0xae031808  sw          $v1, 0x1808($s0)
    ctx->pc = 0x1d36acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6152), GPR_U32(ctx, 3));
    // 0x1d36b0: 0x2012  mflo        $a0
    ctx->pc = 0x1d36b0u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x1d36b4: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x1D36B4u;
    {
        const bool branch_taken_0x1d36b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D36B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D36B4u;
        // 0x1d36b8: 0xae04180c  sw          $a0, 0x180C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 6156), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d36b4) {
            ctx->pc = 0x1D37F8u;
            goto label_1d37f8;
        }
    }
    ctx->pc = 0x1D36BCu;
label_1d36bc:
    // 0x1d36bc: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x1d36bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x1d36c0: 0x3c043000  lui         $a0, 0x3000
    ctx->pc = 0x1d36c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)12288 << 16));
    // 0x1d36c4: 0xdc437640  ld          $v1, 0x7640($v0)
    ctx->pc = 0x1d36c4u;
    SET_GPR_U64(ctx, 3, FAST_READ64(0x747640u));
    // 0x1d36c8: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1d36c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1d36cc: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D36CCu;
    {
        const bool branch_taken_0x1d36cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d36cc) {
            ctx->pc = 0x1D36D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D36CCu;
            // 0x1d36d0: 0xae001818  sw          $zero, 0x1818($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 6168), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D36E4u;
            goto label_1d36e4;
        }
    }
    ctx->pc = 0x1D36D4u;
    // 0x1d36d4: 0x8e02180c  lw          $v0, 0x180C($s0)
    ctx->pc = 0x1d36d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6156)));
    // 0x1d36d8: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x1D36D8u;
    {
        const bool branch_taken_0x1d36d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d36d8) {
            ctx->pc = 0x1D36DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D36D8u;
            // 0x1d36dc: 0x8e021818  lw          $v0, 0x1818($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6168)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D3720u;
            goto label_1d3720;
        }
    }
    ctx->pc = 0x1D36E0u;
    // 0x1d36e0: 0xae001818  sw          $zero, 0x1818($s0)
    ctx->pc = 0x1d36e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6168), GPR_U32(ctx, 0));
label_1d36e4:
    // 0x1d36e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d36e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d36e8: 0xc0755d8  jal         func_1D5760
    ctx->pc = 0x1D36E8u;
    SET_GPR_U32(ctx, 31, 0x1D36F0u);
    ctx->pc = 0x1D36ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D36E8u;
    // 0x1d36ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5760u, 0x1D36E8u, 0x1D36F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D36F0u;
label_1d36f0:
    // 0x1d36f0: 0x8e02180c  lw          $v0, 0x180C($s0)
    ctx->pc = 0x1d36f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6156)));
    // 0x1d36f4: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1d36f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1d36f8: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x1d36f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x1d36fc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d36fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3700: 0x450018  mult        $zero, $v0, $a1
    ctx->pc = 0x1d3700u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1d3704: 0x2812  mflo        $a1
    ctx->pc = 0x1d3704u;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x1d3708: 0xc07e9d4  jal         func_1FA750
    ctx->pc = 0x1D3708u;
    SET_GPR_U32(ctx, 31, 0x1D3710u);
    ctx->pc = 0x1D370Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3708u;
    // 0x1d370c: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA750u, 0x1D3708u, 0x1D3710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3710u;
label_1d3710:
    // 0x1d3710: 0x8e021808  lw          $v0, 0x1808($s0)
    ctx->pc = 0x1d3710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6152)));
    // 0x1d3714: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x1d3714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1d3718: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x1D3718u;
    {
        const bool branch_taken_0x1d3718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D371Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3718u;
        // 0x1d371c: 0xae03180c  sw          $v1, 0x180C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 6156), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3718) {
            ctx->pc = 0x1D37D4u;
            goto label_1d37d4;
        }
    }
    ctx->pc = 0x1D3720u;
label_1d3720:
    // 0x1d3720: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D3720u;
    {
        const bool branch_taken_0x1d3720 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3720u;
        // 0x1d3724: 0x2442fff6  addiu       $v0, $v0, -0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967286));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3720) {
            ctx->pc = 0x1D3738u;
            goto label_1d3738;
        }
    }
    ctx->pc = 0x1D3728u;
    // 0x1d3728: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d3728u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d372c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d372cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3730: 0xc0755d8  jal         func_1D5760
    ctx->pc = 0x1D3730u;
    SET_GPR_U32(ctx, 31, 0x1D3738u);
    ctx->pc = 0x1D3734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3730u;
    // 0x1d3734: 0xae021818  sw          $v0, 0x1818($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 6168), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5760u, 0x1D3730u, 0x1D3738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3738u;
label_1d3738:
    // 0x1d3738: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x1d3738u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x1d373c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1d373cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1d3740: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x1d3740u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    // 0x1d3744: 0xc07e9d4  jal         func_1FA750
    ctx->pc = 0x1D3744u;
    SET_GPR_U32(ctx, 31, 0x1D374Cu);
    ctx->pc = 0x1D3748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3744u;
    // 0x1d3748: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA750u, 0x1D3744u, 0x1D374Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D374Cu;
label_1d374c:
    // 0x1d374c: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x1D374Cu;
    {
        const bool branch_taken_0x1d374c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D374Cu;
        // 0x1d3750: 0x8e02180c  lw          $v0, 0x180C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6156)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d374c) {
            ctx->pc = 0x1D37E0u;
            goto label_1d37e0;
        }
    }
    ctx->pc = 0x1D3754u;
label_1d3754:
    // 0x1d3754: 0x8e02180c  lw          $v0, 0x180C($s0)
    ctx->pc = 0x1d3754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6156)));
    // 0x1d3758: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D3758u;
    {
        const bool branch_taken_0x1d3758 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D375Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3758u;
        // 0x1d375c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3758) {
            ctx->pc = 0x1D3768u;
            goto label_1d3768;
        }
    }
    ctx->pc = 0x1D3760u;
    // 0x1d3760: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x1D3760u;
    {
        const bool branch_taken_0x1d3760 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D3764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3760u;
        // 0x1d3764: 0xae02180c  sw          $v0, 0x180C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 6156), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3760) {
            ctx->pc = 0x1D37F8u;
            goto label_1d37f8;
        }
    }
    ctx->pc = 0x1D3768u;
label_1d3768:
    // 0x1d3768: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d3768u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d376c: 0xc075278  jal         func_1D49E0
    ctx->pc = 0x1D376Cu;
    SET_GPR_U32(ctx, 31, 0x1D3774u);
    ctx->pc = 0x1D3770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D376Cu;
    // 0x1d3770: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D49E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D49E0u, 0x1D376Cu, 0x1D3774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3774u;
label_1d3774:
    // 0x1d3774: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d3774u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3778: 0xc0752aa  jal         func_1D4AA8
    ctx->pc = 0x1D3778u;
    SET_GPR_U32(ctx, 31, 0x1D3780u);
    ctx->pc = 0x1D377Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3778u;
    // 0x1d377c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4AA8u, 0x1D3778u, 0x1D3780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3780u;
label_1d3780:
    // 0x1d3780: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d3780u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3784: 0xc0758c4  jal         func_1D6310
    ctx->pc = 0x1D3784u;
    SET_GPR_U32(ctx, 31, 0x1D378Cu);
    ctx->pc = 0x1D3788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3784u;
    // 0x1d3788: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6310u, 0x1D3784u, 0x1D378Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D378Cu;
label_1d378c:
    // 0x1d378c: 0x8e021808  lw          $v0, 0x1808($s0)
    ctx->pc = 0x1d378cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6152)));
    // 0x1d3790: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x1d3790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1d3794: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1D3794u;
    {
        const bool branch_taken_0x1d3794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3794u;
        // 0x1d3798: 0xae03180c  sw          $v1, 0x180C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 6156), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3794) {
            ctx->pc = 0x1D37D4u;
            goto label_1d37d4;
        }
    }
    ctx->pc = 0x1D379Cu;
label_1d379c:
    // 0x1d379c: 0x8e02180c  lw          $v0, 0x180C($s0)
    ctx->pc = 0x1d379cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6156)));
    // 0x1d37a0: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1D37A0u;
    {
        const bool branch_taken_0x1d37a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D37A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D37A0u;
        // 0x1d37a4: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d37a0) {
            ctx->pc = 0x1D37E4u;
            goto label_1d37e4;
        }
    }
    ctx->pc = 0x1D37A8u;
    // 0x1d37a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d37a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d37ac: 0xc075a9c  jal         func_1D6A70
    ctx->pc = 0x1D37ACu;
    SET_GPR_U32(ctx, 31, 0x1D37B4u);
    ctx->pc = 0x1D37B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D37ACu;
    // 0x1d37b0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6A70u, 0x1D37ACu, 0x1D37B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D37B4u;
label_1d37b4:
    // 0x1d37b4: 0x8e021808  lw          $v0, 0x1808($s0)
    ctx->pc = 0x1d37b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6152)));
    // 0x1d37b8: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x1d37b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1d37bc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1D37BCu;
    {
        const bool branch_taken_0x1d37bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D37C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D37BCu;
        // 0x1d37c0: 0xae03180c  sw          $v1, 0x180C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 6156), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d37bc) {
            ctx->pc = 0x1D37D4u;
            goto label_1d37d4;
        }
    }
    ctx->pc = 0x1D37C4u;
label_1d37c4:
    // 0x1d37c4: 0x8e02180c  lw          $v0, 0x180C($s0)
    ctx->pc = 0x1d37c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6156)));
    // 0x1d37c8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D37C8u;
    {
        const bool branch_taken_0x1d37c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D37CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D37C8u;
        // 0x1d37cc: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d37c8) {
            ctx->pc = 0x1D37E4u;
            goto label_1d37e4;
        }
    }
    ctx->pc = 0x1D37D0u;
    // 0x1d37d0: 0x8e021808  lw          $v0, 0x1808($s0)
    ctx->pc = 0x1d37d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6152)));
label_1d37d4:
    // 0x1d37d4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d37d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d37d8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1D37D8u;
    {
        const bool branch_taken_0x1d37d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D37DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D37D8u;
        // 0x1d37dc: 0xae021808  sw          $v0, 0x1808($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 6152), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d37d8) {
            ctx->pc = 0x1D37F8u;
            goto label_1d37f8;
        }
    }
    ctx->pc = 0x1D37E0u;
label_1d37e0:
    // 0x1d37e0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1d37e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1d37e4:
    // 0x1d37e4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D37E4u;
    {
        const bool branch_taken_0x1d37e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D37E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D37E4u;
        // 0x1d37e8: 0xae02180c  sw          $v0, 0x180C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 6156), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d37e4) {
            ctx->pc = 0x1D37F8u;
            goto label_1d37f8;
        }
    }
    ctx->pc = 0x1D37ECu;
label_1d37ec:
    // 0x1d37ec: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x1d37ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x1d37f0: 0xae001808  sw          $zero, 0x1808($s0)
    ctx->pc = 0x1d37f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6152), GPR_U32(ctx, 0));
    // 0x1d37f4: 0xae021804  sw          $v0, 0x1804($s0)
    ctx->pc = 0x1d37f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6148), GPR_U32(ctx, 2));
label_1d37f8:
    // 0x1d37f8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1d37f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1d37fc:
    // 0x1d37fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d37fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d3800: 0x3e00008  jr          $ra
    ctx->pc = 0x1D3800u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D3804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3800u;
        // 0x1d3804: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D3800u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D3808u;
}
