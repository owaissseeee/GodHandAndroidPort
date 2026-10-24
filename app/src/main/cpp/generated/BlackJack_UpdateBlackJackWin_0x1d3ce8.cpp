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

// Function: BlackJack_UpdateBlackJackWin
// Address: 0x1d3ce8 - 0x1d3fa0
void BlackJack_UpdateBlackJackWin_0x1d3ce8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BlackJack_UpdateBlackJackWin_0x1d3ce8");
#endif

    switch (ctx->pc) {
        case 0x1d3d70u: goto label_1d3d70;
        case 0x1d3d7cu: goto label_1d3d7c;
        case 0x1d3d88u: goto label_1d3d88;
        case 0x1d3d94u: goto label_1d3d94;
        case 0x1d3dc8u: goto label_1d3dc8;
        case 0x1d3dd4u: goto label_1d3dd4;
        case 0x1d3e84u: goto label_1d3e84;
        case 0x1d3ea4u: goto label_1d3ea4;
        case 0x1d3eccu: goto label_1d3ecc;
        case 0x1d3ee0u: goto label_1d3ee0;
        case 0x1d3f08u: goto label_1d3f08;
        case 0x1d3f14u: goto label_1d3f14;
        case 0x1d3f20u: goto label_1d3f20;
        case 0x1d3f48u: goto label_1d3f48;
        default: break;
    }

    ctx->pc = 0x1d3ce8u;

    // 0x1d3ce8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d3ce8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d3cec: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1d3cecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1d3cf0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d3cf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d3cf4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d3cf4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3cf8: 0x8e031808  lw          $v1, 0x1808($s0)
    ctx->pc = 0x1d3cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6152)));
    // 0x1d3cfc: 0x2c62000a  sltiu       $v0, $v1, 0xA
    ctx->pc = 0x1d3cfcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x1d3d00: 0x104000a2  beqz        $v0, . + 4 + (0xA2 << 2)
    ctx->pc = 0x1D3D00u;
    {
        const bool branch_taken_0x1d3d00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3D00u;
        // 0x1d3d04: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3d00) {
            ctx->pc = 0x1D3F8Cu;
            goto label_1d3f8c;
        }
    }
    ctx->pc = 0x1D3D08u;
    // 0x1d3d08: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d3d08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1d3d0c: 0x2442b0c0  addiu       $v0, $v0, -0x4F40
    ctx->pc = 0x1d3d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947008));
    // 0x1d3d10: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1d3d10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1d3d14: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1d3d14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d3d18: 0x800008  jr          $a0
    ctx->pc = 0x1D3D18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D3D20u: goto label_1d3d20;
            case 0x1D3D58u: goto label_1d3d58;
            case 0x1D3DA4u: goto label_1d3da4;
            case 0x1D3DE4u: goto label_1d3de4;
            case 0x1D3E00u: goto label_1d3e00;
            case 0x1D3E50u: goto label_1d3e50;
            case 0x1D3EE8u: goto label_1d3ee8;
            case 0x1D3F30u: goto label_1d3f30;
            case 0x1D3F58u: goto label_1d3f58;
            case 0x1D3F80u: goto label_1d3f80;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D3D18u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1D3D20u;
label_1d3d20:
    // 0x1d3d20: 0xc6001814  lwc1        $f0, 0x1814($s0)
    ctx->pc = 0x1d3d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 6164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d3d24: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d3d24u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1d3d28: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x1d3d28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x1d3d2c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1d3d2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d3d30: 0x8e031808  lw          $v1, 0x1808($s0)
    ctx->pc = 0x1d3d30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6152)));
    // 0x1d3d34: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x1d3d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1d3d38: 0xae02180c  sw          $v0, 0x180C($s0)
    ctx->pc = 0x1d3d38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6156), GPR_U32(ctx, 2));
    // 0x1d3d3c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1d3d3cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1d3d40: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d3d40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d3d44: 0xae031808  sw          $v1, 0x1808($s0)
    ctx->pc = 0x1d3d44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6152), GPR_U32(ctx, 3));
    // 0x1d3d48: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1d3d48u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1d3d4c: 0xe6011818  swc1        $f1, 0x1818($s0)
    ctx->pc = 0x1d3d4cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 6168), bits); }
    // 0x1d3d50: 0x1000008f  b           . + 4 + (0x8F << 2)
    ctx->pc = 0x1D3D50u;
    {
        const bool branch_taken_0x1d3d50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3D50u;
        // 0x1d3d54: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3d50) {
            ctx->pc = 0x1D3F90u;
            goto label_1d3f90;
        }
    }
    ctx->pc = 0x1D3D58u;
