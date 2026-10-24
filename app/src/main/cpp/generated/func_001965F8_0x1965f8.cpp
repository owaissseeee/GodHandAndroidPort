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

// Function: func_001965F8
// Address: 0x1965f8 - 0x1968a0
void func_001965F8_0x1965f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001965F8_0x1965f8");
#endif

    switch (ctx->pc) {
        case 0x1965f8u: goto label_1965f8;
        case 0x1965fcu: goto label_1965fc;
        case 0x196600u: goto label_196600;
        case 0x196604u: goto label_196604;
        case 0x196608u: goto label_196608;
        case 0x19660cu: goto label_19660c;
        case 0x196610u: goto label_196610;
        case 0x196614u: goto label_196614;
        case 0x196618u: goto label_196618;
        case 0x19661cu: goto label_19661c;
        case 0x196620u: goto label_196620;
        case 0x196624u: goto label_196624;
        case 0x196628u: goto label_196628;
        case 0x19662cu: goto label_19662c;
        case 0x196630u: goto label_196630;
        case 0x196634u: goto label_196634;
        case 0x196638u: goto label_196638;
        case 0x19663cu: goto label_19663c;
        case 0x196640u: goto label_196640;
        case 0x196644u: goto label_196644;
        case 0x196648u: goto label_196648;
        case 0x19664cu: goto label_19664c;
        case 0x196650u: goto label_196650;
        case 0x196654u: goto label_196654;
        case 0x196658u: goto label_196658;
        case 0x19665cu: goto label_19665c;
        case 0x196660u: goto label_196660;
        case 0x196664u: goto label_196664;
        case 0x196668u: goto label_196668;
        case 0x19666cu: goto label_19666c;
        case 0x196670u: goto label_196670;
        case 0x196674u: goto label_196674;
        case 0x196678u: goto label_196678;
        case 0x19667cu: goto label_19667c;
        case 0x196680u: goto label_196680;
        case 0x196684u: goto label_196684;
        case 0x196688u: goto label_196688;
        case 0x19668cu: goto label_19668c;
        case 0x196690u: goto label_196690;
        case 0x196694u: goto label_196694;
        case 0x196698u: goto label_196698;
        case 0x19669cu: goto label_19669c;
        case 0x1966a0u: goto label_1966a0;
        case 0x1966a4u: goto label_1966a4;
        case 0x1966a8u: goto label_1966a8;
        case 0x1966acu: goto label_1966ac;
        case 0x1966b0u: goto label_1966b0;
        case 0x1966b4u: goto label_1966b4;
        case 0x1966b8u: goto label_1966b8;
        case 0x1966bcu: goto label_1966bc;
        case 0x1966c0u: goto label_1966c0;
        case 0x1966c4u: goto label_1966c4;
        case 0x1966c8u: goto label_1966c8;
        case 0x1966ccu: goto label_1966cc;
        case 0x1966d0u: goto label_1966d0;
        case 0x1966d4u: goto label_1966d4;
        case 0x1966d8u: goto label_1966d8;
        case 0x1966dcu: goto label_1966dc;
        case 0x1966e0u: goto label_1966e0;
        case 0x1966e4u: goto label_1966e4;
        case 0x1966e8u: goto label_1966e8;
        case 0x1966ecu: goto label_1966ec;
        case 0x1966f0u: goto label_1966f0;
        case 0x1966f4u: goto label_1966f4;
        case 0x1966f8u: goto label_1966f8;
        case 0x1966fcu: goto label_1966fc;
        case 0x196700u: goto label_196700;
        case 0x196704u: goto label_196704;
        case 0x196708u: goto label_196708;
        case 0x19670cu: goto label_19670c;
        case 0x196710u: goto label_196710;
        case 0x196714u: goto label_196714;
        case 0x196718u: goto label_196718;
        case 0x19671cu: goto label_19671c;
        case 0x196720u: goto label_196720;
        case 0x196724u: goto label_196724;
        case 0x196728u: goto label_196728;
        case 0x19672cu: goto label_19672c;
        case 0x196730u: goto label_196730;
        case 0x196734u: goto label_196734;
        case 0x196738u: goto label_196738;
        case 0x19673cu: goto label_19673c;
        case 0x196740u: goto label_196740;
        case 0x196744u: goto label_196744;
        case 0x196748u: goto label_196748;
        case 0x19674cu: goto label_19674c;
        case 0x196750u: goto label_196750;
        case 0x196754u: goto label_196754;
        case 0x196758u: goto label_196758;
        case 0x19675cu: goto label_19675c;
        case 0x196760u: goto label_196760;
        case 0x196764u: goto label_196764;
        case 0x196768u: goto label_196768;
        case 0x19676cu: goto label_19676c;
        case 0x196770u: goto label_196770;
        case 0x196774u: goto label_196774;
        case 0x196778u: goto label_196778;
        case 0x19677cu: goto label_19677c;
        case 0x196780u: goto label_196780;
        case 0x196784u: goto label_196784;
        case 0x196788u: goto label_196788;
        case 0x19678cu: goto label_19678c;
        case 0x196790u: goto label_196790;
        case 0x196794u: goto label_196794;
        case 0x196798u: goto label_196798;
        case 0x19679cu: goto label_19679c;
        case 0x1967a0u: goto label_1967a0;
        case 0x1967a4u: goto label_1967a4;
        case 0x1967a8u: goto label_1967a8;
        case 0x1967acu: goto label_1967ac;
        case 0x1967b0u: goto label_1967b0;
        case 0x1967b4u: goto label_1967b4;
        case 0x1967b8u: goto label_1967b8;
        case 0x1967bcu: goto label_1967bc;
        case 0x1967c0u: goto label_1967c0;
        case 0x1967c4u: goto label_1967c4;
        case 0x1967c8u: goto label_1967c8;
        case 0x1967ccu: goto label_1967cc;
        case 0x1967d0u: goto label_1967d0;
        case 0x1967d4u: goto label_1967d4;
        case 0x1967d8u: goto label_1967d8;
        case 0x1967dcu: goto label_1967dc;
        case 0x1967e0u: goto label_1967e0;
        case 0x1967e4u: goto label_1967e4;
        case 0x1967e8u: goto label_1967e8;
        case 0x1967ecu: goto label_1967ec;
        case 0x1967f0u: goto label_1967f0;
        case 0x1967f4u: goto label_1967f4;
        case 0x1967f8u: goto label_1967f8;
        case 0x1967fcu: goto label_1967fc;
        case 0x196800u: goto label_196800;
        case 0x196804u: goto label_196804;
        case 0x196808u: goto label_196808;
        case 0x19680cu: goto label_19680c;
        case 0x196810u: goto label_196810;
        case 0x196814u: goto label_196814;
        case 0x196818u: goto label_196818;
        case 0x19681cu: goto label_19681c;
        case 0x196820u: goto label_196820;
        case 0x196824u: goto label_196824;
        case 0x196828u: goto label_196828;
        case 0x19682cu: goto label_19682c;
        case 0x196830u: goto label_196830;
        case 0x196834u: goto label_196834;
        case 0x196838u: goto label_196838;
        case 0x19683cu: goto label_19683c;
        case 0x196840u: goto label_196840;
        case 0x196844u: goto label_196844;
        case 0x196848u: goto label_196848;
        case 0x19684cu: goto label_19684c;
        case 0x196850u: goto label_196850;
        case 0x196854u: goto label_196854;
        case 0x196858u: goto label_196858;
        case 0x19685cu: goto label_19685c;
        case 0x196860u: goto label_196860;
        case 0x196864u: goto label_196864;
        case 0x196868u: goto label_196868;
        case 0x19686cu: goto label_19686c;
        case 0x196870u: goto label_196870;
        case 0x196874u: goto label_196874;
        case 0x196878u: goto label_196878;
        case 0x19687cu: goto label_19687c;
        case 0x196880u: goto label_196880;
        case 0x196884u: goto label_196884;
        case 0x196888u: goto label_196888;
        case 0x19688cu: goto label_19688c;
        case 0x196890u: goto label_196890;
        case 0x196894u: goto label_196894;
        case 0x196898u: goto label_196898;
        case 0x19689cu: goto label_19689c;
        default: break;
    }

    ctx->pc = 0x1965f8u;

