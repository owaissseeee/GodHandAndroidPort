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

// Function: func_002006B8
// Address: 0x2006b8 - 0x2008b8
void func_002006B8_0x2006b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002006B8_0x2006b8");
#endif

    switch (ctx->pc) {
        case 0x200790u: goto label_200790;
        case 0x2007a8u: goto label_2007a8;
        case 0x2007b4u: goto label_2007b4;
        default: break;
    }

    ctx->pc = 0x2006b8u;

    // 0x2006b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2006b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2006bc: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x2006bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x2006c0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2006c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2006c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2006c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2006c8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2006c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2006cc: 0x24647a2c  addiu       $a0, $v1, 0x7A2C
    ctx->pc = 0x2006ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 31276));
    // 0x2006d0: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x2006d0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A38u));
    // 0x2006d4: 0x211ba  dsrl        $v0, $v0, 6
    ctx->pc = 0x2006d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 6);
    // 0x2006d8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2006d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2006dc: 0x14400072  bnez        $v0, . + 4 + (0x72 << 2)
    ctx->pc = 0x2006DCu;
    {
        const bool branch_taken_0x2006dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2006E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2006DCu;
        // 0x2006e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2006dc) {
            ctx->pc = 0x2008A8u;
            goto label_2008a8;
        }
    }
    ctx->pc = 0x2006E4u;
    // 0x2006e4: 0x9202003a  lbu         $v0, 0x3A($s0)
    ctx->pc = 0x2006e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 58)));
    // 0x2006e8: 0x1440006f  bnez        $v0, . + 4 + (0x6F << 2)
    ctx->pc = 0x2006E8u;
    {
        const bool branch_taken_0x2006e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2006ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2006E8u;
        // 0x2006ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2006e8) {
            ctx->pc = 0x2008A8u;
            goto label_2008a8;
        }
    }
    ctx->pc = 0x2006F0u;
    // 0x2006f0: 0x96030014  lhu         $v1, 0x14($s0)
    ctx->pc = 0x2006f0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2006f4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2006f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2006f8: 0x1062006a  beq         $v1, $v0, . + 4 + (0x6A << 2)
    ctx->pc = 0x2006F8u;
    {
        const bool branch_taken_0x2006f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2006FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2006F8u;
        // 0x2006fc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2006f8) {
            ctx->pc = 0x2008A4u;
            goto label_2008a4;
        }
    }
    ctx->pc = 0x200700u;
    // 0x200700: 0x92020017  lbu         $v0, 0x17($s0)
    ctx->pc = 0x200700u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 23)));
    // 0x200704: 0x10430068  beq         $v0, $v1, . + 4 + (0x68 << 2)
    ctx->pc = 0x200704u;
    {
        const bool branch_taken_0x200704 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x200708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200704u;
        // 0x200708: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200704) {
            ctx->pc = 0x2008A8u;
            goto label_2008a8;
        }
    }
    ctx->pc = 0x20070Cu;
    // 0x20070c: 0x82020039  lb          $v0, 0x39($s0)
    ctx->pc = 0x20070cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 57)));
    // 0x200710: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x200710u;
    {
        const bool branch_taken_0x200710 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x200710) {
            ctx->pc = 0x200714u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x200710u;
            // 0x200714: 0x8c82fff8  lw          $v0, -0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294967288)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x200728u;
            goto label_200728;
        }
    }
    ctx->pc = 0x200718u;
    // 0x200718: 0x1043002a  beq         $v0, $v1, . + 4 + (0x2A << 2)
    ctx->pc = 0x200718u;
    {
        const bool branch_taken_0x200718 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x20071Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200718u;
        // 0x20071c: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200718) {
            ctx->pc = 0x2007C4u;
            goto label_2007c4;
        }
    }
    ctx->pc = 0x200720u;
    // 0x200720: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x200720u;
    {
        const bool branch_taken_0x200720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x200724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200720u;
        // 0x200724: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200720) {
            ctx->pc = 0x2007DCu;
            goto label_2007dc;
        }
    }
    ctx->pc = 0x200728u;
