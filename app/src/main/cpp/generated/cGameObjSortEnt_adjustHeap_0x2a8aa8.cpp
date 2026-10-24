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

// Function: cGameObjSortEnt_adjustHeap
// Address: 0x2a8aa8 - 0x2a8b90
void cGameObjSortEnt_adjustHeap_0x2a8aa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cGameObjSortEnt_adjustHeap_0x2a8aa8");
#endif

    switch (ctx->pc) {
        case 0x2a8ad0u: goto label_2a8ad0;
        case 0x2a8b84u: goto label_2a8b84;
        default: break;
    }

    ctx->pc = 0x2a8aa8u;

    // 0x2a8aa8: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x2a8aa8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8aac: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2a8aacu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2a8ab0: 0x120582d  daddu       $t3, $t1, $zero
    ctx->pc = 0x2a8ab0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8ab4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2a8ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2a8ab8: 0xb1040  sll         $v0, $t3, 1
    ctx->pc = 0x2a8ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 1));
    // 0x2a8abc: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x2a8abcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8ac0: 0x24450002  addiu       $a1, $v0, 0x2
    ctx->pc = 0x2a8ac0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x2a8ac4: 0xa6102a  slt         $v0, $a1, $a2
    ctx->pc = 0x2a8ac4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x2a8ac8: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2A8AC8u;
    {
        const bool branch_taken_0x2a8ac8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8AC8u;
        // 0x2a8acc: 0xffa70000  sd          $a3, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8ac8) {
            ctx->pc = 0x2A8B2Cu;
            goto label_2a8b2c;
        }
    }
    ctx->pc = 0x2A8AD0u;
label_2a8ad0:
    // 0x2a8ad0: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x2a8ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x2a8ad4: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x2a8ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x2a8ad8: 0xc441fffc  lwc1        $f1, -0x4($v0)
    ctx->pc = 0x2a8ad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a8adc: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2a8adcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a8ae0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2a8ae0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a8ae4: 0x0  nop
    ctx->pc = 0x2a8ae4u;
    // NOP
    // 0x2a8ae8: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2A8AE8u;
    {
        const bool branch_taken_0x2a8ae8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A8AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8AE8u;
        // 0x2a8aec: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8ae8) {
            ctx->pc = 0x2A8AF4u;
            goto label_2a8af4;
        }
    }
    ctx->pc = 0x2A8AF0u;
    // 0x2a8af0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2a8af0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a8af4:
    // 0x2a8af4: 0xa32823  subu        $a1, $a1, $v1
    ctx->pc = 0x2a8af4u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2a8af8: 0x920c0  sll         $a0, $t1, 3
    ctx->pc = 0x2a8af8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x2a8afc: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x2a8afcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x2a8b00: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x2a8b00u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8b04: 0x8a2021  addu        $a0, $a0, $t2
    ctx->pc = 0x2a8b04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x2a8b08: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x2a8b08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x2a8b0c: 0x25250001  addiu       $a1, $t1, 0x1
    ctx->pc = 0x2a8b0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x2a8b10: 0x68470007  ldl         $a3, 0x7($v0)
    ctx->pc = 0x2a8b10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x2a8b14: 0x6c470000  ldr         $a3, 0x0($v0)
    ctx->pc = 0x2a8b14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x2a8b18: 0xb0870007  sdl         $a3, 0x7($a0)
    ctx->pc = 0x2a8b18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a8b1c: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x2a8b1cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x2a8b20: 0xa6182a  slt         $v1, $a1, $a2
    ctx->pc = 0x2a8b20u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x2a8b24: 0x1460ffea  bnez        $v1, . + 4 + (-0x16 << 2)
    ctx->pc = 0x2A8B24u;
    {
        const bool branch_taken_0x2a8b24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A8B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8B24u;
        // 0x2a8b28: 0xb4870000  sdr         $a3, 0x0($a0) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8b24) {
            ctx->pc = 0x2A8AD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a8ad0;
        }
    }
    ctx->pc = 0x2A8B2Cu;
label_2a8b2c:
    // 0x2a8b2c: 0x14a60009  bne         $a1, $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x2A8B2Cu;
    {
        const bool branch_taken_0x2a8b2c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 6));
        ctx->pc = 0x2A8B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8B2Cu;
        // 0x2a8b30: 0x918c0  sll         $v1, $t1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8b2c) {
            ctx->pc = 0x2A8B54u;
            goto label_2a8b54;
        }
    }
    ctx->pc = 0x2A8B34u;
    // 0x2a8b34: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x2a8b34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x2a8b38: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x2a8b38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x2a8b3c: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x2a8b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x2a8b40: 0x6844ffff  ldl         $a0, -0x1($v0)
    ctx->pc = 0x2a8b40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4294967295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x2a8b44: 0x6c44fff8  ldr         $a0, -0x8($v0)
    ctx->pc = 0x2a8b44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4294967288); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x2a8b48: 0xb0640007  sdl         $a0, 0x7($v1)
    ctx->pc = 0x2a8b48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a8b4c: 0xb4640000  sdr         $a0, 0x0($v1)
    ctx->pc = 0x2a8b4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a8b50: 0x24a9ffff  addiu       $t1, $a1, -0x1
    ctx->pc = 0x2a8b50u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_2a8b54:
    // 0x2a8b54: 0x6bac0007  ldl         $t4, 0x7($sp)
    ctx->pc = 0x2a8b54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x2a8b58: 0x6fac0000  ldr         $t4, 0x0($sp)
    ctx->pc = 0x2a8b58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x2a8b5c: 0xb3ac0017  sdl         $t4, 0x17($sp)
    ctx->pc = 0x2a8b5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a8b60: 0xb7ac0010  sdr         $t4, 0x10($sp)
    ctx->pc = 0x2a8b60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a8b64: 0x140202d  daddu       $a0, $t2, $zero
    ctx->pc = 0x2a8b64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8b68: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x2a8b68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8b6c: 0x160302d  daddu       $a2, $t3, $zero
    ctx->pc = 0x2a8b6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8b70: 0x9fa70014  lwu         $a3, 0x14($sp)
    ctx->pc = 0x2a8b70u;
    SET_GPR_ZE32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2a8b74: 0x9fa20010  lwu         $v0, 0x10($sp)
    ctx->pc = 0x2a8b74u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a8b78: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x2a8b78u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x2a8b7c: 0xc0aa282  jal         func_2A8A08
    ctx->pc = 0x2A8B7Cu;
    SET_GPR_U32(ctx, 31, 0x2A8B84u);
    ctx->pc = 0x2A8B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8B7Cu;
    // 0x2a8b80: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8A08u, 0x2A8B7Cu, 0x2A8B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8B84u;
label_2a8b84:
    // 0x2a8b84: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2a8b84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a8b88: 0x3e00008  jr          $ra
    ctx->pc = 0x2A8B88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A8B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8B88u;
        // 0x2a8b8c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A8B88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A8B90u;
}
