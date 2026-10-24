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

// Function: ColiseumEmSelect__Initialize
// Address: 0x1f35c8 - 0x1f38a0
void ColiseumEmSelect__Initialize_0x1f35c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ColiseumEmSelect__Initialize_0x1f35c8");
#endif

    switch (ctx->pc) {
        case 0x1f3698u: goto label_1f3698;
        case 0x1f36c8u: goto label_1f36c8;
        case 0x1f36d4u: goto label_1f36d4;
        case 0x1f36ecu: goto label_1f36ec;
        case 0x1f36f4u: goto label_1f36f4;
        case 0x1f36fcu: goto label_1f36fc;
        case 0x1f3708u: goto label_1f3708;
        case 0x1f3710u: goto label_1f3710;
        case 0x1f372cu: goto label_1f372c;
        case 0x1f374cu: goto label_1f374c;
        case 0x1f376cu: goto label_1f376c;
        case 0x1f378cu: goto label_1f378c;
        case 0x1f37acu: goto label_1f37ac;
        case 0x1f37ccu: goto label_1f37cc;
        case 0x1f37ecu: goto label_1f37ec;
        case 0x1f37f8u: goto label_1f37f8;
        case 0x1f3808u: goto label_1f3808;
        case 0x1f3860u: goto label_1f3860;
        case 0x1f386cu: goto label_1f386c;
        default: break;
    }

    ctx->pc = 0x1f35c8u;

    // 0x1f35c8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1f35c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1f35cc: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x1f35ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
    // 0x1f35d0: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x1f35d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x1f35d4: 0x24638240  addiu       $v1, $v1, -0x7DC0
    ctx->pc = 0x1f35d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935104));
    // 0x1f35d8: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1f35d8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f35dc: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x1f35dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x1f35e0: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x1f35e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x1f35e4: 0x3c08003c  lui         $t0, 0x3C
    ctx->pc = 0x1f35e4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)60 << 16));
    // 0x1f35e8: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x1f35e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x1f35ec: 0x3c11003c  lui         $s1, 0x3C
    ctx->pc = 0x1f35ecu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)60 << 16));
    // 0x1f35f0: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x1f35f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x1f35f4: 0x24120028  addiu       $s2, $zero, 0x28
    ctx->pc = 0x1f35f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x1f35f8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1f35f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1f35fc: 0x2631e8b0  addiu       $s1, $s1, -0x1750
    ctx->pc = 0x1f35fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294961328));
    // 0x1f3600: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1f3600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1f3604: 0x3c060043  lui         $a2, 0x43
    ctx->pc = 0x1f3604u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)67 << 16));
    // 0x1f3608: 0xae800054  sw          $zero, 0x54($s4)
    ctx->pc = 0x1f3608u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 84), GPR_U32(ctx, 0));
    // 0x1f360c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1f360cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3610: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1f3610u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f3614: 0x24c6bf40  addiu       $a2, $a2, -0x40C0
    ctx->pc = 0x1f3614u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950720));
    // 0x1f3618: 0x84620010  lh          $v0, 0x10($v1)
    ctx->pc = 0x1f3618u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x568250u));
    // 0x1f361c: 0x26930060  addiu       $s3, $s4, 0x60
    ctx->pc = 0x1f361cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 96));
    // 0x1f3620: 0x84640012  lh          $a0, 0x12($v1)
    ctx->pc = 0x1f3620u;
    SET_GPR_S32(ctx, 4, (int16_t)FAST_READ16(0x568252u));
    // 0x1f3624: 0x3c150057  lui         $s5, 0x57
    ctx->pc = 0x1f3624u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)87 << 16));
    // 0x1f3628: 0x521818  mult        $v1, $v0, $s2
    ctx->pc = 0x1f3628u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1f362c: 0xa68237d0  sh          $v0, 0x37D0($s4)
    ctx->pc = 0x1f362cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 14288), (uint16_t)GPR_U32(ctx, 2));
    // 0x1f3630: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x1f3630u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1f3634: 0xa68437d4  sh          $a0, 0x37D4($s4)
    ctx->pc = 0x1f3634u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 14292), (uint16_t)GPR_U32(ctx, 4));
    // 0x1f3638: 0xa68237d2  sh          $v0, 0x37D2($s4)
    ctx->pc = 0x1f3638u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 14290), (uint16_t)GPR_U32(ctx, 2));
    // 0x1f363c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1f363cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1f3640: 0x68620007  ldl         $v0, 0x7($v1)
    ctx->pc = 0x1f3640u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1f3644: 0x6c620000  ldr         $v0, 0x0($v1)
    ctx->pc = 0x1f3644u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1f3648: 0x6864000f  ldl         $a0, 0xF($v1)
    ctx->pc = 0x1f3648u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x1f364c: 0x6c640008  ldr         $a0, 0x8($v1)
    ctx->pc = 0x1f364cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x1f3650: 0x68690017  ldl         $t1, 0x17($v1)
    ctx->pc = 0x1f3650u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x1f3654: 0x6c690010  ldr         $t1, 0x10($v1)
    ctx->pc = 0x1f3654u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x1f3658: 0x686a001f  ldl         $t2, 0x1F($v1)
    ctx->pc = 0x1f3658u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x1f365c: 0x6c6a0018  ldr         $t2, 0x18($v1)
    ctx->pc = 0x1f365cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x1f3660: 0xb28237af  sdl         $v0, 0x37AF($s4)
    ctx->pc = 0x1f3660u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 14255); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f3664: 0xb68237a8  sdr         $v0, 0x37A8($s4)
    ctx->pc = 0x1f3664u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 14248); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f3668: 0xb28437b7  sdl         $a0, 0x37B7($s4)
    ctx->pc = 0x1f3668u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 14263); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f366c: 0xb68437b0  sdr         $a0, 0x37B0($s4)
    ctx->pc = 0x1f366cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 14256); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f3670: 0xb28937bf  sdl         $t1, 0x37BF($s4)
    ctx->pc = 0x1f3670u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 14271); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f3674: 0xb68937b8  sdr         $t1, 0x37B8($s4)
    ctx->pc = 0x1f3674u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 14264); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f3678: 0xb28a37c7  sdl         $t2, 0x37C7($s4)
    ctx->pc = 0x1f3678u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 14279); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f367c: 0xb68a37c0  sdr         $t2, 0x37C0($s4)
    ctx->pc = 0x1f367cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 14272); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f3680: 0x68620027  ldl         $v0, 0x27($v1)
    ctx->pc = 0x1f3680u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1f3684: 0x6c620020  ldr         $v0, 0x20($v1)
    ctx->pc = 0x1f3684u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1f3688: 0xb28237cf  sdl         $v0, 0x37CF($s4)
    ctx->pc = 0x1f3688u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 14287); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f368c: 0xb68237c8  sdr         $v0, 0x37C8($s4)
    ctx->pc = 0x1f368cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 14280); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f3690: 0xc0ab3ea  jal         func_2ACFA8
    ctx->pc = 0x1F3690u;
    SET_GPR_U32(ctx, 31, 0x1F3698u);
    ctx->pc = 0x1F3694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3690u;
    // 0x1f3694: 0x8d042388  lw          $a0, 0x2388($t0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 9096)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACFA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACFA8u, 0x1F3690u, 0x1F3698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3698u;
