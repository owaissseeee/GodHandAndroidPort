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

// Function: BlackJack_UpdateFiveCardWin
// Address: 0x1d3fa0 - 0x1d4258
void BlackJack_UpdateFiveCardWin_0x1d3fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BlackJack_UpdateFiveCardWin_0x1d3fa0");
#endif

    switch (ctx->pc) {
        case 0x1d4028u: goto label_1d4028;
        case 0x1d4034u: goto label_1d4034;
        case 0x1d4040u: goto label_1d4040;
        case 0x1d404cu: goto label_1d404c;
        case 0x1d4080u: goto label_1d4080;
        case 0x1d408cu: goto label_1d408c;
        case 0x1d413cu: goto label_1d413c;
        case 0x1d415cu: goto label_1d415c;
        case 0x1d4184u: goto label_1d4184;
        case 0x1d4198u: goto label_1d4198;
        case 0x1d41c0u: goto label_1d41c0;
        case 0x1d41ccu: goto label_1d41cc;
        case 0x1d41d8u: goto label_1d41d8;
        case 0x1d4200u: goto label_1d4200;
        default: break;
    }

    ctx->pc = 0x1d3fa0u;

    // 0x1d3fa0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d3fa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d3fa4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1d3fa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1d3fa8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d3fa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d3fac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d3facu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3fb0: 0x8e031808  lw          $v1, 0x1808($s0)
    ctx->pc = 0x1d3fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6152)));
    // 0x1d3fb4: 0x2c62000a  sltiu       $v0, $v1, 0xA
    ctx->pc = 0x1d3fb4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x1d3fb8: 0x104000a2  beqz        $v0, . + 4 + (0xA2 << 2)
    ctx->pc = 0x1D3FB8u;
    {
        const bool branch_taken_0x1d3fb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3FB8u;
        // 0x1d3fbc: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3fb8) {
            ctx->pc = 0x1D4244u;
            goto label_1d4244;
        }
    }
    ctx->pc = 0x1D3FC0u;
    // 0x1d3fc0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d3fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1d3fc4: 0x2442b0f0  addiu       $v0, $v0, -0x4F10
    ctx->pc = 0x1d3fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947056));
    // 0x1d3fc8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1d3fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1d3fcc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1d3fccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d3fd0: 0x800008  jr          $a0
    ctx->pc = 0x1D3FD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D3FD8u: goto label_1d3fd8;
            case 0x1D4010u: goto label_1d4010;
            case 0x1D405Cu: goto label_1d405c;
            case 0x1D409Cu: goto label_1d409c;
            case 0x1D40B8u: goto label_1d40b8;
            case 0x1D4108u: goto label_1d4108;
            case 0x1D41A0u: goto label_1d41a0;
            case 0x1D41E8u: goto label_1d41e8;
            case 0x1D4210u: goto label_1d4210;
            case 0x1D4238u: goto label_1d4238;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D3FD0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1D3FD8u;
label_1d3fd8:
    // 0x1d3fd8: 0xc6001814  lwc1        $f0, 0x1814($s0)
    ctx->pc = 0x1d3fd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 6164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d3fdc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d3fdcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1d3fe0: 0x3c0140c0  lui         $at, 0x40C0
    ctx->pc = 0x1d3fe0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16576 << 16));
    // 0x1d3fe4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1d3fe4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d3fe8: 0x8e031808  lw          $v1, 0x1808($s0)
    ctx->pc = 0x1d3fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6152)));
    // 0x1d3fec: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x1d3fecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1d3ff0: 0xae02180c  sw          $v0, 0x180C($s0)
    ctx->pc = 0x1d3ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6156), GPR_U32(ctx, 2));
    // 0x1d3ff4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1d3ff4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1d3ff8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d3ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d3ffc: 0xae031808  sw          $v1, 0x1808($s0)
    ctx->pc = 0x1d3ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6152), GPR_U32(ctx, 3));
    // 0x1d4000: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1d4000u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1d4004: 0xe6011818  swc1        $f1, 0x1818($s0)
    ctx->pc = 0x1d4004u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 6168), bits); }
    // 0x1d4008: 0x1000008f  b           . + 4 + (0x8F << 2)
    ctx->pc = 0x1D4008u;
    {
        const bool branch_taken_0x1d4008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D400Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4008u;
        // 0x1d400c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4008) {
            ctx->pc = 0x1D4248u;
            goto label_1d4248;
        }
    }
    ctx->pc = 0x1D4010u;
