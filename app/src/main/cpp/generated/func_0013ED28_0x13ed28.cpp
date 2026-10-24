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

// Function: func_0013ED28
// Address: 0x13ed28 - 0x13ee58
void func_0013ED28_0x13ed28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0013ED28_0x13ed28");
#endif

    switch (ctx->pc) {
        case 0x13ed44u: goto label_13ed44;
        case 0x13ed50u: goto label_13ed50;
        case 0x13ed5cu: goto label_13ed5c;
        case 0x13ed68u: goto label_13ed68;
        case 0x13ed70u: goto label_13ed70;
        case 0x13ed84u: goto label_13ed84;
        case 0x13ed94u: goto label_13ed94;
        case 0x13eda4u: goto label_13eda4;
        case 0x13edb4u: goto label_13edb4;
        case 0x13ede0u: goto label_13ede0;
        default: break;
    }

    ctx->pc = 0x13ed28u;

    // 0x13ed28: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x13ed28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x13ed2c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x13ed2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ed30: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x13ed30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x13ed34: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x13ed34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x13ed38: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x13ed38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x13ed3c: 0xc0aa8f6  jal         func_2AA3D8
    ctx->pc = 0x13ED3Cu;
    SET_GPR_U32(ctx, 31, 0x13ED44u);
    ctx->pc = 0x13ED40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13ED3Cu;
    // 0x13ed40: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA3D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA3D8u, 0x13ED3Cu, 0x13ED44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13ED44u;
label_13ed44:
    // 0x13ed44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13ed44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ed48: 0xc0aa8f6  jal         func_2AA3D8
    ctx->pc = 0x13ED48u;
    SET_GPR_U32(ctx, 31, 0x13ED50u);
    ctx->pc = 0x13ED4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13ED48u;
    // 0x13ed4c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA3D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA3D8u, 0x13ED48u, 0x13ED50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13ED50u;
label_13ed50:
    // 0x13ed50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13ed50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ed54: 0xc0aa8f6  jal         func_2AA3D8
    ctx->pc = 0x13ED54u;
    SET_GPR_U32(ctx, 31, 0x13ED5Cu);
    ctx->pc = 0x13ED58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13ED54u;
    // 0x13ed58: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA3D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA3D8u, 0x13ED54u, 0x13ED5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13ED5Cu;
label_13ed5c:
    // 0x13ed5c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x13ed5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x13ed60: 0xc0aa8f6  jal         func_2AA3D8
    ctx->pc = 0x13ED60u;
    SET_GPR_U32(ctx, 31, 0x13ED68u);
    ctx->pc = 0x13ED64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13ED60u;
    // 0x13ed64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA3D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA3D8u, 0x13ED60u, 0x13ED68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13ED68u;
label_13ed68:
    // 0x13ed68: 0xc0aaefa  jal         func_2ABBE8
    ctx->pc = 0x13ED68u;
    SET_GPR_U32(ctx, 31, 0x13ED70u);
    ctx->pc = 0x13ED6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13ED68u;
    // 0x13ed6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABBE8u, 0x13ED68u, 0x13ED70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13ED70u;
label_13ed70:
    // 0x13ed70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13ed70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13ed74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13ed74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ed78: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x13ed78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ed7c: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x13ED7Cu;
    SET_GPR_U32(ctx, 31, 0x13ED84u);
    ctx->pc = 0x13ED80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13ED7Cu;
    // 0x13ed80: 0xa202001c  sb          $v0, 0x1C($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 28), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x13ED7Cu, 0x13ED84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13ED84u;
label_13ed84:
    // 0x13ed84: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x13ed84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x13ed88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13ed88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ed8c: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x13ED8Cu;
    SET_GPR_U32(ctx, 31, 0x13ED94u);
    ctx->pc = 0x13ED90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13ED8Cu;
    // 0x13ed90: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x13ED8Cu, 0x13ED94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13ED94u;
label_13ed94:
    // 0x13ed94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13ed94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ed98: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x13ed98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x13ed9c: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x13ED9Cu;
    SET_GPR_U32(ctx, 31, 0x13EDA4u);
    ctx->pc = 0x13EDA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13ED9Cu;
    // 0x13eda0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x13ED9Cu, 0x13EDA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13EDA4u;