label_1965f8:
    // 0x1965f8: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x1965f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
label_1965fc:
    // 0x1965fc: 0x7fb200f0  sq          $s2, 0xF0($sp)
    ctx->pc = 0x1965fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 18));
label_196600:
    // 0x196600: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x196600u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_196604:
    // 0x196604: 0x7fb00110  sq          $s0, 0x110($sp)
    ctx->pc = 0x196604u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 16));
label_196608:
    // 0x196608: 0x7fb10100  sq          $s1, 0x100($sp)
    ctx->pc = 0x196608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 17));
label_19660c:
    // 0x19660c: 0x7fb300e0  sq          $s3, 0xE0($sp)
    ctx->pc = 0x19660cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 19));
label_196610:
    // 0x196610: 0x7fb400d0  sq          $s4, 0xD0($sp)
    ctx->pc = 0x196610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 20));
label_196614:
    // 0x196614: 0x7fb500c0  sq          $s5, 0xC0($sp)
    ctx->pc = 0x196614u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 21));
label_196618:
    // 0x196618: 0x7fb600b0  sq          $s6, 0xB0($sp)
    ctx->pc = 0x196618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 22));
label_19661c:
    // 0x19661c: 0x7fb700a0  sq          $s7, 0xA0($sp)
    ctx->pc = 0x19661cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 23));