label_1d4010:
    // 0x1d4010: 0x8e02180c  lw          $v0, 0x180C($s0)
    ctx->pc = 0x1d4010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6156)));
    // 0x1d4014: 0x14400086  bnez        $v0, . + 4 + (0x86 << 2)
    ctx->pc = 0x1D4014u;
    {
        const bool branch_taken_0x1d4014 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D4018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4014u;
        // 0x1d4018: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4014) {
            ctx->pc = 0x1D4230u;
            goto label_1d4230;
        }
    }
    ctx->pc = 0x1D401Cu;
    // 0x1d401c: 0x8e051818  lw          $a1, 0x1818($s0)
    ctx->pc = 0x1d401cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6168)));
    // 0x1d4020: 0xc0755d8  jal         func_1D5760
    ctx->pc = 0x1D4020u;
    SET_GPR_U32(ctx, 31, 0x1D4028u);
    ctx->pc = 0x1D4024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4020u;
    // 0x1d4024: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5760u, 0x1D4020u, 0x1D4028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4028u;
label_1d4028:
    // 0x1d4028: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d4028u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d402c: 0xc075b48  jal         func_1D6D20
    ctx->pc = 0x1D402Cu;
    SET_GPR_U32(ctx, 31, 0x1D4034u);
    ctx->pc = 0x1D4030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D402Cu;
    // 0x1d4030: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6D20u, 0x1D402Cu, 0x1D4034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4034u;
label_1d4034:
    // 0x1d4034: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d4034u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4038: 0xc075b5a  jal         func_1D6D68
    ctx->pc = 0x1D4038u;
    SET_GPR_U32(ctx, 31, 0x1D4040u);
    ctx->pc = 0x1D403Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4038u;
    // 0x1d403c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6D68u, 0x1D4038u, 0x1D4040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4040u;
label_1d4040:
    // 0x1d4040: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d4040u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4044: 0xc075a9c  jal         func_1D6A70
    ctx->pc = 0x1D4044u;
    SET_GPR_U32(ctx, 31, 0x1D404Cu);
    ctx->pc = 0x1D4048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4044u;
    // 0x1d4048: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6A70u, 0x1D4044u, 0x1D404Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D404Cu;
label_1d404c:
    // 0x1d404c: 0x8e021808  lw          $v0, 0x1808($s0)
    ctx->pc = 0x1d404cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6152)));
    // 0x1d4050: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x1d4050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1d4054: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x1D4054u;
    {
        const bool branch_taken_0x1d4054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4054u;
        // 0x1d4058: 0xae03180c  sw          $v1, 0x180C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 6156), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4054) {
            ctx->pc = 0x1D4220u;
            goto label_1d4220;
        }
    }
    ctx->pc = 0x1D405Cu;
label_1d405c:
    // 0x1d405c: 0x8e02180c  lw          $v0, 0x180C($s0)
    ctx->pc = 0x1d405cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6156)));
    // 0x1d4060: 0x14400073  bnez        $v0, . + 4 + (0x73 << 2)
    ctx->pc = 0x1D4060u;
    {
        const bool branch_taken_0x1d4060 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D4064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4060u;
        // 0x1d4064: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4060) {
            ctx->pc = 0x1D4230u;
            goto label_1d4230;
        }
    }
    ctx->pc = 0x1D4068u;
    // 0x1d4068: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1d4068u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1d406c: 0x24050029  addiu       $a1, $zero, 0x29
    ctx->pc = 0x1d406cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x1d4070: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1d4070u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1d4074: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d4074u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4078: 0xc0b4584  jal         func_2D1610
    ctx->pc = 0x1D4078u;
    SET_GPR_U32(ctx, 31, 0x1D4080u);
    ctx->pc = 0x1D407Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4078u;
    // 0x1d407c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1610u, 0x1D4078u, 0x1D4080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4080u;