label_1d3d58:
    // 0x1d3d58: 0x8e02180c  lw          $v0, 0x180C($s0)
    ctx->pc = 0x1d3d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6156)));
    // 0x1d3d5c: 0x14400086  bnez        $v0, . + 4 + (0x86 << 2)
    ctx->pc = 0x1D3D5Cu;
    {
        const bool branch_taken_0x1d3d5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D3D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3D5Cu;
        // 0x1d3d60: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3d5c) {
            ctx->pc = 0x1D3F78u;
            goto label_1d3f78;
        }
    }
    ctx->pc = 0x1D3D64u;
    // 0x1d3d64: 0x8e051818  lw          $a1, 0x1818($s0)
    ctx->pc = 0x1d3d64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6168)));
    // 0x1d3d68: 0xc0755d8  jal         func_1D5760
    ctx->pc = 0x1D3D68u;
    SET_GPR_U32(ctx, 31, 0x1D3D70u);
    ctx->pc = 0x1D3D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3D68u;
    // 0x1d3d6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5760u, 0x1D3D68u, 0x1D3D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3D70u;
label_1d3d70:
    // 0x1d3d70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d3d70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3d74: 0xc075b48  jal         func_1D6D20
    ctx->pc = 0x1D3D74u;
    SET_GPR_U32(ctx, 31, 0x1D3D7Cu);
    ctx->pc = 0x1D3D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3D74u;
    // 0x1d3d78: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6D20u, 0x1D3D74u, 0x1D3D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3D7Cu;
label_1d3d7c:
    // 0x1d3d7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d3d7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3d80: 0xc075b5a  jal         func_1D6D68
    ctx->pc = 0x1D3D80u;
    SET_GPR_U32(ctx, 31, 0x1D3D88u);
    ctx->pc = 0x1D3D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3D80u;
    // 0x1d3d84: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6D68u, 0x1D3D80u, 0x1D3D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3D88u;
label_1d3d88:
    // 0x1d3d88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d3d88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3d8c: 0xc075a9c  jal         func_1D6A70
    ctx->pc = 0x1D3D8Cu;
    SET_GPR_U32(ctx, 31, 0x1D3D94u);
    ctx->pc = 0x1D3D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3D8Cu;
    // 0x1d3d90: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6A70u, 0x1D3D8Cu, 0x1D3D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3D94u;
label_1d3d94:
    // 0x1d3d94: 0x8e021808  lw          $v0, 0x1808($s0)
    ctx->pc = 0x1d3d94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6152)));
    // 0x1d3d98: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x1d3d98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1d3d9c: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x1D3D9Cu;
    {
        const bool branch_taken_0x1d3d9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3D9Cu;
        // 0x1d3da0: 0xae03180c  sw          $v1, 0x180C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 6156), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3d9c) {
            ctx->pc = 0x1D3F68u;
            goto label_1d3f68;
        }
    }
    ctx->pc = 0x1D3DA4u;
label_1d3da4:
    // 0x1d3da4: 0x8e02180c  lw          $v0, 0x180C($s0)
    ctx->pc = 0x1d3da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6156)));
    // 0x1d3da8: 0x14400073  bnez        $v0, . + 4 + (0x73 << 2)
    ctx->pc = 0x1D3DA8u;
    {
        const bool branch_taken_0x1d3da8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D3DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3DA8u;
        // 0x1d3dac: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3da8) {
            ctx->pc = 0x1D3F78u;
            goto label_1d3f78;
        }
    }
    ctx->pc = 0x1D3DB0u;
    // 0x1d3db0: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1d3db0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1d3db4: 0x24050029  addiu       $a1, $zero, 0x29
    ctx->pc = 0x1d3db4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x1d3db8: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1d3db8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1d3dbc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d3dbcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3dc0: 0xc0b4584  jal         func_2D1610
    ctx->pc = 0x1D3DC0u;
    SET_GPR_U32(ctx, 31, 0x1D3DC8u);
    ctx->pc = 0x1D3DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3DC0u;
    // 0x1d3dc4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1610u, 0x1D3DC0u, 0x1D3DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3DC8u;
