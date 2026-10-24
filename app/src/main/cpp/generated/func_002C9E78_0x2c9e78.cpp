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

// Function: func_002C9E78
// Address: 0x2c9e78 - 0x2c9f58
void func_002C9E78_0x2c9e78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002C9E78_0x2c9e78");
#endif

    switch (ctx->pc) {
        case 0x2c9e90u: goto label_2c9e90;
        case 0x2c9ec0u: goto label_2c9ec0;
        case 0x2c9ec8u: goto label_2c9ec8;
        case 0x2c9f3cu: goto label_2c9f3c;
        case 0x2c9f44u: goto label_2c9f44;
        default: break;
    }

    ctx->pc = 0x2c9e78u;

    // 0x2c9e78: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c9e78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2c9e7c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2c9e7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2c9e80: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c9e80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9e84: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2c9e84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2c9e88: 0xc0dd5c0  jal         func_375700
    ctx->pc = 0x2C9E88u;
    SET_GPR_U32(ctx, 31, 0x2C9E90u);
    ctx->pc = 0x2C9E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9E88u;
    // 0x2c9e8c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x375700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x375700u, 0x2C9E88u, 0x2C9E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9E90u;
label_2c9e90:
    // 0x2c9e90: 0x2402007f  addiu       $v0, $zero, 0x7F
    ctx->pc = 0x2c9e90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x2c9e94: 0x2403005a  addiu       $v1, $zero, 0x5A
    ctx->pc = 0x2c9e94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x2c9e98: 0xa7a30008  sh          $v1, 0x8($sp)
    ctx->pc = 0x2c9e98u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x2c9e9c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2c9e9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9ea0: 0xa7a2000e  sh          $v0, 0xE($sp)
    ctx->pc = 0x2c9ea0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x2c9ea4: 0xa7a20000  sh          $v0, 0x0($sp)
    ctx->pc = 0x2c9ea4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x2c9ea8: 0xa7a20002  sh          $v0, 0x2($sp)
    ctx->pc = 0x2c9ea8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x2c9eac: 0xa7a30006  sh          $v1, 0x6($sp)
    ctx->pc = 0x2c9eacu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x2c9eb0: 0xa7a2000a  sh          $v0, 0xA($sp)
    ctx->pc = 0x2c9eb0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x2c9eb4: 0xa7a2000c  sh          $v0, 0xC($sp)
    ctx->pc = 0x2c9eb4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x2c9eb8: 0xc0dd58c  jal         func_375630
    ctx->pc = 0x2C9EB8u;
    SET_GPR_U32(ctx, 31, 0x2C9EC0u);
    ctx->pc = 0x2C9EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9EB8u;
    // 0x2c9ebc: 0xa7a00004  sh          $zero, 0x4($sp) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 29), 4), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x375630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x375630u, 0x2C9EB8u, 0x2C9EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9EC0u;
label_2c9ec0:
    // 0x2c9ec0: 0xc0dd5d2  jal         func_375748
    ctx->pc = 0x2C9EC0u;
    SET_GPR_U32(ctx, 31, 0x2C9EC8u);
    ctx->pc = 0x2C9EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9EC0u;
    // 0x2c9ec4: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x375748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x375748u, 0x2C9EC0u, 0x2C9EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9EC8u;
label_2c9ec8:
    // 0x2c9ec8: 0x97a40002  lhu         $a0, 0x2($sp)
    ctx->pc = 0x2c9ec8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x2c9ecc: 0x97a20008  lhu         $v0, 0x8($sp)
    ctx->pc = 0x2c9eccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c9ed0: 0x97a3000a  lhu         $v1, 0xA($sp)
    ctx->pc = 0x2c9ed0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 10)));
    // 0x2c9ed4: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x2c9ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x2c9ed8: 0x87a50000  lh          $a1, 0x0($sp)
    ctx->pc = 0x2c9ed8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c9edc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x2c9edcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x2c9ee0: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x2c9ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x2c9ee4: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x2c9ee4u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x2c9ee8: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x2c9ee8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x2c9eec: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x2c9eecu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x2c9ef0: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x2c9ef0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2c9ef4: 0x0  nop
    ctx->pc = 0x2c9ef4u;
    // NOP
    // 0x2c9ef8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2c9ef8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2c9efc: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x2c9efcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2c9f00: 0x0  nop
    ctx->pc = 0x2c9f00u;
    // NOP
    // 0x2c9f04: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x2c9f04u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2c9f08: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2c9f08u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c9f0c: 0x0  nop
    ctx->pc = 0x2c9f0cu;
    // NOP
    // 0x2c9f10: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c9f10u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c9f14: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2c9f14u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c9f18: 0x0  nop
    ctx->pc = 0x2c9f18u;
    // NOP
    // 0x2c9f1c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2c9f1cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2c9f20: 0xe6020008  swc1        $f2, 0x8($s0)
    ctx->pc = 0x2c9f20u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x2c9f24: 0xe6030014  swc1        $f3, 0x14($s0)
    ctx->pc = 0x2c9f24u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x2c9f28: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x2c9f28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x2c9f2c: 0xe6010010  swc1        $f1, 0x10($s0)
    ctx->pc = 0x2c9f2cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x2c9f30: 0xe6020000  swc1        $f2, 0x0($s0)
    ctx->pc = 0x2c9f30u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x2c9f34: 0xc0dd4e0  jal         func_375380
    ctx->pc = 0x2C9F34u;
    SET_GPR_U32(ctx, 31, 0x2C9F3Cu);
    ctx->pc = 0x2C9F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9F34u;
    // 0x2c9f38: 0xe603000c  swc1        $f3, 0xC($s0) (Delay Slot)
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x375380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x375380u, 0x2C9F34u, 0x2C9F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9F3Cu;
label_2c9f3c:
    // 0x2c9f3c: 0xc0dd540  jal         func_375500
    ctx->pc = 0x2C9F3Cu;
    SET_GPR_U32(ctx, 31, 0x2C9F44u);
    ctx->pc = 0x375500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x375500u, 0x2C9F3Cu, 0x2C9F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9F44u;
label_2c9f44:
    // 0x2c9f44: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2c9f44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c9f48: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2c9f48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c9f4c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C9F4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C9F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9F4Cu;
        // 0x2c9f50: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C9F4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C9F54u;
    // 0x2c9f54: 0x0  nop
    ctx->pc = 0x2c9f54u;
    // NOP
    ctx->pc = 0x2c9f58u;
}
