#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "mcport_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_mcport
{
// Function: setProgressSave__6cMcSys
// Address: 0x7c7b50 - 0x7c7c70
void setProgressSave__6cMcSys_0x7c7b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("setProgressSave__6cMcSys_0x7c7b50");
#endif

    switch (ctx->pc) {
        case 0x7c7ba8u: goto label_7c7ba8;
        case 0x7c7bd0u: goto label_7c7bd0;
        case 0x7c7c64u: goto label_7c7c64;
        default: break;
    }

    ctx->pc = 0x7c7b50u;

    // 0x7c7b50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x7c7b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x7c7b54: 0x3c02007d  lui         $v0, 0x7D
    ctx->pc = 0x7c7b54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)125 << 16));
    // 0x7c7b58: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x7c7b58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x7c7b5c: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x7c7b5cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x7c7b60: 0x24470ed8  addiu       $a3, $v0, 0xED8
    ctx->pc = 0x7c7b60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 3800));
    // 0x7c7b64: 0x68e30007  ldl         $v1, 0x7($a3)
    ctx->pc = 0x7c7b64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x7c7b68: 0x6ce30000  ldr         $v1, 0x0($a3)
    ctx->pc = 0x7c7b68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x7c7b6c: 0x68e5000f  ldl         $a1, 0xF($a3)
    ctx->pc = 0x7c7b6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x7c7b70: 0x6ce50008  ldr         $a1, 0x8($a3)
    ctx->pc = 0x7c7b70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x7c7b74: 0x68e60017  ldl         $a2, 0x17($a3)
    ctx->pc = 0x7c7b74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x7c7b78: 0x6ce60010  ldr         $a2, 0x10($a3)
    ctx->pc = 0x7c7b78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x7c7b7c: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x7c7b7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7c7b80: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x7c7b80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7c7b84: 0xb3a5000f  sdl         $a1, 0xF($sp)
    ctx->pc = 0x7c7b84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7c7b88: 0xb7a50008  sdr         $a1, 0x8($sp)
    ctx->pc = 0x7c7b88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7c7b8c: 0xb3a60017  sdl         $a2, 0x17($sp)
    ctx->pc = 0x7c7b8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7c7b90: 0xb7a60010  sdr         $a2, 0x10($sp)
    ctx->pc = 0x7c7b90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7c7b94: 0x24850098  addiu       $a1, $a0, 0x98
    ctx->pc = 0x7c7b94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 152));
    // 0x7c7b98: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x7c7b98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c7b9c: 0x46001046  mov.s       $f1, $f2
    ctx->pc = 0x7c7b9cu;
    ctx->f[1] = FPU_MOV_S(ctx->f[2]);
    // 0x7c7ba0: 0x3a0102d  daddu       $v0, $sp, $zero
    ctx->pc = 0x7c7ba0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c7ba4: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x7c7ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_7c7ba8:
    // 0x7c7ba8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x7c7ba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x7c7bac: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x7c7bacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x7c7bb0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x7c7bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x7c7bb4: 0x0  nop
    ctx->pc = 0x7c7bb4u;
    // NOP
    // 0x7c7bb8: 0x461fffb  bgez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x7C7BB8u;
    {
        const bool branch_taken_0x7c7bb8 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x7C7BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C7BB8u;
        // 0x7c7bbc: 0x46000840  add.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c7bb8) {
            ctx->pc = 0x7C7BA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7c7ba8;
        }
    }
    ctx->pc = 0x7C7BC0u;
    // 0x7c7bc0: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x7c7bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x7c7bc4: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x7c7bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x7c7bc8: 0x5d1821  addu        $v1, $v0, $sp
    ctx->pc = 0x7c7bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x7c7bcc: 0x0  nop
    ctx->pc = 0x7c7bccu;
    // NOP
label_7c7bd0:
    // 0x7c7bd0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x7c7bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x7c7bd4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x7C7BD4u;
    {
        const bool branch_taken_0x7c7bd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x7c7bd4) {
            ctx->pc = 0x7C7BF8u;
            goto label_7c7bf8;
        }
    }
    ctx->pc = 0x7C7BDCu;
    // 0x7c7bdc: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x7c7bdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x7c7be0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x7c7be0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x7c7be4: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x7c7be4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x7c7be8: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x7c7be8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x7c7bec: 0x28c20006  slti        $v0, $a2, 0x6
    ctx->pc = 0x7c7becu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x7c7bf0: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x7C7BF0u;
    {
        const bool branch_taken_0x7c7bf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7C7BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C7BF0u;
        // 0x7c7bf4: 0x46001080  add.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c7bf0) {
            ctx->pc = 0x7C7BD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7c7bd0;
        }
    }
    ctx->pc = 0x7C7BF8u;