label_13eda4:
    // 0x13eda4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x13eda4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13eda8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13eda8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13edac: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x13EDACu;
    SET_GPR_U32(ctx, 31, 0x13EDB4u);
    ctx->pc = 0x13EDB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13EDACu;
    // 0x13edb0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x13EDACu, 0x13EDB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13EDB4u;
label_13edb4:
    // 0x13edb4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x13edb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x13edb8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x13edb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x13edbc: 0x260b0094  addiu       $t3, $s0, 0x94
    ctx->pc = 0x13edbcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 16), 148));
    // 0x13edc0: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x13edc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x13edc4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x13edc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x13edc8: 0x260a0090  addiu       $t2, $s0, 0x90
    ctx->pc = 0x13edc8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x13edcc: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x13edccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x13edd0: 0x26090098  addiu       $t1, $s0, 0x98
    ctx->pc = 0x13edd0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 152));
    // 0x13edd4: 0x2608009c  addiu       $t0, $s0, 0x9C
    ctx->pc = 0x13edd4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 156));
    // 0x13edd8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x13edd8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13eddc: 0x0  nop
    ctx->pc = 0x13eddcu;
    // NOP
label_13ede0:
    // 0x13ede0: 0x72100  sll         $a0, $a3, 4
    ctx->pc = 0x13ede0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x13ede4: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x13ede4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x13ede8: 0x1641821  addu        $v1, $t3, $a0
    ctx->pc = 0x13ede8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
    // 0x13edec: 0x3a22821  addu        $a1, $sp, $v0
    ctx->pc = 0x13edecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x13edf0: 0xe4630000  swc1        $f3, 0x0($v1)
    ctx->pc = 0x13edf0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x13edf4: 0x1441021  addu        $v0, $t2, $a0
    ctx->pc = 0x13edf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
    // 0x13edf8: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x13edf8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x13edfc: 0x1243021  addu        $a2, $t1, $a0
    ctx->pc = 0x13edfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x13ee00: 0x24e20001  addiu       $v0, $a3, 0x1
    ctx->pc = 0x13ee00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x13ee04: 0x1042021  addu        $a0, $t0, $a0
    ctx->pc = 0x13ee04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x13ee08: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x13ee08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x13ee0c: 0x3047ffff  andi        $a3, $v0, 0xFFFF
    ctx->pc = 0x13ee0cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x13ee10: 0x2ce20002  sltiu       $v0, $a3, 0x2
    ctx->pc = 0x13ee10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x13ee14: 0xc4610074  lwc1        $f1, 0x74($v1)
    ctx->pc = 0x13ee14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13ee18: 0xe4c10000  swc1        $f1, 0x0($a2)
    ctx->pc = 0x13ee18u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x13ee1c: 0xc460007c  lwc1        $f0, 0x7C($v1)
    ctx->pc = 0x13ee1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13ee20: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x13EE20u;
    {
        const bool branch_taken_0x13ee20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13EE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EE20u;
        // 0x13ee24: 0xe4800000  swc1        $f0, 0x0($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ee20) {
            ctx->pc = 0x13EDE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13ede0;
        }
    }
    ctx->pc = 0x13EE28u;
    // 0x13ee28: 0xc6200038  lwc1        $f0, 0x38($s1)
    ctx->pc = 0x13ee28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13ee2c: 0x3c014380  lui         $at, 0x4380
    ctx->pc = 0x13ee2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17280 << 16));
    // 0x13ee30: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x13ee30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13ee34: 0xe60000b4  swc1        $f0, 0xB4($s0)
    ctx->pc = 0x13ee34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 180), bits); }
    // 0x13ee38: 0xe60100b8  swc1        $f1, 0xB8($s0)
    ctx->pc = 0x13ee38u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 184), bits); }
    // 0x13ee3c: 0xa20000bc  sb          $zero, 0xBC($s0)
    ctx->pc = 0x13ee3cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 188), (uint8_t)GPR_U32(ctx, 0));
    // 0x13ee40: 0xae0000b0  sw          $zero, 0xB0($s0)
    ctx->pc = 0x13ee40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 0));
    // 0x13ee44: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x13ee44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13ee48: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x13ee48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13ee4c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13ee4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13ee50: 0x3e00008  jr          $ra
    ctx->pc = 0x13EE50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13EE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EE50u;
        // 0x13ee54: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13EE50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13EE58u;
}