label_1d4080:
    // 0x1d4080: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d4080u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4084: 0xc075a14  jal         func_1D6850
    ctx->pc = 0x1D4084u;
    SET_GPR_U32(ctx, 31, 0x1D408Cu);
    ctx->pc = 0x1D4088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4084u;
    // 0x1d4088: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6850u, 0x1D4084u, 0x1D408Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D408Cu;
label_1d408c:
    // 0x1d408c: 0x8e021808  lw          $v0, 0x1808($s0)
    ctx->pc = 0x1d408cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6152)));
    // 0x1d4090: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x1d4090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1d4094: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x1D4094u;
    {
        const bool branch_taken_0x1d4094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4094u;
        // 0x1d4098: 0xae03180c  sw          $v1, 0x180C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 6156), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4094) {
            ctx->pc = 0x1D4220u;
            goto label_1d4220;
        }
    }
    ctx->pc = 0x1D409Cu;
label_1d409c:
    // 0x1d409c: 0x8e02180c  lw          $v0, 0x180C($s0)
    ctx->pc = 0x1d409cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6156)));
    // 0x1d40a0: 0x14400063  bnez        $v0, . + 4 + (0x63 << 2)
    ctx->pc = 0x1D40A0u;
    {
        const bool branch_taken_0x1d40a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D40A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D40A0u;
        // 0x1d40a4: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d40a0) {
            ctx->pc = 0x1D4230u;
            goto label_1d4230;
        }
    }
    ctx->pc = 0x1D40A8u;
    // 0x1d40a8: 0x8e021808  lw          $v0, 0x1808($s0)
    ctx->pc = 0x1d40a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6152)));
    // 0x1d40ac: 0x2403012c  addiu       $v1, $zero, 0x12C
    ctx->pc = 0x1d40acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x1d40b0: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x1D40B0u;
    {
        const bool branch_taken_0x1d40b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D40B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D40B0u;
        // 0x1d40b4: 0xae03180c  sw          $v1, 0x180C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 6156), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d40b0) {
            ctx->pc = 0x1D4220u;
            goto label_1d4220;
        }
    }
    ctx->pc = 0x1D40B8u;
label_1d40b8:
    // 0x1d40b8: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x1d40b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x1d40bc: 0x3c043000  lui         $a0, 0x3000
    ctx->pc = 0x1d40bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)12288 << 16));
    // 0x1d40c0: 0xdc437640  ld          $v1, 0x7640($v0)
    ctx->pc = 0x1d40c0u;
    SET_GPR_U64(ctx, 3, FAST_READ64(0x747640u));
    // 0x1d40c4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1d40c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1d40c8: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D40C8u;
    {
        const bool branch_taken_0x1d40c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d40c8) {
            ctx->pc = 0x1D40CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D40C8u;
            // 0x1d40cc: 0x8e041818  lw          $a0, 0x1818($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6168)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D40E0u;
            goto label_1d40e0;
        }
    }
    ctx->pc = 0x1D40D0u;
    // 0x1d40d0: 0x8e02180c  lw          $v0, 0x180C($s0)
    ctx->pc = 0x1d40d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6156)));
    // 0x1d40d4: 0x14400056  bnez        $v0, . + 4 + (0x56 << 2)
    ctx->pc = 0x1D40D4u;
    {
        const bool branch_taken_0x1d40d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D40D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D40D4u;
        // 0x1d40d8: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d40d4) {
            ctx->pc = 0x1D4230u;
            goto label_1d4230;
        }
    }
    ctx->pc = 0x1D40DCu;
    // 0x1d40dc: 0x8e041818  lw          $a0, 0x1818($s0)
    ctx->pc = 0x1d40dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6168)));
label_1d40e0:
    // 0x1d40e0: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1d40e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1d40e4: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1D40E4u;
    {
        const bool branch_taken_0x1d40e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d40e4) {
            ctx->pc = 0x1D40E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D40E4u;
            // 0x1d40e8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D40ECu;
            goto label_1d40ec;
        }
    }
    ctx->pc = 0x1D40ECu;
