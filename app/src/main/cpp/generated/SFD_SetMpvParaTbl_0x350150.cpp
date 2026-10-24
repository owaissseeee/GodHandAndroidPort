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

// Function: SFD_SetMpvParaTbl
// Address: 0x350150 - 0x350248
void SFD_SetMpvParaTbl_0x350150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SFD_SetMpvParaTbl_0x350150");
#endif

    switch (ctx->pc) {
        case 0x3501c0u: goto label_3501c0;
        case 0x350200u: goto label_350200;
        default: break;
    }

    ctx->pc = 0x350150u;

    // 0x350150: 0x3c020076  lui         $v0, 0x76
    ctx->pc = 0x350150u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)118 << 16));
    // 0x350154: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x350154u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350158: 0x24426ba8  addiu       $v0, $v0, 0x6BA8
    ctx->pc = 0x350158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27560));
    // 0x35015c: 0x3c030076  lui         $v1, 0x76
    ctx->pc = 0x35015cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)118 << 16));
    // 0x350160: 0x69240007  ldl         $a0, 0x7($t1)
    ctx->pc = 0x350160u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x350164: 0x6d240000  ldr         $a0, 0x0($t1)
    ctx->pc = 0x350164u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x350168: 0x6927000f  ldl         $a3, 0xF($t1)
    ctx->pc = 0x350168u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x35016c: 0x6d270008  ldr         $a3, 0x8($t1)
    ctx->pc = 0x35016cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x350170: 0x69280017  ldl         $t0, 0x17($t1)
    ctx->pc = 0x350170u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x350174: 0x6d280010  ldr         $t0, 0x10($t1)
    ctx->pc = 0x350174u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x350178: 0x692a001f  ldl         $t2, 0x1F($t1)
    ctx->pc = 0x350178u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x35017c: 0x6d2a0018  ldr         $t2, 0x18($t1)
    ctx->pc = 0x35017cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x350180: 0xb0440007  sdl         $a0, 0x7($v0)
    ctx->pc = 0x350180u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x350184: 0xb4440000  sdr         $a0, 0x0($v0)
    ctx->pc = 0x350184u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x350188: 0xb047000f  sdl         $a3, 0xF($v0)
    ctx->pc = 0x350188u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x35018c: 0xb4470008  sdr         $a3, 0x8($v0)
    ctx->pc = 0x35018cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x350190: 0xb0480017  sdl         $t0, 0x17($v0)
    ctx->pc = 0x350190u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x350194: 0xb4480010  sdr         $t0, 0x10($v0)
    ctx->pc = 0x350194u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x350198: 0xb04a001f  sdl         $t2, 0x1F($v0)
    ctx->pc = 0x350198u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x35019c: 0xb44a0018  sdr         $t2, 0x18($v0)
    ctx->pc = 0x35019cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3501a0: 0x8d240020  lw          $a0, 0x20($t1)
    ctx->pc = 0x3501a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 32)));
    // 0x3501a4: 0x246b6bd0  addiu       $t3, $v1, 0x6BD0
    ctx->pc = 0x3501a4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), 27600));
    // 0x3501a8: 0xac440020  sw          $a0, 0x20($v0)
    ctx->pc = 0x3501a8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x766BC8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x766BC8u, _value); } while (0);
    // 0x3501ac: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x3501acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3501b0: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x3501b0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x766BC8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x766BC8u, _value); } while (0);
    // 0x3501b4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3501b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3501b8: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x3501b8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x766BB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x766BB8u, _value); } while (0);
    // 0x3501bc: 0x240affc0  addiu       $t2, $zero, -0x40
    ctx->pc = 0x3501bcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
label_3501c0:
    // 0x3501c0: 0x72080  sll         $a0, $a3, 2
    ctx->pc = 0x3501c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x3501c4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3501c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x3501c8: 0x881821  addu        $v1, $a0, $t0
    ctx->pc = 0x3501c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x3501cc: 0x8b2021  addu        $a0, $a0, $t3
    ctx->pc = 0x3501ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
    // 0x3501d0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3501d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3501d4: 0x28e50002  slti        $a1, $a3, 0x2
    ctx->pc = 0x3501d4u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x3501d8: 0x2442003f  addiu       $v0, $v0, 0x3F
    ctx->pc = 0x3501d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 63));
    // 0x3501dc: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x3501dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x3501e0: 0x14a0fff7  bnez        $a1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x3501E0u;
    {
        const bool branch_taken_0x3501e0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x3501E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3501E0u;
        // 0x3501e4: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3501e0) {
            ctx->pc = 0x3501C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3501c0;
        }
    }
    ctx->pc = 0x3501E8u;
    // 0x3501e8: 0x3c020076  lui         $v0, 0x76
    ctx->pc = 0x3501e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)118 << 16));
    // 0x3501ec: 0x8d24001c  lw          $a0, 0x1C($t1)
    ctx->pc = 0x3501ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 28)));
    // 0x3501f0: 0x24456bd8  addiu       $a1, $v0, 0x6BD8
    ctx->pc = 0x3501f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 27608));
    // 0x3501f4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3501f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3501f8: 0x240affc0  addiu       $t2, $zero, -0x40
    ctx->pc = 0x3501f8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x3501fc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3501fcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_350200:
    // 0x350200: 0xe4102a  slt         $v0, $a3, $a0
    ctx->pc = 0x350200u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x350204: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x350204u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x350208: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x350208u;
    {
        const bool branch_taken_0x350208 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35020Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350208u;
        // 0x35020c: 0x28e80010  slti        $t0, $a3, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x350208) {
            ctx->pc = 0x350228u;
            goto label_350228;
        }
    }
    ctx->pc = 0x350210u;
    // 0x350210: 0x1261821  addu        $v1, $t1, $a2
    ctx->pc = 0x350210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
    // 0x350214: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x350214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x350218: 0x2442003f  addiu       $v0, $v0, 0x3F
    ctx->pc = 0x350218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 63));
    // 0x35021c: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x35021cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x350220: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x350220u;
    {
        const bool branch_taken_0x350220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x350224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350220u;
        // 0x350224: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350220) {
            ctx->pc = 0x35022Cu;
            goto label_35022c;
        }
    }
    ctx->pc = 0x350228u;
label_350228:
    // 0x350228: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x350228u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_35022c:
    // 0x35022c: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x35022cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x350230: 0x1500fff3  bnez        $t0, . + 4 + (-0xD << 2)
    ctx->pc = 0x350230u;
    {
        const bool branch_taken_0x350230 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x350234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350230u;
        // 0x350234: 0x25290004  addiu       $t1, $t1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350230) {
            ctx->pc = 0x350200u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_350200;
        }
    }
    ctx->pc = 0x350238u;
    // 0x350238: 0x3e00008  jr          $ra
    ctx->pc = 0x350238u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x350238u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x350240u;
    // 0x350240: 0xaca90004  sw          $t1, 0x4($a1)
    ctx->pc = 0x350240u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 9));
    // 0x350244: 0x0  nop
    ctx->pc = 0x350244u;
    // NOP
    ctx->pc = 0x350248u;
}
