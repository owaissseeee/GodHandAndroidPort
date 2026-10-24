#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r501_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r501
{
// Function: MakeBoss2__5cR501
// Address: 0x79ab68 - 0x79acf0
void MakeBoss2__5cR501_0x79ab68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MakeBoss2__5cR501_0x79ab68");
#endif

    switch (ctx->pc) {
        case 0x79abb0u: goto label_79abb0;
        case 0x79abccu: goto label_79abcc;
        case 0x79abe4u: goto label_79abe4;
        case 0x79abf0u: goto label_79abf0;
        case 0x79ac1cu: goto label_79ac1c;
        case 0x79ac44u: goto label_79ac44;
        case 0x79ac6cu: goto label_79ac6c;
        case 0x79ac94u: goto label_79ac94;
        case 0x79ac9cu: goto label_79ac9c;
        case 0x79acacu: goto label_79acac;
        case 0x79acc4u: goto label_79acc4;
        case 0x79acd0u: goto label_79acd0;
        default: break;
    }

    ctx->pc = 0x79ab68u;

    // 0x79ab68: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x79ab68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x79ab6c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x79ab6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x79ab70: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x79ab70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x79ab74: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x79ab74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79ab78: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x79ab78u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
    // 0x79ab7c: 0xa3a50030  sb          $a1, 0x30($sp)
    ctx->pc = 0x79ab7cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 5));
    // 0x79ab80: 0x26106ab0  addiu       $s0, $s0, 0x6AB0
    ctx->pc = 0x79ab80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 27312));
    // 0x79ab84: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x79ab84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79ab88: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x79ab88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x79ab8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79ab8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79ab90: 0xe7b60080  swc1        $f22, 0x80($sp)
    ctx->pc = 0x79ab90u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x79ab94: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79ab94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79ab98: 0xe7b50078  swc1        $f21, 0x78($sp)
    ctx->pc = 0x79ab98u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x79ab9c: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x79ab9cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x79aba0: 0xa3a30010  sb          $v1, 0x10($sp)
    ctx->pc = 0x79aba0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 3));
    // 0x79aba4: 0xa3a20020  sb          $v0, 0x20($sp)
    ctx->pc = 0x79aba4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 2));
    // 0x79aba8: 0xc0a54b4  jal         func_2952D0
    ctx->pc = 0x79ABA8u;
    SET_GPR_U32(ctx, 31, 0x79ABB0u);
    ctx->pc = 0x79ABACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79ABA8u;
    // 0x79abac: 0xa3a00000  sb          $zero, 0x0($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x79ABA8u, 0x79ABB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79ABB0u;
label_79abb0:
    // 0x79abb0: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x79abb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x79abb4: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x79abb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x79abb8: 0x93a50010  lbu         $a1, 0x10($sp)
    ctx->pc = 0x79abb8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79abbc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x79abbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x79abc0: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x79abc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x79abc4: 0xc0a54b4  jal         func_2952D0
    ctx->pc = 0x79ABC4u;
    SET_GPR_U32(ctx, 31, 0x79ABCCu);
    ctx->pc = 0x79ABC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79ABC4u;
    // 0x79abc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x79ABC4u, 0x79ABCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79ABCCu;
label_79abcc:
    // 0x79abcc: 0x3c014974  lui         $at, 0x4974
    ctx->pc = 0x79abccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18804 << 16));
    // 0x79abd0: 0x342123fe  ori         $at, $at, 0x23FE
    ctx->pc = 0x79abd0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)9214);
    // 0x79abd4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x79abd4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x79abd8: 0x93a50020  lbu         $a1, 0x20($sp)
    ctx->pc = 0x79abd8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79abdc: 0xc0a54b4  jal         func_2952D0
    ctx->pc = 0x79ABDCu;
    SET_GPR_U32(ctx, 31, 0x79ABE4u);
    ctx->pc = 0x79ABE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79ABDCu;
    // 0x79abe0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x79ABDCu, 0x79ABE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79ABE4u;
label_79abe4:
    // 0x79abe4: 0x93a50030  lbu         $a1, 0x30($sp)
    ctx->pc = 0x79abe4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79abe8: 0xc0a54b4  jal         func_2952D0
    ctx->pc = 0x79ABE8u;
    SET_GPR_U32(ctx, 31, 0x79ABF0u);
    ctx->pc = 0x79ABECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79ABE8u;
    // 0x79abec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x79ABE8u, 0x79ABF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79ABF0u;
label_79abf0:
    // 0x79abf0: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x79abf0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x79abf4: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x79abf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x79abf8: 0xe6150004  swc1        $f21, 0x4($s0)
    ctx->pc = 0x79abf8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x79abfc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x79abfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79ac00: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x79ac00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
    // 0x79ac04: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x79ac04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79ac08: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x79ac08u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x79ac0c: 0xe616000c  swc1        $f22, 0xC($s0)
    ctx->pc = 0x79ac0cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x79ac10: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x79ac10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79ac14: 0xc0a57e0  jal         func_295F80
    ctx->pc = 0x79AC14u;
    SET_GPR_U32(ctx, 31, 0x79AC1Cu);
    ctx->pc = 0x79AC18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AC14u;
    // 0x79ac18: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F80u, 0x79AC14u, 0x79AC1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AC1Cu;