label_1d40ec:
    // 0x1d40ec: 0x82001a  div         $zero, $a0, $v0
    ctx->pc = 0x1d40ecu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1d40f0: 0x8e031808  lw          $v1, 0x1808($s0)
    ctx->pc = 0x1d40f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6152)));
    // 0x1d40f4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d40f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d40f8: 0xae031808  sw          $v1, 0x1808($s0)
    ctx->pc = 0x1d40f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6152), GPR_U32(ctx, 3));
    // 0x1d40fc: 0x2012  mflo        $a0
    ctx->pc = 0x1d40fcu;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x1d4100: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x1D4100u;
    {
        const bool branch_taken_0x1d4100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4100u;
        // 0x1d4104: 0xae04180c  sw          $a0, 0x180C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 6156), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4100) {
            ctx->pc = 0x1D4244u;
            goto label_1d4244;
        }
    }
    ctx->pc = 0x1D4108u;
label_1d4108:
    // 0x1d4108: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x1d4108u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x1d410c: 0x3c043000  lui         $a0, 0x3000
    ctx->pc = 0x1d410cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)12288 << 16));
    // 0x1d4110: 0xdc437640  ld          $v1, 0x7640($v0)
    ctx->pc = 0x1d4110u;
    SET_GPR_U64(ctx, 3, FAST_READ64(0x747640u));
    // 0x1d4114: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1d4114u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1d4118: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D4118u;
    {
        const bool branch_taken_0x1d4118 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d4118) {
            ctx->pc = 0x1D411Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D4118u;
            // 0x1d411c: 0xae001818  sw          $zero, 0x1818($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 6168), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D4130u;
            goto label_1d4130;
        }
    }
    ctx->pc = 0x1D4120u;
    // 0x1d4120: 0x8e02180c  lw          $v0, 0x180C($s0)
    ctx->pc = 0x1d4120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6156)));
    // 0x1d4124: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x1D4124u;
    {
        const bool branch_taken_0x1d4124 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d4124) {
            ctx->pc = 0x1D4128u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D4124u;
            // 0x1d4128: 0x8e021818  lw          $v0, 0x1818($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6168)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D416Cu;
            goto label_1d416c;
        }
    }
    ctx->pc = 0x1D412Cu;
    // 0x1d412c: 0xae001818  sw          $zero, 0x1818($s0)
    ctx->pc = 0x1d412cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6168), GPR_U32(ctx, 0));
label_1d4130:
    // 0x1d4130: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d4130u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4134: 0xc0755d8  jal         func_1D5760
    ctx->pc = 0x1D4134u;
    SET_GPR_U32(ctx, 31, 0x1D413Cu);
    ctx->pc = 0x1D4138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4134u;
    // 0x1d4138: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5760u, 0x1D4134u, 0x1D413Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D413Cu;
label_1d413c:
    // 0x1d413c: 0x8e02180c  lw          $v0, 0x180C($s0)
    ctx->pc = 0x1d413cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6156)));
    // 0x1d4140: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1d4140u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1d4144: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x1d4144u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x1d4148: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d4148u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d414c: 0x450018  mult        $zero, $v0, $a1
    ctx->pc = 0x1d414cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1d4150: 0x2812  mflo        $a1
    ctx->pc = 0x1d4150u;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x1d4154: 0xc07e9d4  jal         func_1FA750
    ctx->pc = 0x1D4154u;
    SET_GPR_U32(ctx, 31, 0x1D415Cu);
    ctx->pc = 0x1D4158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4154u;
    // 0x1d4158: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA750u, 0x1D4154u, 0x1D415Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D415Cu;
label_1d415c:
    // 0x1d415c: 0x8e021808  lw          $v0, 0x1808($s0)
    ctx->pc = 0x1d415cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6152)));
    // 0x1d4160: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x1d4160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1d4164: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x1D4164u;
    {
        const bool branch_taken_0x1d4164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4164u;
        // 0x1d4168: 0xae03180c  sw          $v1, 0x180C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 6156), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4164) {
            ctx->pc = 0x1D4220u;
            goto label_1d4220;
        }
    }
    ctx->pc = 0x1D416Cu;