label_200728:
    // 0x200728: 0x211ba  dsrl        $v0, $v0, 6
    ctx->pc = 0x200728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 6);
    // 0x20072c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x20072cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x200730: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x200730u;
    {
        const bool branch_taken_0x200730 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x200730) {
            ctx->pc = 0x200734u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x200730u;
            // 0x200734: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x200784u;
            goto label_200784;
        }
    }
    ctx->pc = 0x200738u;
    // 0x200738: 0x94830024  lhu         $v1, 0x24($a0)
    ctx->pc = 0x200738u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x20073c: 0x50600011  beql        $v1, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x20073Cu;
    {
        const bool branch_taken_0x20073c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20073c) {
            ctx->pc = 0x200740u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20073Cu;
            // 0x200740: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x200784u;
            goto label_200784;
        }
    }
    ctx->pc = 0x200744u;
    // 0x200744: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x200744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x200748: 0x5062000e  beql        $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x200748u;
    {
        const bool branch_taken_0x200748 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x200748) {
            ctx->pc = 0x20074Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x200748u;
            // 0x20074c: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x200784u;
            goto label_200784;
        }
    }
    ctx->pc = 0x200750u;
    // 0x200750: 0x6a02000b  ldl         $v0, 0xB($s0)
    ctx->pc = 0x200750u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 11); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x200754: 0x6e020004  ldr         $v0, 0x4($s0)
    ctx->pc = 0x200754u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 4); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x200758: 0x6a030013  ldl         $v1, 0x13($s0)
    ctx->pc = 0x200758u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x20075c: 0x6e03000c  ldr         $v1, 0xC($s0)
    ctx->pc = 0x20075cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x200760: 0x6a04001b  ldl         $a0, 0x1B($s0)
    ctx->pc = 0x200760u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 27); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x200764: 0x6e040014  ldr         $a0, 0x14($s0)
    ctx->pc = 0x200764u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 20); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x200768: 0xb2020023  sdl         $v0, 0x23($s0)
    ctx->pc = 0x200768u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 35); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x20076c: 0xb602001c  sdr         $v0, 0x1C($s0)
    ctx->pc = 0x20076cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 28); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x200770: 0xb203002b  sdl         $v1, 0x2B($s0)
    ctx->pc = 0x200770u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 43); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x200774: 0xb6030024  sdr         $v1, 0x24($s0)
    ctx->pc = 0x200774u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 36); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x200778: 0xb2040033  sdl         $a0, 0x33($s0)
    ctx->pc = 0x200778u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 51); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x20077c: 0xb604002c  sdr         $a0, 0x2C($s0)
    ctx->pc = 0x20077cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 44); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x200780: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x200780u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_200784:
    // 0x200784: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x200784u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200788: 0xc0b42ae  jal         func_2D0AB8
    ctx->pc = 0x200788u;
    SET_GPR_U32(ctx, 31, 0x200790u);
    ctx->pc = 0x20078Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200788u;
    // 0x20078c: 0x2484ee00  addiu       $a0, $a0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0AB8u, 0x200788u, 0x200790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200790u;
label_200790:
    // 0x200790: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x200790u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x200794: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x200794u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x200798: 0x8c44d930  lw          $a0, -0x26D0($v0)
    ctx->pc = 0x200798u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3BD930u));
    // 0x20079c: 0x24070011  addiu       $a3, $zero, 0x11
    ctx->pc = 0x20079cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x2007a0: 0xc058008  jal         func_160020
    ctx->pc = 0x2007A0u;
    SET_GPR_U32(ctx, 31, 0x2007A8u);
    ctx->pc = 0x2007A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2007A0u;
    // 0x2007a4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x160020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160020u, 0x2007A0u, 0x2007A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2007A8u;
label_2007a8:
    // 0x2007a8: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2007a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2007ac: 0xc0b0e16  jal         func_2C3858
    ctx->pc = 0x2007ACu;
    SET_GPR_U32(ctx, 31, 0x2007B4u);
    ctx->pc = 0x2007B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2007ACu;
    // 0x2007b0: 0x8c442f84  lw          $a0, 0x2F84($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3858u, 0x2007ACu, 0x2007B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2007B4u;
label_2007b4:
    // 0x2007b4: 0x92020039  lbu         $v0, 0x39($s0)
    ctx->pc = 0x2007b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 57)));
    // 0x2007b8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2007b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2007bc: 0xa2020039  sb          $v0, 0x39($s0)
    ctx->pc = 0x2007bcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 57), (uint8_t)GPR_U32(ctx, 2));
    // 0x2007c0: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x2007c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