label_1f3698:
    // 0x1f3698: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x1f3698u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
    // 0x1f369c: 0x3c070075  lui         $a3, 0x75
    ctx->pc = 0x1f369cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)117 << 16));
    // 0x1f36a0: 0x26103f20  addiu       $s0, $s0, 0x3F20
    ctx->pc = 0x1f36a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16160));
    // 0x1f36a4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1f36a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f36a8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1f36a8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f36ac: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1f36acu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f36b0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1f36b0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f36b4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1f36b4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f36b8: 0x24e74220  addiu       $a3, $a3, 0x4220
    ctx->pc = 0x1f36b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16928));
    // 0x1f36bc: 0x268637d8  addiu       $a2, $s4, 0x37D8
    ctx->pc = 0x1f36bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 14296));
    // 0x1f36c0: 0xc08032c  jal         func_200CB0
    ctx->pc = 0x1F36C0u;
    SET_GPR_U32(ctx, 31, 0x1F36C8u);
    ctx->pc = 0x1F36C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F36C0u;
    // 0x1f36c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200CB0u, 0x1F36C0u, 0x1F36C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F36C8u;
label_1f36c8:
    // 0x1f36c8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f36c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f36cc: 0xc080458  jal         func_201160
    ctx->pc = 0x1F36CCu;
    SET_GPR_U32(ctx, 31, 0x1F36D4u);
    ctx->pc = 0x1F36D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F36CCu;
    // 0x1f36d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201160u, 0x1F36CCu, 0x1F36D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F36D4u;