label_1d416c:
    // 0x1d416c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D416Cu;
    {
        const bool branch_taken_0x1d416c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D416Cu;
        // 0x1d4170: 0x2442fff6  addiu       $v0, $v0, -0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967286));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d416c) {
            ctx->pc = 0x1D4184u;
            goto label_1d4184;
        }
    }
    ctx->pc = 0x1D4174u;
    // 0x1d4174: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d4174u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4178: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d4178u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d417c: 0xc0755d8  jal         func_1D5760
    ctx->pc = 0x1D417Cu;
    SET_GPR_U32(ctx, 31, 0x1D4184u);
    ctx->pc = 0x1D4180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D417Cu;
    // 0x1d4180: 0xae021818  sw          $v0, 0x1818($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 6168), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5760u, 0x1D417Cu, 0x1D4184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4184u;
label_1d4184:
    // 0x1d4184: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x1d4184u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x1d4188: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1d4188u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1d418c: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x1d418cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    // 0x1d4190: 0xc07e9d4  jal         func_1FA750
    ctx->pc = 0x1D4190u;
    SET_GPR_U32(ctx, 31, 0x1D4198u);
    ctx->pc = 0x1D4194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4190u;
    // 0x1d4194: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA750u, 0x1D4190u, 0x1D4198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4198u;
label_1d4198:
    // 0x1d4198: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x1D4198u;
    {
        const bool branch_taken_0x1d4198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D419Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4198u;
        // 0x1d419c: 0x8e02180c  lw          $v0, 0x180C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6156)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4198) {
            ctx->pc = 0x1D422Cu;
            goto label_1d422c;
        }
    }
    ctx->pc = 0x1D41A0u;
label_1d41a0:
    // 0x1d41a0: 0x8e02180c  lw          $v0, 0x180C($s0)
    ctx->pc = 0x1d41a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6156)));
    // 0x1d41a4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D41A4u;
    {
        const bool branch_taken_0x1d41a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D41A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D41A4u;
        // 0x1d41a8: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d41a4) {
            ctx->pc = 0x1D41B4u;
            goto label_1d41b4;
        }
    }
    ctx->pc = 0x1D41ACu;
    // 0x1d41ac: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x1D41ACu;
    {
        const bool branch_taken_0x1d41ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D41B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D41ACu;
        // 0x1d41b0: 0xae02180c  sw          $v0, 0x180C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 6156), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d41ac) {
            ctx->pc = 0x1D4244u;
            goto label_1d4244;
        }
    }
    ctx->pc = 0x1D41B4u;
label_1d41b4:
    // 0x1d41b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d41b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d41b8: 0xc075278  jal         func_1D49E0
    ctx->pc = 0x1D41B8u;
    SET_GPR_U32(ctx, 31, 0x1D41C0u);
    ctx->pc = 0x1D41BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D41B8u;
    // 0x1d41bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D49E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D49E0u, 0x1D41B8u, 0x1D41C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D41C0u;
label_1d41c0:
    // 0x1d41c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d41c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d41c4: 0xc0752aa  jal         func_1D4AA8
    ctx->pc = 0x1D41C4u;
    SET_GPR_U32(ctx, 31, 0x1D41CCu);
    ctx->pc = 0x1D41C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D41C4u;
    // 0x1d41c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4AA8u, 0x1D41C4u, 0x1D41CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D41CCu;
label_1d41cc:
    // 0x1d41cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d41ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d41d0: 0xc075a14  jal         func_1D6850
    ctx->pc = 0x1D41D0u;
    SET_GPR_U32(ctx, 31, 0x1D41D8u);
    ctx->pc = 0x1D41D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D41D0u;
    // 0x1d41d4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6850u, 0x1D41D0u, 0x1D41D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D41D8u;