label_1d3dc8:
    // 0x1d3dc8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d3dc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3dcc: 0xc0759c0  jal         func_1D6700
    ctx->pc = 0x1D3DCCu;
    SET_GPR_U32(ctx, 31, 0x1D3DD4u);
    ctx->pc = 0x1D3DD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3DCCu;
    // 0x1d3dd0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6700u, 0x1D3DCCu, 0x1D3DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3DD4u;
label_1d3dd4:
    // 0x1d3dd4: 0x8e021808  lw          $v0, 0x1808($s0)
    ctx->pc = 0x1d3dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6152)));
    // 0x1d3dd8: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x1d3dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1d3ddc: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x1D3DDCu;
    {
        const bool branch_taken_0x1d3ddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3DDCu;
        // 0x1d3de0: 0xae03180c  sw          $v1, 0x180C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 6156), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3ddc) {
            ctx->pc = 0x1D3F68u;
            goto label_1d3f68;
        }
    }
    ctx->pc = 0x1D3DE4u;
label_1d3de4:
    // 0x1d3de4: 0x8e02180c  lw          $v0, 0x180C($s0)
    ctx->pc = 0x1d3de4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6156)));
    // 0x1d3de8: 0x14400063  bnez        $v0, . + 4 + (0x63 << 2)
    ctx->pc = 0x1D3DE8u;
    {
        const bool branch_taken_0x1d3de8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D3DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3DE8u;
        // 0x1d3dec: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3de8) {
            ctx->pc = 0x1D3F78u;
            goto label_1d3f78;
        }
    }
    ctx->pc = 0x1D3DF0u;
    // 0x1d3df0: 0x8e021808  lw          $v0, 0x1808($s0)
    ctx->pc = 0x1d3df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6152)));
    // 0x1d3df4: 0x2403012c  addiu       $v1, $zero, 0x12C
    ctx->pc = 0x1d3df4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x1d3df8: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x1D3DF8u;
    {
        const bool branch_taken_0x1d3df8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3DF8u;
        // 0x1d3dfc: 0xae03180c  sw          $v1, 0x180C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 6156), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3df8) {
            ctx->pc = 0x1D3F68u;
            goto label_1d3f68;
        }
    }
    ctx->pc = 0x1D3E00u;
label_1d3e00:
    // 0x1d3e00: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x1d3e00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x1d3e04: 0x3c043000  lui         $a0, 0x3000
    ctx->pc = 0x1d3e04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)12288 << 16));
    // 0x1d3e08: 0xdc437640  ld          $v1, 0x7640($v0)
    ctx->pc = 0x1d3e08u;
    SET_GPR_U64(ctx, 3, FAST_READ64(0x747640u));
    // 0x1d3e0c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1d3e0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1d3e10: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D3E10u;
    {
        const bool branch_taken_0x1d3e10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d3e10) {
            ctx->pc = 0x1D3E14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D3E10u;
            // 0x1d3e14: 0x8e041818  lw          $a0, 0x1818($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6168)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D3E28u;
            goto label_1d3e28;
        }
    }
    ctx->pc = 0x1D3E18u;
    // 0x1d3e18: 0x8e02180c  lw          $v0, 0x180C($s0)
    ctx->pc = 0x1d3e18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6156)));
    // 0x1d3e1c: 0x14400056  bnez        $v0, . + 4 + (0x56 << 2)
    ctx->pc = 0x1D3E1Cu;
    {
        const bool branch_taken_0x1d3e1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D3E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3E1Cu;
        // 0x1d3e20: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3e1c) {
            ctx->pc = 0x1D3F78u;
            goto label_1d3f78;
        }
    }
    ctx->pc = 0x1D3E24u;
    // 0x1d3e24: 0x8e041818  lw          $a0, 0x1818($s0)
    ctx->pc = 0x1d3e24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6168)));
label_1d3e28:
    // 0x1d3e28: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1d3e28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1d3e2c: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1D3E2Cu;
    {
        const bool branch_taken_0x1d3e2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d3e2c) {
            ctx->pc = 0x1D3E30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D3E2Cu;
            // 0x1d3e30: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D3E34u;
            goto label_1d3e34;
        }
    }
    ctx->pc = 0x1D3E34u;