label_196620:
    // 0x196620: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x196620u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_196624:
    // 0x196624: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x196624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_196628:
    // 0x196628: 0xe7b50128  swc1        $f21, 0x128($sp)
    ctx->pc = 0x196628u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
label_19662c:
    // 0x19662c: 0xc06ddac  jal         func_1B76B0
label_196630:
    if (ctx->pc == 0x196630u) {
        ctx->pc = 0x196630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19662Cu;
        // 0x196630: 0xe7b40120  swc1        $f20, 0x120($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x196634u;
        goto label_196634;
    }
    ctx->pc = 0x19662Cu;
    SET_GPR_U32(ctx, 31, 0x196634u);
    ctx->pc = 0x196630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19662Cu;
    // 0x196630: 0xe7b40120  swc1        $f20, 0x120($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B76B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B76B0u, 0x19662Cu, 0x196634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196634u;
label_196634:
    // 0x196634: 0x1040008b  beqz        $v0, . + 4 + (0x8B << 2)
label_196638:
    if (ctx->pc == 0x196638u) {
        ctx->pc = 0x196638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196634u;
        // 0x196638: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19663Cu;
        goto label_19663c;
    }
    ctx->pc = 0x196634u;
    {
        const bool branch_taken_0x196634 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x196638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196634u;
        // 0x196638: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196634) {
            ctx->pc = 0x196864u;
            goto label_196864;
        }
    }
    ctx->pc = 0x19663Cu;
label_19663c:
    // 0x19663c: 0x924302f4  lbu         $v1, 0x2F4($s2)
    ctx->pc = 0x19663cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 756)));
label_196640:
    // 0x196640: 0x24474de0  addiu       $a3, $v0, 0x4DE0
    ctx->pc = 0x196640u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 19936));
label_196644:
    // 0x196644: 0x68e40007  ldl         $a0, 0x7($a3)
    ctx->pc = 0x196644u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_196648:
    // 0x196648: 0x6ce40000  ldr         $a0, 0x0($a3)
    ctx->pc = 0x196648u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_19664c:
    // 0x19664c: 0x68e5000f  ldl         $a1, 0xF($a3)
    ctx->pc = 0x19664cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_196650:
    // 0x196650: 0x6ce50008  ldr         $a1, 0x8($a3)
    ctx->pc = 0x196650u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_196654:
    // 0x196654: 0x68e60017  ldl         $a2, 0x17($a3)
    ctx->pc = 0x196654u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_196658:
    // 0x196658: 0x6ce60010  ldr         $a2, 0x10($a3)
    ctx->pc = 0x196658u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_19665c:
    // 0x19665c: 0xb3a40007  sdl         $a0, 0x7($sp)
    ctx->pc = 0x19665cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_196660:
    // 0x196660: 0xb7a40000  sdr         $a0, 0x0($sp)
    ctx->pc = 0x196660u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_196664:
    // 0x196664: 0xb3a5000f  sdl         $a1, 0xF($sp)
    ctx->pc = 0x196664u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_196668:
    // 0x196668: 0xb7a50008  sdr         $a1, 0x8($sp)
    ctx->pc = 0x196668u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_19666c:
    // 0x19666c: 0xb3a60017  sdl         $a2, 0x17($sp)
    ctx->pc = 0x19666cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_196670:
    // 0x196670: 0xb7a60010  sdr         $a2, 0x10($sp)
    ctx->pc = 0x196670u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_196674:
    // 0x196674: 0x68e4001f  ldl         $a0, 0x1F($a3)
    ctx->pc = 0x196674u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_196678:
    // 0x196678: 0x6ce40018  ldr         $a0, 0x18($a3)
    ctx->pc = 0x196678u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_19667c:
    // 0x19667c: 0xb3a4001f  sdl         $a0, 0x1F($sp)
    ctx->pc = 0x19667cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_196680:
    // 0x196680: 0xb7a40018  sdr         $a0, 0x18($sp)
    ctx->pc = 0x196680u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_196684:
    // 0x196684: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x196684u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_196688:
    // 0x196688: 0x3a32021  addu        $a0, $sp, $v1
    ctx->pc = 0x196688u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