label_1d41d8:
    // 0x1d41d8: 0x8e021808  lw          $v0, 0x1808($s0)
    ctx->pc = 0x1d41d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6152)));
    // 0x1d41dc: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x1d41dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1d41e0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1D41E0u;
    {
        const bool branch_taken_0x1d41e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D41E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D41E0u;
        // 0x1d41e4: 0xae03180c  sw          $v1, 0x180C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 6156), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d41e0) {
            ctx->pc = 0x1D4220u;
            goto label_1d4220;
        }
    }
    ctx->pc = 0x1D41E8u;
label_1d41e8:
    // 0x1d41e8: 0x8e02180c  lw          $v0, 0x180C($s0)
    ctx->pc = 0x1d41e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6156)));
    // 0x1d41ec: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1D41ECu;
    {
        const bool branch_taken_0x1d41ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D41F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D41ECu;
        // 0x1d41f0: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d41ec) {
            ctx->pc = 0x1D4230u;
            goto label_1d4230;
        }
    }
    ctx->pc = 0x1D41F4u;
    // 0x1d41f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d41f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d41f8: 0xc075a9c  jal         func_1D6A70
    ctx->pc = 0x1D41F8u;
    SET_GPR_U32(ctx, 31, 0x1D4200u);
    ctx->pc = 0x1D41FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D41F8u;
    // 0x1d41fc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6A70u, 0x1D41F8u, 0x1D4200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4200u;
label_1d4200:
    // 0x1d4200: 0x8e021808  lw          $v0, 0x1808($s0)
    ctx->pc = 0x1d4200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6152)));
    // 0x1d4204: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x1d4204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1d4208: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1D4208u;
    {
        const bool branch_taken_0x1d4208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D420Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4208u;
        // 0x1d420c: 0xae03180c  sw          $v1, 0x180C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 6156), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4208) {
            ctx->pc = 0x1D4220u;
            goto label_1d4220;
        }
    }
    ctx->pc = 0x1D4210u;
label_1d4210:
    // 0x1d4210: 0x8e02180c  lw          $v0, 0x180C($s0)
    ctx->pc = 0x1d4210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6156)));
    // 0x1d4214: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D4214u;
    {
        const bool branch_taken_0x1d4214 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D4218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4214u;
        // 0x1d4218: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4214) {
            ctx->pc = 0x1D4230u;
            goto label_1d4230;
        }
    }
    ctx->pc = 0x1D421Cu;
    // 0x1d421c: 0x8e021808  lw          $v0, 0x1808($s0)
    ctx->pc = 0x1d421cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6152)));
label_1d4220:
    // 0x1d4220: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d4220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d4224: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1D4224u;
    {
        const bool branch_taken_0x1d4224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4224u;
        // 0x1d4228: 0xae021808  sw          $v0, 0x1808($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 6152), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4224) {
            ctx->pc = 0x1D4244u;
            goto label_1d4244;
        }
    }
    ctx->pc = 0x1D422Cu;
label_1d422c:
    // 0x1d422c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1d422cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1d4230:
    // 0x1d4230: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D4230u;
    {
        const bool branch_taken_0x1d4230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4230u;
        // 0x1d4234: 0xae02180c  sw          $v0, 0x180C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 6156), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4230) {
            ctx->pc = 0x1D4244u;
            goto label_1d4244;
        }
    }
    ctx->pc = 0x1D4238u;
label_1d4238:
    // 0x1d4238: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x1d4238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x1d423c: 0xae001808  sw          $zero, 0x1808($s0)
    ctx->pc = 0x1d423cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6152), GPR_U32(ctx, 0));
    // 0x1d4240: 0xae021804  sw          $v0, 0x1804($s0)
    ctx->pc = 0x1d4240u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6148), GPR_U32(ctx, 2));
label_1d4244:
    // 0x1d4244: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1d4244u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1d4248:
    // 0x1d4248: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d4248u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d424c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D424Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D4250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D424Cu;
        // 0x1d4250: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D424Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D4254u;
    // 0x1d4254: 0x0  nop
    ctx->pc = 0x1d4254u;
    // NOP
    ctx->pc = 0x1d4258u;
}