label_1d3e34:
    // 0x1d3e34: 0x82001a  div         $zero, $a0, $v0
    ctx->pc = 0x1d3e34u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1d3e38: 0x8e031808  lw          $v1, 0x1808($s0)
    ctx->pc = 0x1d3e38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6152)));
    // 0x1d3e3c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d3e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d3e40: 0xae031808  sw          $v1, 0x1808($s0)
    ctx->pc = 0x1d3e40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6152), GPR_U32(ctx, 3));
    // 0x1d3e44: 0x2012  mflo        $a0
    ctx->pc = 0x1d3e44u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x1d3e48: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x1D3E48u;
    {
        const bool branch_taken_0x1d3e48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3E48u;
        // 0x1d3e4c: 0xae04180c  sw          $a0, 0x180C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 6156), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3e48) {
            ctx->pc = 0x1D3F8Cu;
            goto label_1d3f8c;
        }
    }
    ctx->pc = 0x1D3E50u;
label_1d3e50:
    // 0x1d3e50: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x1d3e50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x1d3e54: 0x3c043000  lui         $a0, 0x3000
    ctx->pc = 0x1d3e54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)12288 << 16));
    // 0x1d3e58: 0xdc437640  ld          $v1, 0x7640($v0)
    ctx->pc = 0x1d3e58u;
    SET_GPR_U64(ctx, 3, FAST_READ64(0x747640u));
    // 0x1d3e5c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1d3e5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1d3e60: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D3E60u;
    {
        const bool branch_taken_0x1d3e60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d3e60) {
            ctx->pc = 0x1D3E64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D3E60u;
            // 0x1d3e64: 0xae001818  sw          $zero, 0x1818($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 6168), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D3E78u;
            goto label_1d3e78;
        }
    }
    ctx->pc = 0x1D3E68u;
    // 0x1d3e68: 0x8e02180c  lw          $v0, 0x180C($s0)
    ctx->pc = 0x1d3e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6156)));
    // 0x1d3e6c: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x1D3E6Cu;
    {
        const bool branch_taken_0x1d3e6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d3e6c) {
            ctx->pc = 0x1D3E70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D3E6Cu;
            // 0x1d3e70: 0x8e021818  lw          $v0, 0x1818($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6168)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D3EB4u;
            goto label_1d3eb4;
        }
    }
    ctx->pc = 0x1D3E74u;
    // 0x1d3e74: 0xae001818  sw          $zero, 0x1818($s0)
    ctx->pc = 0x1d3e74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6168), GPR_U32(ctx, 0));
label_1d3e78:
    // 0x1d3e78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d3e78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3e7c: 0xc0755d8  jal         func_1D5760
    ctx->pc = 0x1D3E7Cu;
    SET_GPR_U32(ctx, 31, 0x1D3E84u);
    ctx->pc = 0x1D3E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3E7Cu;
    // 0x1d3e80: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5760u, 0x1D3E7Cu, 0x1D3E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3E84u;
label_1d3e84:
    // 0x1d3e84: 0x8e02180c  lw          $v0, 0x180C($s0)
    ctx->pc = 0x1d3e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6156)));
    // 0x1d3e88: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1d3e88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1d3e8c: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x1d3e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x1d3e90: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d3e90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3e94: 0x450018  mult        $zero, $v0, $a1
    ctx->pc = 0x1d3e94u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1d3e98: 0x2812  mflo        $a1
    ctx->pc = 0x1d3e98u;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x1d3e9c: 0xc07e9d4  jal         func_1FA750
    ctx->pc = 0x1D3E9Cu;
    SET_GPR_U32(ctx, 31, 0x1D3EA4u);
    ctx->pc = 0x1D3EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3E9Cu;
    // 0x1d3ea0: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA750u, 0x1D3E9Cu, 0x1D3EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3EA4u;
label_1d3ea4:
    // 0x1d3ea4: 0x8e021808  lw          $v0, 0x1808($s0)
    ctx->pc = 0x1d3ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6152)));
    // 0x1d3ea8: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x1d3ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1d3eac: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x1D3EACu;
    {
        const bool branch_taken_0x1d3eac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3EACu;
        // 0x1d3eb0: 0xae03180c  sw          $v1, 0x180C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 6156), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3eac) {
            ctx->pc = 0x1D3F68u;
            goto label_1d3f68;
        }
    }
    ctx->pc = 0x1D3EB4u;