label_19668c:
    // 0x19668c: 0x94820002  lhu         $v0, 0x2($a0)
    ctx->pc = 0x19668cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_196690:
    // 0x196690: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x196690u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_196694:
    // 0x196694: 0x22c03  sra         $a1, $v0, 16
    ctx->pc = 0x196694u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 16));
label_196698:
    // 0x196698: 0x4a0000c  bltz        $a1, . + 4 + (0xC << 2)
label_19669c:
    if (ctx->pc == 0x19669Cu) {
        ctx->pc = 0x19669Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196698u;
        // 0x19669c: 0x27a20004  addiu       $v0, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1966A0u;
        goto label_1966a0;
    }
    ctx->pc = 0x196698u;
    {
        const bool branch_taken_0x196698 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x19669Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196698u;
        // 0x19669c: 0x27a20004  addiu       $v0, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196698) {
            ctx->pc = 0x1966CCu;
            goto label_1966cc;
        }
    }
    ctx->pc = 0x1966A0u;
label_1966a0:
    // 0x1966a0: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x1966a0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_1966a4:
    // 0x1966a4: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x1966a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_1966a8:
    // 0x1966a8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1966a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_1966ac:
    // 0x1966ac: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x1966acu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_1966b0:
    // 0x1966b0: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1966b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_1966b4:
    // 0x1966b4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1966b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1966b8:
    // 0x1966b8: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1966b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1966bc:
    // 0x1966bc: 0xdc90fff8  ld          $s0, -0x8($a0)
    ctx->pc = 0x1966bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 4), 4294967288)));
label_1966c0:
    // 0x1966c0: 0x10303f  dsra32      $a2, $s0, 0
    ctx->pc = 0x1966c0u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 16) >> (32 + 0));
label_1966c4:
    // 0x1966c4: 0x10000004  b           . + 4 + (0x4 << 2)
label_1966c8:
    if (ctx->pc == 0x1966C8u) {
        ctx->pc = 0x1966C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1966C4u;
        // 0x1966c8: 0x924202f4  lbu         $v0, 0x2F4($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 756)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1966CCu;
        goto label_1966cc;
    }
    ctx->pc = 0x1966C4u;
    {
        const bool branch_taken_0x1966c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1966C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1966C4u;
        // 0x1966c8: 0x924202f4  lbu         $v0, 0x2F4($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 756)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1966c4) {
            ctx->pc = 0x1966D8u;
            goto label_1966d8;
        }
    }
    ctx->pc = 0x1966CCu;
label_1966cc:
    // 0x1966cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1966ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1966d0:
    // 0x1966d0: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1966d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1966d4:
    // 0x1966d4: 0x924202f4  lbu         $v0, 0x2F4($s2)
    ctx->pc = 0x1966d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 756)));
label_1966d8:
    // 0x1966d8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1966d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1966dc:
    // 0x1966dc: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x1966dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_1966e0:
    // 0x1966e0: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
label_1966e4:
    if (ctx->pc == 0x1966E4u) {
        ctx->pc = 0x1966E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1966E0u;
        // 0x1966e4: 0x84630000  lh          $v1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1966E8u;
        goto label_1966e8;
    }
    ctx->pc = 0x1966E0u;
    {
        const bool branch_taken_0x1966e0 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x1966E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1966E0u;
        // 0x1966e4: 0x84630000  lh          $v1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1966e0) {
            ctx->pc = 0x1966FCu;
            goto label_1966fc;
        }
    }
    ctx->pc = 0x1966E8u;
