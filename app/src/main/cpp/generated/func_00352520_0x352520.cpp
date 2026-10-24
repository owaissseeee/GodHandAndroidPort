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

// Function: func_00352520
// Address: 0x352520 - 0x3525f0
void func_00352520_0x352520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00352520_0x352520");
#endif

    switch (ctx->pc) {
        case 0x35254cu: goto label_35254c;
        default: break;
    }

    ctx->pc = 0x352520u;

    // 0x352520: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x352520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x352524: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x352524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x352528: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x352528u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35252c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x35252cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x352530: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x352530u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x352534: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x352534u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x352538: 0x27a60004  addiu       $a2, $sp, 0x4
    ctx->pc = 0x352538u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x35253c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x35253cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x352540: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x352540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x352544: 0xc0d6c3a  jal         func_35B0E8
    ctx->pc = 0x352544u;
    SET_GPR_U32(ctx, 31, 0x35254Cu);
    ctx->pc = 0x352548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x352544u;
    // 0x352548: 0x26240010  addiu       $a0, $s1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35B0E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35B0E8u, 0x352544u, 0x35254Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35254Cu;
label_35254c:
    // 0x35254c: 0x26500d30  addiu       $s0, $s2, 0xD30
    ctx->pc = 0x35254cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 3376));
    // 0x352550: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x352550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x352554: 0x8e050060  lw          $a1, 0x60($s0)
    ctx->pc = 0x352554u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x352558: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x352558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35255c: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x35255cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x352560: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x352560u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x352564: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x352564u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x352568: 0xae230030  sw          $v1, 0x30($s1)
    ctx->pc = 0x352568u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 3));
    // 0x35256c: 0xae240034  sw          $a0, 0x34($s1)
    ctx->pc = 0x35256cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 4));
    // 0x352570: 0x8e02008c  lw          $v0, 0x8C($s0)
    ctx->pc = 0x352570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x352574: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x352574u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x352578: 0x14600017  bnez        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x352578u;
    {
        const bool branch_taken_0x352578 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x35257Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352578u;
        // 0x35257c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x352578) {
            ctx->pc = 0x3525D8u;
            goto label_3525d8;
        }
    }
    ctx->pc = 0x352580u;
    // 0x352580: 0x6a220013  ldl         $v0, 0x13($s1)
    ctx->pc = 0x352580u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x352584: 0x6e22000c  ldr         $v0, 0xC($s1)
    ctx->pc = 0x352584u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x352588: 0x6a23001b  ldl         $v1, 0x1B($s1)
    ctx->pc = 0x352588u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 27); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x35258c: 0x6e230014  ldr         $v1, 0x14($s1)
    ctx->pc = 0x35258cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 20); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x352590: 0x6a240023  ldl         $a0, 0x23($s1)
    ctx->pc = 0x352590u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 35); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x352594: 0x6e24001c  ldr         $a0, 0x1C($s1)
    ctx->pc = 0x352594u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 28); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x352598: 0x6a25002b  ldl         $a1, 0x2B($s1)
    ctx->pc = 0x352598u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 43); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x35259c: 0x6e250024  ldr         $a1, 0x24($s1)
    ctx->pc = 0x35259cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 36); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x3525a0: 0xb2420d9f  sdl         $v0, 0xD9F($s2)
    ctx->pc = 0x3525a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 3487); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3525a4: 0xb6420d98  sdr         $v0, 0xD98($s2)
    ctx->pc = 0x3525a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 3480); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3525a8: 0xb2430da7  sdl         $v1, 0xDA7($s2)
    ctx->pc = 0x3525a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 3495); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3525ac: 0xb6430da0  sdr         $v1, 0xDA0($s2)
    ctx->pc = 0x3525acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 3488); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3525b0: 0xb2440daf  sdl         $a0, 0xDAF($s2)
    ctx->pc = 0x3525b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 3503); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3525b4: 0xb6440da8  sdr         $a0, 0xDA8($s2)
    ctx->pc = 0x3525b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 3496); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3525b8: 0xb2450db7  sdl         $a1, 0xDB7($s2)
    ctx->pc = 0x3525b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 3511); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3525bc: 0xb6450db0  sdr         $a1, 0xDB0($s2)
    ctx->pc = 0x3525bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 3504); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3525c0: 0x6a220033  ldl         $v0, 0x33($s1)
    ctx->pc = 0x3525c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 51); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x3525c4: 0x6e22002c  ldr         $v0, 0x2C($s1)
    ctx->pc = 0x3525c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 44); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x3525c8: 0x8e230034  lw          $v1, 0x34($s1)
    ctx->pc = 0x3525c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x3525cc: 0xb2420dbf  sdl         $v0, 0xDBF($s2)
    ctx->pc = 0x3525ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 3519); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3525d0: 0xb6420db8  sdr         $v0, 0xDB8($s2)
    ctx->pc = 0x3525d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 3512); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3525d4: 0xae430dc0  sw          $v1, 0xDC0($s2)
    ctx->pc = 0x3525d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3520), GPR_U32(ctx, 3));
label_3525d8:
    // 0x3525d8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x3525d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3525dc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3525dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3525e0: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x3525e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3525e4: 0x3e00008  jr          $ra
    ctx->pc = 0x3525E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3525E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3525E4u;
        // 0x3525e8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3525E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3525ECu;
    // 0x3525ec: 0x0  nop
    ctx->pc = 0x3525ecu;
    // NOP
    ctx->pc = 0x3525f0u;
}