label_2007c4:
    // 0x2007c4: 0x3c040800  lui         $a0, 0x800
    ctx->pc = 0x2007c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2048 << 16));
    // 0x2007c8: 0x8c437a84  lw          $v1, 0x7A84($v0)
    ctx->pc = 0x2007c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 31364)));
    // 0x2007cc: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2007ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2007d0: 0x14600035  bnez        $v1, . + 4 + (0x35 << 2)
    ctx->pc = 0x2007D0u;
    {
        const bool branch_taken_0x2007d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2007D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2007D0u;
        // 0x2007d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2007d0) {
            ctx->pc = 0x2008A8u;
            goto label_2008a8;
        }
    }
    ctx->pc = 0x2007D8u;
    // 0x2007d8: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2007d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_2007dc:
    // 0x2007dc: 0x8c43d930  lw          $v1, -0x26D0($v0)
    ctx->pc = 0x2007dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294957360)));
    // 0x2007e0: 0x24630730  addiu       $v1, $v1, 0x730
    ctx->pc = 0x2007e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1840));
    // 0x2007e4: 0x94620134  lhu         $v0, 0x134($v1)
    ctx->pc = 0x2007e4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 308)));
    // 0x2007e8: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2007E8u;
    {
        const bool branch_taken_0x2007e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2007ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2007E8u;
        // 0x2007ec: 0x94650136  lhu         $a1, 0x136($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 310)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2007e8) {
            ctx->pc = 0x200840u;
            goto label_200840;
        }
    }
    ctx->pc = 0x2007F0u;
    // 0x2007f0: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x2007f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x2007f4: 0x52100  sll         $a0, $a1, 4
    ctx->pc = 0x2007f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x2007f8: 0x24423f00  addiu       $v0, $v0, 0x3F00
    ctx->pc = 0x2007f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16128));
    // 0x2007fc: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x2007fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x200800: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x200800u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x200804: 0x2463f198  addiu       $v1, $v1, -0xE68
    ctx->pc = 0x200804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963608));
    // 0x200808: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x200808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20080c: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x20080cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x200810: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x200810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x200814: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x200814u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x200818: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x200818u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x20081c: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x20081cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x200820: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x200820u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x200824: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x200824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x200828: 0xe601000c  swc1        $f1, 0xC($s0)
    ctx->pc = 0x200828u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x20082c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x20082cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x200830: 0xa2050016  sb          $a1, 0x16($s0)
    ctx->pc = 0x200830u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 22), (uint8_t)GPR_U32(ctx, 5));
    // 0x200834: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x200834u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x200838: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x200838u;
    {
        const bool branch_taken_0x200838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20083Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200838u;
        // 0x20083c: 0xa6000014  sh          $zero, 0x14($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200838) {
            ctx->pc = 0x2008A4u;
            goto label_2008a4;
        }
    }
    ctx->pc = 0x200840u;
label_200840:
    // 0x200840: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x200840u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x200844: 0x8c627a24  lw          $v0, 0x7A24($v1)
    ctx->pc = 0x200844u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A24u));
    // 0x200848: 0x211ba  dsrl        $v0, $v0, 6
    ctx->pc = 0x200848u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 6);
    // 0x20084c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x20084cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x200850: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x200850u;
    {
        const bool branch_taken_0x200850 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x200854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200850u;
        // 0x200854: 0x24647a24  addiu       $a0, $v1, 0x7A24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 31268));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200850) {
            ctx->pc = 0x2008A4u;
            goto label_2008a4;
        }
    }
    ctx->pc = 0x200858u;
    // 0x200858: 0x9482002c  lhu         $v0, 0x2C($a0)
    ctx->pc = 0x200858u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x20085c: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x20085Cu;
    {
        const bool branch_taken_0x20085c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x200860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20085Cu;
        // 0x200860: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20085c) {
            ctx->pc = 0x2008A8u;
            goto label_2008a8;
        }
    }
    ctx->pc = 0x200864u;
    // 0x200864: 0x96030014  lhu         $v1, 0x14($s0)
    ctx->pc = 0x200864u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x200868: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x200868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x20086c: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x20086Cu;
    {
        const bool branch_taken_0x20086c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x200870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20086Cu;
        // 0x200870: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20086c) {
            ctx->pc = 0x2008A8u;
            goto label_2008a8;
        }
    }
    ctx->pc = 0x200874u;
    // 0x200874: 0x6a020023  ldl         $v0, 0x23($s0)
    ctx->pc = 0x200874u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 35); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x200878: 0x6e02001c  ldr         $v0, 0x1C($s0)
    ctx->pc = 0x200878u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 28); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x20087c: 0x6a03002b  ldl         $v1, 0x2B($s0)
    ctx->pc = 0x20087cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 43); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x200880: 0x6e030024  ldr         $v1, 0x24($s0)
    ctx->pc = 0x200880u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 36); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x200884: 0x6a040033  ldl         $a0, 0x33($s0)
    ctx->pc = 0x200884u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 51); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x200888: 0x6e04002c  ldr         $a0, 0x2C($s0)
    ctx->pc = 0x200888u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 44); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x20088c: 0xb202000b  sdl         $v0, 0xB($s0)
    ctx->pc = 0x20088cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 11); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x200890: 0xb6020004  sdr         $v0, 0x4($s0)
    ctx->pc = 0x200890u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 4); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x200894: 0xb2030013  sdl         $v1, 0x13($s0)
    ctx->pc = 0x200894u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x200898: 0xb603000c  sdr         $v1, 0xC($s0)
    ctx->pc = 0x200898u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x20089c: 0xb204001b  sdl         $a0, 0x1B($s0)
    ctx->pc = 0x20089cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 27); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2008a0: 0xb6040014  sdr         $a0, 0x14($s0)
    ctx->pc = 0x2008a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 20); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2008a4:
    // 0x2008a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2008a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2008a8:
    // 0x2008a8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2008a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2008ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2008acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2008b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2008B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2008B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2008B0u;
        // 0x2008b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2008B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2008B8u;
}