label_1966e8:
    // 0x1966e8: 0x3202ffff  andi        $v0, $s0, 0xFFFF
    ctx->pc = 0x1966e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
label_1966ec:
    // 0x1966ec: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1966ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_1966f0:
    // 0x1966f0: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x1966f0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_1966f4:
    // 0x1966f4: 0x10000002  b           . + 4 + (0x2 << 2)
label_1966f8:
    if (ctx->pc == 0x1966F8u) {
        ctx->pc = 0x1966F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1966F4u;
        // 0x1966f8: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1966FCu;
        goto label_1966fc;
    }
    ctx->pc = 0x1966F4u;
    {
        const bool branch_taken_0x1966f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1966F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1966F4u;
        // 0x1966f8: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1966f4) {
            ctx->pc = 0x196700u;
            goto label_196700;
        }
    }
    ctx->pc = 0x1966FCu;
label_1966fc:
    // 0x1966fc: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1966fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_196700:
    // 0x196700: 0x2422021  addu        $a0, $s2, $v0
    ctx->pc = 0x196700u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_196704:
    // 0x196704: 0xc0f809  jalr        $a2
label_196708:
    if (ctx->pc == 0x196708u) {
        ctx->pc = 0x196708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196704u;
        // 0x196708: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19670Cu;
        goto label_19670c;
    }
    ctx->pc = 0x196704u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x19670Cu);
        ctx->pc = 0x196708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196704u;
        // 0x196708: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x196704u, 0x19670Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19670Cu;
label_19670c:
    // 0x19670c: 0x924202b4  lbu         $v0, 0x2B4($s2)
    ctx->pc = 0x19670cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 692)));
label_196710:
    // 0x196710: 0x10400052  beqz        $v0, . + 4 + (0x52 << 2)
label_196714:
    if (ctx->pc == 0x196714u) {
        ctx->pc = 0x196714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196710u;
        // 0x196714: 0x27be0030  addiu       $fp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196718u;
        goto label_196718;
    }
    ctx->pc = 0x196710u;
    {
        const bool branch_taken_0x196710 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x196714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196710u;
        // 0x196714: 0x27be0030  addiu       $fp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196710) {
            ctx->pc = 0x19685Cu;
            goto label_19685c;
        }
    }
    ctx->pc = 0x196718u;
label_196718:
    // 0x196718: 0x3c01c47a  lui         $at, 0xC47A
    ctx->pc = 0x196718u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50298 << 16));
label_19671c:
    // 0x19671c: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x19671cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_196720:
    // 0x196720: 0x27b70020  addiu       $s7, $sp, 0x20
    ctx->pc = 0x196720u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_196724:
    // 0x196724: 0x26550650  addiu       $s5, $s2, 0x650
    ctx->pc = 0x196724u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 1616));
label_196728:
    // 0x196728: 0x26500620  addiu       $s0, $s2, 0x620
    ctx->pc = 0x196728u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 1568));
label_19672c:
    // 0x19672c: 0x26540640  addiu       $s4, $s2, 0x640
    ctx->pc = 0x19672cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 1600));
label_196730:
    // 0x196730: 0x26530630  addiu       $s3, $s2, 0x630
    ctx->pc = 0x196730u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 1584));
label_196734:
    // 0x196734: 0x26510610  addiu       $s1, $s2, 0x610
    ctx->pc = 0x196734u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 1552));
label_196738:
    // 0x196738: 0xc05ce40  jal         func_173900
label_19673c:
    if (ctx->pc == 0x19673Cu) {
        ctx->pc = 0x19673Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196738u;
        // 0x19673c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196740u;
        goto label_196740;
    }
    ctx->pc = 0x196738u;
    SET_GPR_U32(ctx, 31, 0x196740u);
    ctx->pc = 0x19673Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196738u;
    // 0x19673c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173900u, 0x196738u, 0x196740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196740u;
label_196740:
    // 0x196740: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x196740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_196744:
    // 0x196744: 0x5443003b  bnel        $v0, $v1, . + 4 + (0x3B << 2)
label_196748:
    if (ctx->pc == 0x196748u) {
        ctx->pc = 0x196748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196744u;
        // 0x196748: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19674Cu;
        goto label_19674c;
    }
    ctx->pc = 0x196744u;
    {
        const bool branch_taken_0x196744 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x196744) {
            ctx->pc = 0x196748u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x196744u;
            // 0x196748: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x196834u;
            goto label_196834;
        }
    }
    ctx->pc = 0x19674Cu;