label_1f36d4:
    // 0x1f36d4: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x1f36d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x1f36d8: 0x8e8637d8  lw          $a2, 0x37D8($s4)
    ctx->pc = 0x1f36d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 14296)));
    // 0x1f36dc: 0x8c432384  lw          $v1, 0x2384($v0)
    ctx->pc = 0x1f36dcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3C2384u));
    // 0x1f36e0: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x1f36e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1f36e4: 0xc0ab33e  jal         func_2ACCF8
    ctx->pc = 0x1F36E4u;
    SET_GPR_U32(ctx, 31, 0x1F36ECu);
    ctx->pc = 0x1F36E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F36E4u;
    // 0x1f36e8: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACCF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACCF8u, 0x1F36E4u, 0x1F36ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F36ECu;
label_1f36ec:
    // 0x1f36ec: 0xc07d192  jal         func_1F4648
    ctx->pc = 0x1F36ECu;
    SET_GPR_U32(ctx, 31, 0x1F36F4u);
    ctx->pc = 0x1F36F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F36ECu;
    // 0x1f36f0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4648u, 0x1F36ECu, 0x1F36F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F36F4u;
label_1f36f4:
    // 0x1f36f4: 0xc07e9c4  jal         func_1FA710
    ctx->pc = 0x1F36F4u;
    SET_GPR_U32(ctx, 31, 0x1F36FCu);
    ctx->pc = 0x1F36F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F36F4u;
    // 0x1f36f8: 0x26a49b70  addiu       $a0, $s5, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA710u, 0x1F36F4u, 0x1F36FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F36FCu;
label_1f36fc:
    // 0x1f36fc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f36fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3700: 0xc07d2de  jal         func_1F4B78
    ctx->pc = 0x1F3700u;
    SET_GPR_U32(ctx, 31, 0x1F3708u);
    ctx->pc = 0x1F3704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3700u;
    // 0x1f3704: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4B78u, 0x1F3700u, 0x1F3708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3708u;
label_1f3708:
    // 0x1f3708: 0xc07d210  jal         func_1F4840
    ctx->pc = 0x1F3708u;
    SET_GPR_U32(ctx, 31, 0x1F3710u);
    ctx->pc = 0x1F370Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3708u;
    // 0x1f370c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4840u, 0x1F3708u, 0x1F3710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3710u;
label_1f3710:
    // 0x1f3710: 0x868637d4  lh          $a2, 0x37D4($s4)
    ctx->pc = 0x1f3710u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 14292)));
    // 0x1f3714: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1f3714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3718: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f3718u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f371c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1f371cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f3720: 0xd21018  mult        $v0, $a2, $s2
    ctx->pc = 0x1f3720u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1f3724: 0xc07d01a  jal         func_1F4068
    ctx->pc = 0x1F3724u;
    SET_GPR_U32(ctx, 31, 0x1F372Cu);
    ctx->pc = 0x1F3728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3724u;
    // 0x1f3728: 0x513021  addu        $a2, $v0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4068u, 0x1F3724u, 0x1F372Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F372Cu;
label_1f372c:
    // 0x1f372c: 0x868637d4  lh          $a2, 0x37D4($s4)
    ctx->pc = 0x1f372cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 14292)));
    // 0x1f3730: 0x26220028  addiu       $v0, $s1, 0x28
    ctx->pc = 0x1f3730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
    // 0x1f3734: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1f3734u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3738: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1f3738u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f373c: 0xd23018  mult        $a2, $a2, $s2
    ctx->pc = 0x1f373cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x1f3740: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1f3740u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f3744: 0xc07d01a  jal         func_1F4068
    ctx->pc = 0x1F3744u;
    SET_GPR_U32(ctx, 31, 0x1F374Cu);
    ctx->pc = 0x1F3748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3744u;
    // 0x1f3748: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4068u, 0x1F3744u, 0x1F374Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F374Cu;
