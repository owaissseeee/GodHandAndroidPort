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

// Function: cGameObj_pickDropItem
// Address: 0x1b0150 - 0x1b0240
void cGameObj_pickDropItem_0x1b0150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cGameObj_pickDropItem_0x1b0150");
#endif

    switch (ctx->pc) {
        case 0x1b0178u: goto label_1b0178;
        case 0x1b01e0u: goto label_1b01e0;
        default: break;
    }

    ctx->pc = 0x1b0150u;

    // 0x1b0150: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1b0150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1b0154: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1b0154u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1b0158: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1b0158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1b015c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1b015cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1b0160: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b0160u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0164: 0x8e020560  lw          $v0, 0x560($s0)
    ctx->pc = 0x1b0164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1376)));
    // 0x1b0168: 0x5443002c  bnel        $v0, $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x1B0168u;
    {
        const bool branch_taken_0x1b0168 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1b0168) {
            ctx->pc = 0x1B016Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B0168u;
            // 0x1b016c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B021Cu;
            goto label_1b021c;
        }
    }
    ctx->pc = 0x1B0170u;
    // 0x1b0170: 0xc0c7400  jal         func_31D000
    ctx->pc = 0x1B0170u;
    SET_GPR_U32(ctx, 31, 0x1B0178u);
    ctx->pc = 0x31D000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D000u, 0x1B0170u, 0x1B0178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0178u;
label_1b0178:
    // 0x1b0178: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x1b0178u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x1b017c: 0x24468068  addiu       $a2, $v0, -0x7F98
    ctx->pc = 0x1b017cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934632));
    // 0x1b0180: 0x68c30007  ldl         $v1, 0x7($a2)
    ctx->pc = 0x1b0180u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1b0184: 0x6cc30000  ldr         $v1, 0x0($a2)
    ctx->pc = 0x1b0184u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1b0188: 0x68c4000f  ldl         $a0, 0xF($a2)
    ctx->pc = 0x1b0188u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x1b018c: 0x6cc40008  ldr         $a0, 0x8($a2)
    ctx->pc = 0x1b018cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x1b0190: 0x68c50017  ldl         $a1, 0x17($a2)
    ctx->pc = 0x1b0190u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x1b0194: 0x6cc50010  ldr         $a1, 0x10($a2)
    ctx->pc = 0x1b0194u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x1b0198: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x1b0198u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1b019c: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x1b019cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1b01a0: 0xb3a4000f  sdl         $a0, 0xF($sp)
    ctx->pc = 0x1b01a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1b01a4: 0xb7a40008  sdr         $a0, 0x8($sp)
    ctx->pc = 0x1b01a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1b01a8: 0xb3a50017  sdl         $a1, 0x17($sp)
    ctx->pc = 0x1b01a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1b01ac: 0xb7a50010  sdr         $a1, 0x10($sp)
    ctx->pc = 0x1b01acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1b01b0: 0x68c3001f  ldl         $v1, 0x1F($a2)
    ctx->pc = 0x1b01b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1b01b4: 0x6cc30018  ldr         $v1, 0x18($a2)
    ctx->pc = 0x1b01b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1b01b8: 0x68c40027  ldl         $a0, 0x27($a2)
    ctx->pc = 0x1b01b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x1b01bc: 0x6cc40020  ldr         $a0, 0x20($a2)
    ctx->pc = 0x1b01bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x1b01c0: 0xb3a3001f  sdl         $v1, 0x1F($sp)
    ctx->pc = 0x1b01c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1b01c4: 0xb7a30018  sdr         $v1, 0x18($sp)
    ctx->pc = 0x1b01c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1b01c8: 0xb3a40027  sdl         $a0, 0x27($sp)
    ctx->pc = 0x1b01c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1b01cc: 0xb7a40020  sdr         $a0, 0x20($sp)
    ctx->pc = 0x1b01ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1b01d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b01d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b01d4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1b01d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b01d8: 0x37a30004  ori         $v1, $sp, 0x4
    ctx->pc = 0x1b01d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x1b01dc: 0x0  nop
    ctx->pc = 0x1b01dcu;
    // NOP
label_1b01e0:
    // 0x1b01e0: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x1b01e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b01e4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1b01e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b01e8: 0x0  nop
    ctx->pc = 0x1b01e8u;
    // NOP
    // 0x1b01ec: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x1B01ECu;
    {
        const bool branch_taken_0x1b01ec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b01ec) {
            ctx->pc = 0x1B01F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B01ECu;
            // 0x1b01f0: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B01FCu;
            goto label_1b01fc;
        }
    }
    ctx->pc = 0x1B01F4u;
    // 0x1b01f4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1B01F4u;
    {
        const bool branch_taken_0x1b01f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B01F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B01F4u;
        // 0x1b01f8: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b01f4) {
            ctx->pc = 0x1B0214u;
            goto label_1b0214;
        }
    }
    ctx->pc = 0x1B01FCu;
label_1b01fc:
    // 0x1b01fc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1b01fcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1b0200: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x1b0200u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x1b0204: 0x2ca20005  sltiu       $v0, $a1, 0x5
    ctx->pc = 0x1b0204u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x1b0208: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x1B0208u;
    {
        const bool branch_taken_0x1b0208 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B020Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0208u;
        // 0x1b020c: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0208) {
            ctx->pc = 0x1B01E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b01e0;
        }
    }
    ctx->pc = 0x1B0210u;
    // 0x1b0210: 0x240203e2  addiu       $v0, $zero, 0x3E2
    ctx->pc = 0x1b0210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 994));
label_1b0214:
    // 0x1b0214: 0xae020560  sw          $v0, 0x560($s0)
    ctx->pc = 0x1b0214u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1376), GPR_U32(ctx, 2));
    // 0x1b0218: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1b0218u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1b021c:
    // 0x1b021c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1b021cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b0220: 0x3e00008  jr          $ra
    ctx->pc = 0x1B0220u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B0224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0220u;
        // 0x1b0224: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B0220u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B0228u;
    // 0x1b0228: 0x0  nop
    ctx->pc = 0x1b0228u;
    // NOP
    // 0x1b022c: 0x0  nop
    ctx->pc = 0x1b022cu;
    // NOP
    // 0x1b0230: 0x0  nop
    ctx->pc = 0x1b0230u;
    // NOP
    // 0x1b0234: 0x0  nop
    ctx->pc = 0x1b0234u;
    // NOP
    // 0x1b0238: 0x0  nop
    ctx->pc = 0x1b0238u;
    // NOP
    // 0x1b023c: 0x0  nop
    ctx->pc = 0x1b023cu;
    // NOP
    ctx->pc = 0x1b0240u;
}