label_19674c:
    // 0x19674c: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x19674cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
label_196750:
    // 0x196750: 0xc0a4bd4  jal         func_292F50
label_196754:
    if (ctx->pc == 0x196754u) {
        ctx->pc = 0x196754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196750u;
        // 0x196754: 0x24a464f0  addiu       $a0, $a1, 0x64F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 25840));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196758u;
        goto label_196758;
    }
    ctx->pc = 0x196750u;
    SET_GPR_U32(ctx, 31, 0x196758u);
    ctx->pc = 0x196754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196750u;
    // 0x196754: 0x24a464f0  addiu       $a0, $a1, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292F50u, 0x196750u, 0x196758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196758u;
label_196758:
    // 0x196758: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x196758u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_19675c:
    // 0x19675c: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x19675cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_196760:
    // 0x196760: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x196760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
label_196764:
    // 0x196764: 0xdba40030  lqc2        $vf4, 0x30($sp)
    ctx->pc = 0x196764u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_196768:
    // 0x196768: 0x4408a000  mfc1        $t0, $f20
    ctx->pc = 0x196768u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_19676c:
    // 0x19676c: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x19676cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_196770:
    // 0x196770: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x196770u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_196774:
    // 0x196774: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x196774u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
label_196778:
    // 0x196778: 0xdbc40000  lqc2        $vf4, 0x0($fp)
    ctx->pc = 0x196778u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
label_19677c:
    // 0x19677c: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x19677cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
label_196780:
    // 0x196780: 0xda04fff0  lqc2        $vf4, -0x10($s0)
    ctx->pc = 0x196780u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 4294967280)));
label_196784:
    // 0x196784: 0xdae50000  lqc2        $vf5, 0x0($s7)
    ctx->pc = 0x196784u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
label_196788:
    // 0x196788: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x196788u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_19678c:
    // 0x19678c: 0xfa04fff0  sqc2        $vf4, -0x10($s0)
    ctx->pc = 0x19678cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 4294967280), _mm_castps_si128(ctx->vu0_vf[4]));
label_196790:
    // 0x196790: 0xda840000  lqc2        $vf4, 0x0($s4)
    ctx->pc = 0x196790u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
label_196794:
    // 0x196794: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x196794u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
label_196798:
    // 0x196798: 0xdba40030  lqc2        $vf4, 0x30($sp)
    ctx->pc = 0x196798u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_19679c:
    // 0x19679c: 0x4408a000  mfc1        $t0, $f20
    ctx->pc = 0x19679cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_1967a0:
    // 0x1967a0: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1967a0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_1967a4:
    // 0x1967a4: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x1967a4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1967a8:
    // 0x1967a8: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x1967a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
label_1967ac:
    // 0x1967ac: 0xdbc40000  lqc2        $vf4, 0x0($fp)
    ctx->pc = 0x1967acu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
label_1967b0:
    // 0x1967b0: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1967b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
label_1967b4:
    // 0x1967b4: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x1967b4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_1967b8:
    // 0x1967b8: 0xdae50000  lqc2        $vf5, 0x0($s7)
    ctx->pc = 0x1967b8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
label_1967bc:
    // 0x1967bc: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1967bcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1967c0:
    // 0x1967c0: 0xfa040000  sqc2        $vf4, 0x0($s0)
    ctx->pc = 0x1967c0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_1967c4:
    // 0x1967c4: 0xc07df68  jal         func_1F7DA0
label_1967c8:
    if (ctx->pc == 0x1967C8u) {
        ctx->pc = 0x1967C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1967C4u;
        // 0x1967c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1967CCu;
        goto label_1967cc;
    }
    ctx->pc = 0x1967C4u;
    SET_GPR_U32(ctx, 31, 0x1967CCu);
    ctx->pc = 0x1967C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1967C4u;
    // 0x1967c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7DA0u, 0x1967C4u, 0x1967CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1967CCu;
label_1967cc:
    // 0x1967cc: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1967ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1967d0:
    // 0x1967d0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1967d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1967d4:
    // 0x1967d4: 0xc051dca  jal         func_147728