label_1f374c:
    // 0x1f374c: 0x868637d4  lh          $a2, 0x37D4($s4)
    ctx->pc = 0x1f374cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 14292)));
    // 0x1f3750: 0x26220050  addiu       $v0, $s1, 0x50
    ctx->pc = 0x1f3750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x1f3754: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1f3754u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3758: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1f3758u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f375c: 0xd23018  mult        $a2, $a2, $s2
    ctx->pc = 0x1f375cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x1f3760: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1f3760u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f3764: 0xc07d01a  jal         func_1F4068
    ctx->pc = 0x1F3764u;
    SET_GPR_U32(ctx, 31, 0x1F376Cu);
    ctx->pc = 0x1F3768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3764u;
    // 0x1f3768: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4068u, 0x1F3764u, 0x1F376Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F376Cu;
label_1f376c:
    // 0x1f376c: 0x868637d4  lh          $a2, 0x37D4($s4)
    ctx->pc = 0x1f376cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 14292)));
    // 0x1f3770: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x1f3770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
    // 0x1f3774: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1f3774u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3778: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1f3778u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1f377c: 0xd23018  mult        $a2, $a2, $s2
    ctx->pc = 0x1f377cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x1f3780: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1f3780u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f3784: 0xc07d01a  jal         func_1F4068
    ctx->pc = 0x1F3784u;
    SET_GPR_U32(ctx, 31, 0x1F378Cu);
    ctx->pc = 0x1F3788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3784u;
    // 0x1f3788: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4068u, 0x1F3784u, 0x1F378Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F378Cu;
label_1f378c:
    // 0x1f378c: 0x868637d4  lh          $a2, 0x37D4($s4)
    ctx->pc = 0x1f378cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 14292)));
    // 0x1f3790: 0x262200a0  addiu       $v0, $s1, 0xA0
    ctx->pc = 0x1f3790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
    // 0x1f3794: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1f3794u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3798: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1f3798u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f379c: 0xd23018  mult        $a2, $a2, $s2
    ctx->pc = 0x1f379cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x1f37a0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1f37a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f37a4: 0xc07d01a  jal         func_1F4068
    ctx->pc = 0x1F37A4u;
    SET_GPR_U32(ctx, 31, 0x1F37ACu);
    ctx->pc = 0x1F37A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F37A4u;
    // 0x1f37a8: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4068u, 0x1F37A4u, 0x1F37ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F37ACu;
label_1f37ac:
    // 0x1f37ac: 0x868637d4  lh          $a2, 0x37D4($s4)
    ctx->pc = 0x1f37acu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 14292)));
    // 0x1f37b0: 0x262200c8  addiu       $v0, $s1, 0xC8
    ctx->pc = 0x1f37b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 200));
    // 0x1f37b4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1f37b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f37b8: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1f37b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1f37bc: 0xd23018  mult        $a2, $a2, $s2
    ctx->pc = 0x1f37bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x1f37c0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1f37c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f37c4: 0xc07d01a  jal         func_1F4068
    ctx->pc = 0x1F37C4u;
    SET_GPR_U32(ctx, 31, 0x1F37CCu);
    ctx->pc = 0x1F37C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F37C4u;
    // 0x1f37c8: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4068u, 0x1F37C4u, 0x1F37CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F37CCu;
label_1f37cc:
    // 0x1f37cc: 0x868637d4  lh          $a2, 0x37D4($s4)
    ctx->pc = 0x1f37ccu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 14292)));
    // 0x1f37d0: 0x263100f0  addiu       $s1, $s1, 0xF0
    ctx->pc = 0x1f37d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 240));
    // 0x1f37d4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1f37d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f37d8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1f37d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f37dc: 0xd23018  mult        $a2, $a2, $s2
    ctx->pc = 0x1f37dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x1f37e0: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1f37e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1f37e4: 0xc07d01a  jal         func_1F4068
    ctx->pc = 0x1F37E4u;
    SET_GPR_U32(ctx, 31, 0x1F37ECu);
    ctx->pc = 0x1F37E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F37E4u;
    // 0x1f37e8: 0xd13021  addu        $a2, $a2, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4068u, 0x1F37E4u, 0x1F37ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F37ECu;
label_1f37ec:
    // 0x1f37ec: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1f37ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f37f0: 0xc07d092  jal         func_1F4248
    ctx->pc = 0x1F37F0u;
    SET_GPR_U32(ctx, 31, 0x1F37F8u);
    ctx->pc = 0x1F37F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F37F0u;
    // 0x1f37f4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4248u, 0x1F37F0u, 0x1F37F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F37F8u;