label_1d3eb4:
    // 0x1d3eb4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D3EB4u;
    {
        const bool branch_taken_0x1d3eb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3EB4u;
        // 0x1d3eb8: 0x2442fff6  addiu       $v0, $v0, -0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967286));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3eb4) {
            ctx->pc = 0x1D3ECCu;
            goto label_1d3ecc;
        }
    }
    ctx->pc = 0x1D3EBCu;
    // 0x1d3ebc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d3ebcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3ec0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d3ec0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3ec4: 0xc0755d8  jal         func_1D5760
    ctx->pc = 0x1D3EC4u;
    SET_GPR_U32(ctx, 31, 0x1D3ECCu);
    ctx->pc = 0x1D3EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3EC4u;
    // 0x1d3ec8: 0xae021818  sw          $v0, 0x1818($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 6168), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5760u, 0x1D3EC4u, 0x1D3ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3ECCu;
label_1d3ecc:
    // 0x1d3ecc: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x1d3eccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x1d3ed0: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1d3ed0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1d3ed4: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x1d3ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    // 0x1d3ed8: 0xc07e9d4  jal         func_1FA750
    ctx->pc = 0x1D3ED8u;
    SET_GPR_U32(ctx, 31, 0x1D3EE0u);
    ctx->pc = 0x1D3EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3ED8u;
    // 0x1d3edc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA750u, 0x1D3ED8u, 0x1D3EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3EE0u;
label_1d3ee0:
    // 0x1d3ee0: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x1D3EE0u;
    {
        const bool branch_taken_0x1d3ee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3EE0u;
        // 0x1d3ee4: 0x8e02180c  lw          $v0, 0x180C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6156)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3ee0) {
            ctx->pc = 0x1D3F74u;
            goto label_1d3f74;
        }
    }
    ctx->pc = 0x1D3EE8u;
label_1d3ee8:
    // 0x1d3ee8: 0x8e02180c  lw          $v0, 0x180C($s0)
    ctx->pc = 0x1d3ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6156)));
    // 0x1d3eec: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D3EECu;
    {
        const bool branch_taken_0x1d3eec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3EECu;
        // 0x1d3ef0: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3eec) {
            ctx->pc = 0x1D3EFCu;
            goto label_1d3efc;
        }
    }
    ctx->pc = 0x1D3EF4u;
    // 0x1d3ef4: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x1D3EF4u;
    {
        const bool branch_taken_0x1d3ef4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D3EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3EF4u;
        // 0x1d3ef8: 0xae02180c  sw          $v0, 0x180C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 6156), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3ef4) {
            ctx->pc = 0x1D3F8Cu;
            goto label_1d3f8c;
        }
    }
    ctx->pc = 0x1D3EFCu;
label_1d3efc:
    // 0x1d3efc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d3efcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3f00: 0xc075278  jal         func_1D49E0
    ctx->pc = 0x1D3F00u;
    SET_GPR_U32(ctx, 31, 0x1D3F08u);
    ctx->pc = 0x1D3F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3F00u;
    // 0x1d3f04: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D49E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D49E0u, 0x1D3F00u, 0x1D3F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3F08u;
label_1d3f08:
    // 0x1d3f08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d3f08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3f0c: 0xc0752aa  jal         func_1D4AA8
    ctx->pc = 0x1D3F0Cu;
    SET_GPR_U32(ctx, 31, 0x1D3F14u);
    ctx->pc = 0x1D3F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3F0Cu;
    // 0x1d3f10: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4AA8u, 0x1D3F0Cu, 0x1D3F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3F14u;
label_1d3f14:
    // 0x1d3f14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d3f14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3f18: 0xc0759c0  jal         func_1D6700
    ctx->pc = 0x1D3F18u;
    SET_GPR_U32(ctx, 31, 0x1D3F20u);
    ctx->pc = 0x1D3F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3F18u;
    // 0x1d3f1c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6700u, 0x1D3F18u, 0x1D3F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3F20u;