label_1967d8:
    if (ctx->pc == 0x1967D8u) {
        ctx->pc = 0x1967D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1967D4u;
        // 0x1967d8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1967DCu;
        goto label_1967dc;
    }
    ctx->pc = 0x1967D4u;
    SET_GPR_U32(ctx, 31, 0x1967DCu);
    ctx->pc = 0x1967D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1967D4u;
    // 0x1967d8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147728u, 0x1967D4u, 0x1967DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1967DCu;
label_1967dc:
    // 0x1967dc: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1967dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1967e0:
    // 0x1967e0: 0xc051f10  jal         func_147C40
label_1967e4:
    if (ctx->pc == 0x1967E4u) {
        ctx->pc = 0x1967E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1967E0u;
        // 0x1967e4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1967E8u;
        goto label_1967e8;
    }
    ctx->pc = 0x1967E0u;
    SET_GPR_U32(ctx, 31, 0x1967E8u);
    ctx->pc = 0x1967E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1967E0u;
    // 0x1967e4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C40u, 0x1967E0u, 0x1967E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1967E8u;
label_1967e8:
    // 0x1967e8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1967e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1967ec:
    // 0x1967ec: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x1967ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1967f0:
    // 0x1967f0: 0xc051efe  jal         func_147BF8
label_1967f4:
    if (ctx->pc == 0x1967F4u) {
        ctx->pc = 0x1967F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1967F0u;
        // 0x1967f4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1967F8u;
        goto label_1967f8;
    }
    ctx->pc = 0x1967F0u;
    SET_GPR_U32(ctx, 31, 0x1967F8u);
    ctx->pc = 0x1967F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1967F0u;
    // 0x1967f4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147BF8u, 0x1967F0u, 0x1967F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1967F8u;
label_1967f8:
    // 0x1967f8: 0x8e040040  lw          $a0, 0x40($s0)
    ctx->pc = 0x1967f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_1967fc:
    // 0x1967fc: 0xc051d4a  jal         func_147528
label_196800:
    if (ctx->pc == 0x196800u) {
        ctx->pc = 0x196800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1967FCu;
        // 0x196800: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196804u;
        goto label_196804;
    }
    ctx->pc = 0x1967FCu;
    SET_GPR_U32(ctx, 31, 0x196804u);
    ctx->pc = 0x196800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1967FCu;
    // 0x196800: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147528u, 0x1967FCu, 0x196804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196804u;
label_196804:
    // 0x196804: 0xc6000048  lwc1        $f0, 0x48($s0)
    ctx->pc = 0x196804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_196808:
    // 0x196808: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x196808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19680c:
    // 0x19680c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x19680cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_196810:
    // 0x196810: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x196810u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_196814:
    // 0x196814: 0x46150834  c.lt.s      $f1, $f21
    ctx->pc = 0x196814u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_196818:
    // 0x196818: 0x0  nop
    ctx->pc = 0x196818u;
    // NOP
label_19681c:
    // 0x19681c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_196820:
    if (ctx->pc == 0x196820u) {
        ctx->pc = 0x196820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19681Cu;
        // 0x196820: 0xe6010014  swc1        $f1, 0x14($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x196824u;
        goto label_196824;
    }
    ctx->pc = 0x19681Cu;
    {
        const bool branch_taken_0x19681c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x196820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19681Cu;
        // 0x196820: 0xe6010014  swc1        $f1, 0x14($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19681c) {
            ctx->pc = 0x196830u;
            goto label_196830;
        }
    }
    ctx->pc = 0x196824u;
label_196824:
    // 0x196824: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x196824u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_196828:
    // 0x196828: 0xc05bd90  jal         func_16F640
label_19682c:
    if (ctx->pc == 0x19682Cu) {
        ctx->pc = 0x19682Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196828u;
        // 0x19682c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196830u;
        goto label_196830;
    }
    ctx->pc = 0x196828u;
    SET_GPR_U32(ctx, 31, 0x196830u);
    ctx->pc = 0x19682Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196828u;
    // 0x19682c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F640u, 0x196828u, 0x196830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196830u;
label_196830:
    // 0x196830: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x196830u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_196834:
    // 0x196834: 0x26b50060  addiu       $s5, $s5, 0x60
    ctx->pc = 0x196834u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 96));
label_196838:
    // 0x196838: 0x26100060  addiu       $s0, $s0, 0x60
    ctx->pc = 0x196838u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