label_1f37f8:
    // 0x1f37f8: 0x968537d2  lhu         $a1, 0x37D2($s4)
    ctx->pc = 0x1f37f8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 14290)));
    // 0x1f37fc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1f37fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3800: 0xc07d4a8  jal         func_1F52A0
    ctx->pc = 0x1F3800u;
    SET_GPR_U32(ctx, 31, 0x1F3808u);
    ctx->pc = 0x1F3804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3800u;
    // 0x1f3804: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F52A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F52A0u, 0x1F3800u, 0x1F3808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3808u;
label_1f3808:
    // 0x1f3808: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x1f3808u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x1f380c: 0x8c627a2c  lw          $v0, 0x7A2C($v1)
    ctx->pc = 0x1f380cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A2Cu));
    // 0x1f3810: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x1f3810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x1f3814: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F3814u;
    {
        const bool branch_taken_0x1f3814 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3814u;
        // 0x1f3818: 0x8ea49b70  lw          $a0, -0x6490($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294941552)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3814) {
            ctx->pc = 0x1F382Cu;
            goto label_1f382c;
        }
    }
    ctx->pc = 0x1F381Cu;
    // 0x1f381c: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x1f381cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x1f3820: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x1f3820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1f3824: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1f3824u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1f3828: 0xac820014  sw          $v0, 0x14($a0)
    ctx->pc = 0x1f3828u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 2));
label_1f382c:
    // 0x1f382c: 0x8ea29b70  lw          $v0, -0x6490($s5)
    ctx->pc = 0x1f382cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294941552)));
    // 0x1f3830: 0x3c040080  lui         $a0, 0x80
    ctx->pc = 0x1f3830u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)128 << 16));
    // 0x1f3834: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x1f3834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1f3838: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1f3838u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1f383c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1F383Cu;
    {
        const bool branch_taken_0x1f383c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F383Cu;
        // 0x1f3840: 0x24020032  addiu       $v0, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f383c) {
            ctx->pc = 0x1F3848u;
            goto label_1f3848;
        }
    }
    ctx->pc = 0x1F3844u;
    // 0x1f3844: 0x24020033  addiu       $v0, $zero, 0x33
    ctx->pc = 0x1f3844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
label_1f3848:
    // 0x1f3848: 0xa68237d6  sh          $v0, 0x37D6($s4)
    ctx->pc = 0x1f3848u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 14294), (uint16_t)GPR_U32(ctx, 2));
    // 0x1f384c: 0x26900060  addiu       $s0, $s4, 0x60
    ctx->pc = 0x1f384cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 96));
    // 0x1f3850: 0x868537d6  lh          $a1, 0x37D6($s4)
    ctx->pc = 0x1f3850u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 14294)));
    // 0x1f3854: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f3854u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3858: 0xc07d544  jal         func_1F5510
    ctx->pc = 0x1F3858u;
    SET_GPR_U32(ctx, 31, 0x1F3860u);
    ctx->pc = 0x1F385Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3858u;
    // 0x1f385c: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F5510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F5510u, 0x1F3858u, 0x1F3860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3860u;
label_1f3860:
    // 0x1f3860: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f3860u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3864: 0xc07d4ea  jal         func_1F53A8
    ctx->pc = 0x1F3864u;
    SET_GPR_U32(ctx, 31, 0x1F386Cu);
    ctx->pc = 0x1F3868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3864u;
    // 0x1f3868: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F53A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F53A8u, 0x1F3864u, 0x1F386Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F386Cu;
label_1f386c:
    // 0x1f386c: 0xae80000c  sw          $zero, 0xC($s4)
    ctx->pc = 0x1f386cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 0));
    // 0x1f3870: 0xae800004  sw          $zero, 0x4($s4)
    ctx->pc = 0x1f3870u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 0));
    // 0x1f3874: 0xae800008  sw          $zero, 0x8($s4)
    ctx->pc = 0x1f3874u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 0));
    // 0x1f3878: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x1f3878u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1f387c: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x1f387cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1f3880: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x1f3880u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1f3884: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x1f3884u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1f3888: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x1f3888u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1f388c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1f388cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f3890: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1f3890u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f3894: 0x3e00008  jr          $ra
    ctx->pc = 0x1F3894u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F3898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3894u;
        // 0x1f3898: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F3894u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F389Cu;
    // 0x1f389c: 0x0  nop
    ctx->pc = 0x1f389cu;
    // NOP
    ctx->pc = 0x1f38a0u;
}