label_79ac1c:
    // 0x79ac1c: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x79ac1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x79ac20: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x79ac20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x79ac24: 0xe6150004  swc1        $f21, 0x4($s0)
    ctx->pc = 0x79ac24u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x79ac28: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x79ac28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79ac2c: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x79ac2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
    // 0x79ac30: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x79ac30u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x79ac34: 0xe616000c  swc1        $f22, 0xC($s0)
    ctx->pc = 0x79ac34u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x79ac38: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x79ac38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79ac3c: 0xc0a57e0  jal         func_295F80
    ctx->pc = 0x79AC3Cu;
    SET_GPR_U32(ctx, 31, 0x79AC44u);
    ctx->pc = 0x79AC40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AC3Cu;
    // 0x79ac40: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F80u, 0x79AC3Cu, 0x79AC44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AC44u;
label_79ac44:
    // 0x79ac44: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x79ac44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x79ac48: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x79ac48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x79ac4c: 0xe6150004  swc1        $f21, 0x4($s0)
    ctx->pc = 0x79ac4cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x79ac50: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x79ac50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79ac54: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x79ac54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
    // 0x79ac58: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x79ac58u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x79ac5c: 0xe616000c  swc1        $f22, 0xC($s0)
    ctx->pc = 0x79ac5cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x79ac60: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x79ac60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79ac64: 0xc0a57e0  jal         func_295F80
    ctx->pc = 0x79AC64u;
    SET_GPR_U32(ctx, 31, 0x79AC6Cu);
    ctx->pc = 0x79AC68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AC64u;
    // 0x79ac68: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F80u, 0x79AC64u, 0x79AC6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AC6Cu;
label_79ac6c:
    // 0x79ac6c: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x79ac6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x79ac70: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x79ac70u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x79ac74: 0xe6150004  swc1        $f21, 0x4($s0)
    ctx->pc = 0x79ac74u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x79ac78: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x79ac78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x79ac7c: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x79ac7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
    // 0x79ac80: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79ac80u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79ac84: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x79ac84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79ac88: 0xe616000c  swc1        $f22, 0xC($s0)
    ctx->pc = 0x79ac88u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x79ac8c: 0xc0a57e0  jal         func_295F80
    ctx->pc = 0x79AC8Cu;
    SET_GPR_U32(ctx, 31, 0x79AC94u);
    ctx->pc = 0x79AC90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AC8Cu;
    // 0x79ac90: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F80u, 0x79AC8Cu, 0x79AC94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AC94u;
label_79ac94:
    // 0x79ac94: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x79AC94u;
    SET_GPR_U32(ctx, 31, 0x79AC9Cu);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x79AC94u, 0x79AC9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AC9Cu;
label_79ac9c:
    // 0x79ac9c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x79ac9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79aca0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79aca0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79aca4: 0xc0493d8  jal         func_124F60
    ctx->pc = 0x79ACA4u;
    SET_GPR_U32(ctx, 31, 0x79ACACu);
    ctx->pc = 0x79ACA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79ACA4u;
    // 0x79aca8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F60u, 0x79ACA4u, 0x79ACACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79ACACu;
label_79acac:
    // 0x79acac: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x79acacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
    // 0x79acb0: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x79acb0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x79acb4: 0x2484ae50  addiu       $a0, $a0, -0x51B0
    ctx->pc = 0x79acb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946384));
    // 0x79acb8: 0x24a507a8  addiu       $a1, $a1, 0x7A8
    ctx->pc = 0x79acb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1960));
    // 0x79acbc: 0xc04ccb4  jal         func_1332D0
    ctx->pc = 0x79ACBCu;
    SET_GPR_U32(ctx, 31, 0x79ACC4u);
    ctx->pc = 0x79ACC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79ACBCu;
    // 0x79acc0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1332D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1332D0u, 0x79ACBCu, 0x79ACC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79ACC4u;
label_79acc4:
    // 0x79acc4: 0x24040050  addiu       $a0, $zero, 0x50
    ctx->pc = 0x79acc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x79acc8: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x79ACC8u;
    SET_GPR_U32(ctx, 31, 0x79ACD0u);
    ctx->pc = 0x79ACCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79ACC8u;
    // 0x79accc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x79ACC8u, 0x79ACD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79ACD0u;
label_79acd0:
    // 0x79acd0: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x79acd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x79acd4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x79acd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x79acd8: 0xc7b60080  lwc1        $f22, 0x80($sp)
    ctx->pc = 0x79acd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x79acdc: 0xc7b50078  lwc1        $f21, 0x78($sp)
    ctx->pc = 0x79acdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x79ace0: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x79ace0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x79ace4: 0x3e00008  jr          $ra
    ctx->pc = 0x79ACE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79ACE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ACE4u;
        // 0x79ace8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79ACE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79ACECu;
    // 0x79acec: 0x0  nop
    ctx->pc = 0x79acecu;
    // NOP
    ctx->pc = 0x79acf0u;
}
} // namespace gh_r501