label_19683c:
    // 0x19683c: 0x26940060  addiu       $s4, $s4, 0x60
    ctx->pc = 0x19683cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 96));
label_196840:
    // 0x196840: 0x26730060  addiu       $s3, $s3, 0x60
    ctx->pc = 0x196840u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 96));
label_196844:
    // 0x196844: 0x2ac2000a  slti        $v0, $s6, 0xA
    ctx->pc = 0x196844u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)10) ? 1 : 0);
label_196848:
    // 0x196848: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_19684c:
    if (ctx->pc == 0x19684Cu) {
        ctx->pc = 0x19684Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196848u;
        // 0x19684c: 0x26310060  addiu       $s1, $s1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196850u;
        goto label_196850;
    }
    ctx->pc = 0x196848u;
    {
        const bool branch_taken_0x196848 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19684Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196848u;
        // 0x19684c: 0x26310060  addiu       $s1, $s1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196848) {
            ctx->pc = 0x19685Cu;
            goto label_19685c;
        }
    }
    ctx->pc = 0x196850u;
label_196850:
    // 0x196850: 0x924202b4  lbu         $v0, 0x2B4($s2)
    ctx->pc = 0x196850u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 692)));
label_196854:
    // 0x196854: 0x1456ffb8  bne         $v0, $s6, . + 4 + (-0x48 << 2)
label_196858:
    if (ctx->pc == 0x196858u) {
        ctx->pc = 0x19685Cu;
        goto label_19685c;
    }
    ctx->pc = 0x196854u;
    {
        const bool branch_taken_0x196854 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        if (branch_taken_0x196854) {
            ctx->pc = 0x196738u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_196738;
        }
    }
    ctx->pc = 0x19685Cu;
label_19685c:
    // 0x19685c: 0xc06ddb6  jal         func_1B76D8
label_196860:
    if (ctx->pc == 0x196860u) {
        ctx->pc = 0x196860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19685Cu;
        // 0x196860: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196864u;
        goto label_196864;
    }
    ctx->pc = 0x19685Cu;
    SET_GPR_U32(ctx, 31, 0x196864u);
    ctx->pc = 0x196860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19685Cu;
    // 0x196860: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B76D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B76D8u, 0x19685Cu, 0x196864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196864u;
label_196864:
    // 0x196864: 0x7bb00110  lq          $s0, 0x110($sp)
    ctx->pc = 0x196864u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_196868:
    // 0x196868: 0x7bb10100  lq          $s1, 0x100($sp)
    ctx->pc = 0x196868u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_19686c:
    // 0x19686c: 0x7bb200f0  lq          $s2, 0xF0($sp)
    ctx->pc = 0x19686cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_196870:
    // 0x196870: 0x7bb300e0  lq          $s3, 0xE0($sp)
    ctx->pc = 0x196870u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_196874:
    // 0x196874: 0x7bb400d0  lq          $s4, 0xD0($sp)
    ctx->pc = 0x196874u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_196878:
    // 0x196878: 0x7bb500c0  lq          $s5, 0xC0($sp)
    ctx->pc = 0x196878u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_19687c:
    // 0x19687c: 0x7bb600b0  lq          $s6, 0xB0($sp)
    ctx->pc = 0x19687cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_196880:
    // 0x196880: 0x7bb700a0  lq          $s7, 0xA0($sp)
    ctx->pc = 0x196880u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_196884:
    // 0x196884: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x196884u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_196888:
    // 0x196888: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x196888u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_19688c:
    // 0x19688c: 0xc7b50128  lwc1        $f21, 0x128($sp)
    ctx->pc = 0x19688cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_196890:
    // 0x196890: 0xc7b40120  lwc1        $f20, 0x120($sp)
    ctx->pc = 0x196890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_196894:
    // 0x196894: 0x3e00008  jr          $ra
label_196898:
    if (ctx->pc == 0x196898u) {
        ctx->pc = 0x196898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196894u;
        // 0x196898: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19689Cu;
        goto label_19689c;
    }
    ctx->pc = 0x196894u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x196898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196894u;
        // 0x196898: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x196894u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19689Cu;
label_19689c:
    // 0x19689c: 0x0  nop
    ctx->pc = 0x19689cu;
    // NOP
    ctx->pc = 0x1968a0u;
}