label_1d3f20:
    // 0x1d3f20: 0x8e021808  lw          $v0, 0x1808($s0)
    ctx->pc = 0x1d3f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6152)));
    // 0x1d3f24: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x1d3f24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1d3f28: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1D3F28u;
    {
        const bool branch_taken_0x1d3f28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3F28u;
        // 0x1d3f2c: 0xae03180c  sw          $v1, 0x180C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 6156), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3f28) {
            ctx->pc = 0x1D3F68u;
            goto label_1d3f68;
        }
    }
    ctx->pc = 0x1D3F30u;
label_1d3f30:
    // 0x1d3f30: 0x8e02180c  lw          $v0, 0x180C($s0)
    ctx->pc = 0x1d3f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6156)));
    // 0x1d3f34: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1D3F34u;
    {
        const bool branch_taken_0x1d3f34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D3F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3F34u;
        // 0x1d3f38: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3f34) {
            ctx->pc = 0x1D3F78u;
            goto label_1d3f78;
        }
    }
    ctx->pc = 0x1D3F3Cu;
    // 0x1d3f3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d3f3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3f40: 0xc075a9c  jal         func_1D6A70
    ctx->pc = 0x1D3F40u;
    SET_GPR_U32(ctx, 31, 0x1D3F48u);
    ctx->pc = 0x1D3F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3F40u;
    // 0x1d3f44: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6A70u, 0x1D3F40u, 0x1D3F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3F48u;
label_1d3f48:
    // 0x1d3f48: 0x8e021808  lw          $v0, 0x1808($s0)
    ctx->pc = 0x1d3f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6152)));
    // 0x1d3f4c: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x1d3f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1d3f50: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1D3F50u;
    {
        const bool branch_taken_0x1d3f50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3F50u;
        // 0x1d3f54: 0xae03180c  sw          $v1, 0x180C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 6156), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3f50) {
            ctx->pc = 0x1D3F68u;
            goto label_1d3f68;
        }
    }
    ctx->pc = 0x1D3F58u;
label_1d3f58:
    // 0x1d3f58: 0x8e02180c  lw          $v0, 0x180C($s0)
    ctx->pc = 0x1d3f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6156)));
    // 0x1d3f5c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D3F5Cu;
    {
        const bool branch_taken_0x1d3f5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D3F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3F5Cu;
        // 0x1d3f60: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3f5c) {
            ctx->pc = 0x1D3F78u;
            goto label_1d3f78;
        }
    }
    ctx->pc = 0x1D3F64u;
    // 0x1d3f64: 0x8e021808  lw          $v0, 0x1808($s0)
    ctx->pc = 0x1d3f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6152)));
label_1d3f68:
    // 0x1d3f68: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d3f68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d3f6c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1D3F6Cu;
    {
        const bool branch_taken_0x1d3f6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3F6Cu;
        // 0x1d3f70: 0xae021808  sw          $v0, 0x1808($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 6152), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3f6c) {
            ctx->pc = 0x1D3F8Cu;
            goto label_1d3f8c;
        }
    }
    ctx->pc = 0x1D3F74u;
label_1d3f74:
    // 0x1d3f74: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1d3f74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1d3f78:
    // 0x1d3f78: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D3F78u;
    {
        const bool branch_taken_0x1d3f78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3F78u;
        // 0x1d3f7c: 0xae02180c  sw          $v0, 0x180C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 6156), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3f78) {
            ctx->pc = 0x1D3F8Cu;
            goto label_1d3f8c;
        }
    }
    ctx->pc = 0x1D3F80u;
label_1d3f80:
    // 0x1d3f80: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x1d3f80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x1d3f84: 0xae001808  sw          $zero, 0x1808($s0)
    ctx->pc = 0x1d3f84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6152), GPR_U32(ctx, 0));
    // 0x1d3f88: 0xae021804  sw          $v0, 0x1804($s0)
    ctx->pc = 0x1d3f88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6148), GPR_U32(ctx, 2));
label_1d3f8c:
    // 0x1d3f8c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1d3f8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1d3f90:
    // 0x1d3f90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d3f90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d3f94: 0x3e00008  jr          $ra
    ctx->pc = 0x1D3F94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D3F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3F94u;
        // 0x1d3f98: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D3F94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D3F9Cu;
    // 0x1d3f9c: 0x0  nop
    ctx->pc = 0x1d3f9cu;
    // NOP
    ctx->pc = 0x1d3fa0u;
}