label_7c7bf8:
    // 0x7c7bf8: 0x10c0001b  beqz        $a2, . + 4 + (0x1B << 2)
    ctx->pc = 0x7C7BF8u;
    {
        const bool branch_taken_0x7c7bf8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C7BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C7BF8u;
        // 0x7c7bfc: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c7bf8) {
            ctx->pc = 0x7C7C68u;
            goto label_7c7c68;
        }
    }
    ctx->pc = 0x7C7C00u;
    // 0x7c7c00: 0x8c8200b8  lw          $v0, 0xB8($a0)
    ctx->pc = 0x7c7c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 184)));
    // 0x7c7c04: 0x10c2000c  beq         $a2, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x7C7C04u;
    {
        const bool branch_taken_0x7c7c04 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x7C7C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C7C04u;
        // 0x7c7c08: 0x24c2ffff  addiu       $v0, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c7c04) {
            ctx->pc = 0x7C7C38u;
            goto label_7c7c38;
        }
    }
    ctx->pc = 0x7C7C0Cu;
    // 0x7c7c0c: 0x0  nop
    ctx->pc = 0x7c7c0cu;
    // NOP
    // 0x7c7c10: 0x0  nop
    ctx->pc = 0x7c7c10u;
    // NOP
    // 0x7c7c14: 0x46011003  div.s       $f0, $f2, $f1
    ctx->pc = 0x7c7c14u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[2], ctx->f[1]);
    // 0x7c7c18: 0xc48200b0  lwc1        $f2, 0xB0($a0)
    ctx->pc = 0x7c7c18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x7c7c1c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x7c7c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x7c7c20: 0xac8600b8  sw          $a2, 0xB8($a0)
    ctx->pc = 0x7c7c20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 184), GPR_U32(ctx, 6));
    // 0x7c7c24: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x7c7c24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x7c7c28: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x7c7c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x7c7c2c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x7c7c2cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x7c7c30: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x7c7c30u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[1]);
    // 0x7c7c34: 0xe48000b4  swc1        $f0, 0xB4($a0)
    ctx->pc = 0x7c7c34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 180), bits); }
label_7c7c38:
    // 0x7c7c38: 0xc48100b0  lwc1        $f1, 0xB0($a0)
    ctx->pc = 0x7c7c38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x7c7c3c: 0xc48000b4  lwc1        $f0, 0xB4($a0)
    ctx->pc = 0x7c7c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x7c7c40: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x7c7c40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x7c7c44: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x7c7c44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x7c7c48: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x7c7c48u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x7c7c4c: 0x460c1034  c.lt.s      $f2, $f12
    ctx->pc = 0x7c7c4cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x7c7c50: 0x0  nop
    ctx->pc = 0x7c7c50u;
    // NOP
    // 0x7c7c54: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x7C7C54u;
    {
        const bool branch_taken_0x7c7c54 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x7c7c54) {
            ctx->pc = 0x7C7C58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7C7C54u;
            // 0x7c7c58: 0x46001306  mov.s       $f12, $f2 (Delay Slot)
            ctx->f[12] = FPU_MOV_S(ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x7C7C5Cu;
            goto label_7c7c5c;
        }
    }
    ctx->pc = 0x7C7C5Cu;
label_7c7c5c:
    // 0x7c7c5c: 0xc1f1fa0  jal         func_7C7E80
    ctx->pc = 0x7C7C5Cu;
    SET_GPR_U32(ctx, 31, 0x7C7C64u);
    ctx->pc = 0x7C7E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C7E80u, 0x7C7C5Cu, 0x7C7C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C7C64u;
label_7c7c64:
    // 0x7c7c64: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x7c7c64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_7c7c68:
    // 0x7c7c68: 0x3e00008  jr          $ra
    ctx->pc = 0x7C7C68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C7C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C7C68u;
        // 0x7c7c6c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C7C68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C7C70u;
}
} // namespace gh_mcport
