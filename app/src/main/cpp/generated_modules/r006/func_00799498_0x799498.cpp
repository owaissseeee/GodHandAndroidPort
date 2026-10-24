#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r006_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r006
{
// Function: func_00799498
// Address: 0x799498 - 0x799be0
void func_00799498_0x799498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00799498_0x799498");
#endif

    switch (ctx->pc) {
        case 0x79950cu: goto label_79950c;
        case 0x799594u: goto label_799594;
        case 0x7995fcu: goto label_7995fc;
        case 0x799654u: goto label_799654;
        case 0x7996bcu: goto label_7996bc;
        case 0x799714u: goto label_799714;
        case 0x79977cu: goto label_79977c;
        case 0x7997d4u: goto label_7997d4;
        case 0x799820u: goto label_799820;
        case 0x799840u: goto label_799840;
        case 0x799870u: goto label_799870;
        case 0x799898u: goto label_799898;
        case 0x7998c8u: goto label_7998c8;
        case 0x7998f0u: goto label_7998f0;
        case 0x799920u: goto label_799920;
        case 0x799948u: goto label_799948;
        case 0x799978u: goto label_799978;
        case 0x7999a8u: goto label_7999a8;
        case 0x7999d0u: goto label_7999d0;
        case 0x799a00u: goto label_799a00;
        case 0x799a28u: goto label_799a28;
        case 0x799a58u: goto label_799a58;
        case 0x799a80u: goto label_799a80;
        case 0x799ab0u: goto label_799ab0;
        case 0x799ad8u: goto label_799ad8;
        case 0x799b08u: goto label_799b08;
        default: break;
    }

    ctx->pc = 0x799498u;

    // 0x799498: 0x3c03007a  lui         $v1, 0x7A
    ctx->pc = 0x799498u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)122 << 16));
    // 0x79949c: 0x27bdfda0  addiu       $sp, $sp, -0x260
    ctx->pc = 0x79949cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966688));
    // 0x7994a0: 0x2463a620  addiu       $v1, $v1, -0x59E0
    ctx->pc = 0x7994a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944288));
    // 0x7994a4: 0x7fb00250  sq          $s0, 0x250($sp)
    ctx->pc = 0x7994a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 592), GPR_VEC(ctx, 16));
    // 0x7994a8: 0x7fb10240  sq          $s1, 0x240($sp)
    ctx->pc = 0x7994a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 576), GPR_VEC(ctx, 17));
    // 0x7994ac: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x7994acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x7994b0: 0x7fb20230  sq          $s2, 0x230($sp)
    ctx->pc = 0x7994b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), GPR_VEC(ctx, 18));
    // 0x7994b4: 0x30620007  andi        $v0, $v1, 0x7
    ctx->pc = 0x7994b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x7994b8: 0x7fb30220  sq          $s3, 0x220($sp)
    ctx->pc = 0x7994b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), GPR_VEC(ctx, 19));
    // 0x7994bc: 0x7fb40210  sq          $s4, 0x210($sp)
    ctx->pc = 0x7994bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 528), GPR_VEC(ctx, 20));
    // 0x7994c0: 0x7fb50200  sq          $s5, 0x200($sp)
    ctx->pc = 0x7994c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 512), GPR_VEC(ctx, 21));
    // 0x7994c4: 0x7fb601f0  sq          $s6, 0x1F0($sp)
    ctx->pc = 0x7994c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), GPR_VEC(ctx, 22));
    // 0x7994c8: 0x7fb701e0  sq          $s7, 0x1E0($sp)
    ctx->pc = 0x7994c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), GPR_VEC(ctx, 23));
    // 0x7994cc: 0x7fbe01d0  sq          $fp, 0x1D0($sp)
    ctx->pc = 0x7994ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), GPR_VEC(ctx, 30));
    // 0x7994d0: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x7994D0u;
    {
        const bool branch_taken_0x7994d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7994D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994D0u;
        // 0x7994d4: 0xffbf01c0  sd          $ra, 0x1C0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 448), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7994d0) {
            ctx->pc = 0x799560u;
            goto label_799560;
        }
    }
    ctx->pc = 0x7994D8u;
    // 0x7994d8: 0x24640040  addiu       $a0, $v1, 0x40
    ctx->pc = 0x7994d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x7994dc: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x7994dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
    // 0x7994e0: 0x27b30070  addiu       $s3, $sp, 0x70
    ctx->pc = 0x7994e0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x7994e4: 0x3c08007a  lui         $t0, 0x7A
    ctx->pc = 0x7994e4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)122 << 16));
    // 0x7994e8: 0x27b200d0  addiu       $s2, $sp, 0xD0
    ctx->pc = 0x7994e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x7994ec: 0x3c09007a  lui         $t1, 0x7A
    ctx->pc = 0x7994ecu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)122 << 16));
    // 0x7994f0: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x7994f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x7994f4: 0x3c11007a  lui         $s1, 0x7A
    ctx->pc = 0x7994f4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)122 << 16));
    // 0x7994f8: 0x3c150075  lui         $s5, 0x75
    ctx->pc = 0x7994f8u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)117 << 16));
    // 0x7994fc: 0x3c10007a  lui         $s0, 0x7A
    ctx->pc = 0x7994fcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)122 << 16));
    // 0x799500: 0x3c14007a  lui         $s4, 0x7A
    ctx->pc = 0x799500u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)122 << 16));
    // 0x799504: 0x3c17007a  lui         $s7, 0x7A
    ctx->pc = 0x799504u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)122 << 16));
    // 0x799508: 0x3c1e007a  lui         $fp, 0x7A
    ctx->pc = 0x799508u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)122 << 16));
label_79950c:
    // 0x79950c: 0x68670007  ldl         $a3, 0x7($v1)
    ctx->pc = 0x79950cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x799510: 0x6c670000  ldr         $a3, 0x0($v1)
    ctx->pc = 0x799510u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x799514: 0x686a000f  ldl         $t2, 0xF($v1)
    ctx->pc = 0x799514u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x799518: 0x6c6a0008  ldr         $t2, 0x8($v1)
    ctx->pc = 0x799518u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x79951c: 0x686b0017  ldl         $t3, 0x17($v1)
    ctx->pc = 0x79951cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
    // 0x799520: 0x6c6b0010  ldr         $t3, 0x10($v1)
    ctx->pc = 0x799520u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
    // 0x799524: 0x686c001f  ldl         $t4, 0x1F($v1)
    ctx->pc = 0x799524u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x799528: 0x6c6c0018  ldr         $t4, 0x18($v1)
    ctx->pc = 0x799528u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x79952c: 0xb0c70007  sdl         $a3, 0x7($a2)
    ctx->pc = 0x79952cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x799530: 0xb4c70000  sdr         $a3, 0x0($a2)
    ctx->pc = 0x799530u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x799534: 0xb0ca000f  sdl         $t2, 0xF($a2)
    ctx->pc = 0x799534u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x799538: 0xb4ca0008  sdr         $t2, 0x8($a2)
    ctx->pc = 0x799538u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79953c: 0xb0cb0017  sdl         $t3, 0x17($a2)
    ctx->pc = 0x79953cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x799540: 0xb4cb0010  sdr         $t3, 0x10($a2)
    ctx->pc = 0x799540u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x799544: 0xb0cc001f  sdl         $t4, 0x1F($a2)
    ctx->pc = 0x799544u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x799548: 0xb4cc0018  sdr         $t4, 0x18($a2)
    ctx->pc = 0x799548u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79954c: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x79954cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x799550: 0x1464ffee  bne         $v1, $a0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x799550u;
    {
        const bool branch_taken_0x799550 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x799554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799550u;
        // 0x799554: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799550) {
            ctx->pc = 0x79950Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79950c;
        }
    }
    ctx->pc = 0x799558u;
    // 0x799558: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x799558u;
    {
        const bool branch_taken_0x799558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79955Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799558u;
        // 0x79955c: 0x2447a678  addiu       $a3, $v0, -0x5988 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944376));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799558) {
            ctx->pc = 0x7995C4u;
            goto label_7995c4;
        }
    }
    ctx->pc = 0x799560u;
label_799560:
    // 0x799560: 0x24640040  addiu       $a0, $v1, 0x40
    ctx->pc = 0x799560u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x799564: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x799564u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
    // 0x799568: 0x27b30070  addiu       $s3, $sp, 0x70
    ctx->pc = 0x799568u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x79956c: 0x3c08007a  lui         $t0, 0x7A
    ctx->pc = 0x79956cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)122 << 16));
    // 0x799570: 0x27b200d0  addiu       $s2, $sp, 0xD0
    ctx->pc = 0x799570u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x799574: 0x3c09007a  lui         $t1, 0x7A
    ctx->pc = 0x799574u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)122 << 16));
    // 0x799578: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x799578u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x79957c: 0x3c11007a  lui         $s1, 0x7A
    ctx->pc = 0x79957cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)122 << 16));
    // 0x799580: 0x3c150075  lui         $s5, 0x75
    ctx->pc = 0x799580u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)117 << 16));
    // 0x799584: 0x3c10007a  lui         $s0, 0x7A
    ctx->pc = 0x799584u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)122 << 16));
    // 0x799588: 0x3c14007a  lui         $s4, 0x7A
    ctx->pc = 0x799588u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)122 << 16));
    // 0x79958c: 0x3c17007a  lui         $s7, 0x7A
    ctx->pc = 0x79958cu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)122 << 16));
    // 0x799590: 0x3c1e007a  lui         $fp, 0x7A
    ctx->pc = 0x799590u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)122 << 16));
label_799594:
    // 0x799594: 0xdc6d0000  ld          $t5, 0x0($v1)
    ctx->pc = 0x799594u;
    SET_GPR_U64(ctx, 13, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x799598: 0xdc670008  ld          $a3, 0x8($v1)
    ctx->pc = 0x799598u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x79959c: 0xdc6a0010  ld          $t2, 0x10($v1)
    ctx->pc = 0x79959cu;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x7995a0: 0xdc6b0018  ld          $t3, 0x18($v1)
    ctx->pc = 0x7995a0u;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x7995a4: 0xfccd0000  sd          $t5, 0x0($a2)
    ctx->pc = 0x7995a4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 13));
    // 0x7995a8: 0xfcc70008  sd          $a3, 0x8($a2)
    ctx->pc = 0x7995a8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 7));
    // 0x7995ac: 0xfcca0010  sd          $t2, 0x10($a2)
    ctx->pc = 0x7995acu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 10));
    // 0x7995b0: 0xfccb0018  sd          $t3, 0x18($a2)
    ctx->pc = 0x7995b0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 11));
    // 0x7995b4: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x7995b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x7995b8: 0x1464fff6  bne         $v1, $a0, . + 4 + (-0xA << 2)
    ctx->pc = 0x7995B8u;
    {
        const bool branch_taken_0x7995b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x7995BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995B8u;
        // 0x7995bc: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7995b8) {
            ctx->pc = 0x799594u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799594;
        }
    }
    ctx->pc = 0x7995C0u;
    // 0x7995c0: 0x2447a678  addiu       $a3, $v0, -0x5988
    ctx->pc = 0x7995c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944376));
label_7995c4:
    // 0x7995c4: 0x686c0007  ldl         $t4, 0x7($v1)
    ctx->pc = 0x7995c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x7995c8: 0x6c6c0000  ldr         $t4, 0x0($v1)
    ctx->pc = 0x7995c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x7995cc: 0x686d000f  ldl         $t5, 0xF($v1)
    ctx->pc = 0x7995ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem << shift)); }
    // 0x7995d0: 0x6c6d0008  ldr         $t5, 0x8($v1)
    ctx->pc = 0x7995d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem >> shift)); }
    // 0x7995d4: 0x8c6a0010  lw          $t2, 0x10($v1)
    ctx->pc = 0x7995d4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x7995d8: 0xb0cc0007  sdl         $t4, 0x7($a2)
    ctx->pc = 0x7995d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7995dc: 0xb4cc0000  sdr         $t4, 0x0($a2)
    ctx->pc = 0x7995dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7995e0: 0xb0cd000f  sdl         $t5, 0xF($a2)
    ctx->pc = 0x7995e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7995e4: 0xb4cd0008  sdr         $t5, 0x8($a2)
    ctx->pc = 0x7995e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7995e8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x7995e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7995ec: 0x30e20007  andi        $v0, $a3, 0x7
    ctx->pc = 0x7995ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)7);
    // 0x7995f0: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x7995F0u;
    {
        const bool branch_taken_0x7995f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7995F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995F0u;
        // 0x7995f4: 0xacca0010  sw          $t2, 0x10($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7995f0) {
            ctx->pc = 0x799650u;
            goto label_799650;
        }
    }
    ctx->pc = 0x7995F8u;
    // 0x7995f8: 0x24e20040  addiu       $v0, $a3, 0x40
    ctx->pc = 0x7995f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 64));
label_7995fc:
    // 0x7995fc: 0x68ec0007  ldl         $t4, 0x7($a3)
    ctx->pc = 0x7995fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x799600: 0x6cec0000  ldr         $t4, 0x0($a3)
    ctx->pc = 0x799600u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x799604: 0x68ed000f  ldl         $t5, 0xF($a3)
    ctx->pc = 0x799604u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem << shift)); }
    // 0x799608: 0x6ced0008  ldr         $t5, 0x8($a3)
    ctx->pc = 0x799608u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem >> shift)); }
    // 0x79960c: 0x68e30017  ldl         $v1, 0x17($a3)
    ctx->pc = 0x79960cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x799610: 0x6ce30010  ldr         $v1, 0x10($a3)
    ctx->pc = 0x799610u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x799614: 0x68e6001f  ldl         $a2, 0x1F($a3)
    ctx->pc = 0x799614u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x799618: 0x6ce60018  ldr         $a2, 0x18($a3)
    ctx->pc = 0x799618u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x79961c: 0xb08c0007  sdl         $t4, 0x7($a0)
    ctx->pc = 0x79961cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x799620: 0xb48c0000  sdr         $t4, 0x0($a0)
    ctx->pc = 0x799620u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x799624: 0xb08d000f  sdl         $t5, 0xF($a0)
    ctx->pc = 0x799624u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x799628: 0xb48d0008  sdr         $t5, 0x8($a0)
    ctx->pc = 0x799628u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79962c: 0xb0830017  sdl         $v1, 0x17($a0)
    ctx->pc = 0x79962cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x799630: 0xb4830010  sdr         $v1, 0x10($a0)
    ctx->pc = 0x799630u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x799634: 0xb086001f  sdl         $a2, 0x1F($a0)
    ctx->pc = 0x799634u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x799638: 0xb4860018  sdr         $a2, 0x18($a0)
    ctx->pc = 0x799638u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79963c: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x79963cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x799640: 0x14e2ffee  bne         $a3, $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x799640u;
    {
        const bool branch_taken_0x799640 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x799644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799640u;
        // 0x799644: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799640) {
            ctx->pc = 0x7995FCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7995fc;
        }
    }
    ctx->pc = 0x799648u;
    // 0x799648: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x799648u;
    {
        const bool branch_taken_0x799648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79964Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799648u;
        // 0x79964c: 0x2508a6d0  addiu       $t0, $t0, -0x5930 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294944464));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799648) {
            ctx->pc = 0x799684u;
            goto label_799684;
        }
    }
    ctx->pc = 0x799650u;
label_799650:
    // 0x799650: 0x24e20040  addiu       $v0, $a3, 0x40
    ctx->pc = 0x799650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 64));
label_799654:
    // 0x799654: 0xdcea0000  ld          $t2, 0x0($a3)
    ctx->pc = 0x799654u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x799658: 0xdceb0008  ld          $t3, 0x8($a3)
    ctx->pc = 0x799658u;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x79965c: 0xdcec0010  ld          $t4, 0x10($a3)
    ctx->pc = 0x79965cu;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x799660: 0xdced0018  ld          $t5, 0x18($a3)
    ctx->pc = 0x799660u;
    SET_GPR_U64(ctx, 13, READ64(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x799664: 0xfc8a0000  sd          $t2, 0x0($a0)
    ctx->pc = 0x799664u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 10));
    // 0x799668: 0xfc8b0008  sd          $t3, 0x8($a0)
    ctx->pc = 0x799668u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 11));
    // 0x79966c: 0xfc8c0010  sd          $t4, 0x10($a0)
    ctx->pc = 0x79966cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 12));
    // 0x799670: 0xfc8d0018  sd          $t5, 0x18($a0)
    ctx->pc = 0x799670u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 13));
    // 0x799674: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x799674u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x799678: 0x14e2fff6  bne         $a3, $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x799678u;
    {
        const bool branch_taken_0x799678 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x79967Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799678u;
        // 0x79967c: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799678) {
            ctx->pc = 0x799654u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799654;
        }
    }
    ctx->pc = 0x799680u;
    // 0x799680: 0x2508a6d0  addiu       $t0, $t0, -0x5930
    ctx->pc = 0x799680u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294944464));
label_799684:
    // 0x799684: 0x68e30007  ldl         $v1, 0x7($a3)
    ctx->pc = 0x799684u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x799688: 0x6ce30000  ldr         $v1, 0x0($a3)
    ctx->pc = 0x799688u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x79968c: 0x68ea000f  ldl         $t2, 0xF($a3)
    ctx->pc = 0x79968cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x799690: 0x6cea0008  ldr         $t2, 0x8($a3)
    ctx->pc = 0x799690u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x799694: 0x8ceb0010  lw          $t3, 0x10($a3)
    ctx->pc = 0x799694u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x799698: 0xb0830007  sdl         $v1, 0x7($a0)
    ctx->pc = 0x799698u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79969c: 0xb4830000  sdr         $v1, 0x0($a0)
    ctx->pc = 0x79969cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7996a0: 0xb08a000f  sdl         $t2, 0xF($a0)
    ctx->pc = 0x7996a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7996a4: 0xb48a0008  sdr         $t2, 0x8($a0)
    ctx->pc = 0x7996a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7996a8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x7996a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7996ac: 0x31020007  andi        $v0, $t0, 0x7
    ctx->pc = 0x7996acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)7);
    // 0x7996b0: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x7996B0u;
    {
        const bool branch_taken_0x7996b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7996B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996B0u;
        // 0x7996b4: 0xac8b0010  sw          $t3, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7996b0) {
            ctx->pc = 0x799710u;
            goto label_799710;
        }
    }
    ctx->pc = 0x7996B8u;
    // 0x7996b8: 0x25020040  addiu       $v0, $t0, 0x40
    ctx->pc = 0x7996b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 64));
label_7996bc:
    // 0x7996bc: 0x690d0007  ldl         $t5, 0x7($t0)
    ctx->pc = 0x7996bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem << shift)); }
    // 0x7996c0: 0x6d0d0000  ldr         $t5, 0x0($t0)
    ctx->pc = 0x7996c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem >> shift)); }
    // 0x7996c4: 0x6903000f  ldl         $v1, 0xF($t0)
    ctx->pc = 0x7996c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x7996c8: 0x6d030008  ldr         $v1, 0x8($t0)
    ctx->pc = 0x7996c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x7996cc: 0x69040017  ldl         $a0, 0x17($t0)
    ctx->pc = 0x7996ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x7996d0: 0x6d040010  ldr         $a0, 0x10($t0)
    ctx->pc = 0x7996d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x7996d4: 0x6907001f  ldl         $a3, 0x1F($t0)
    ctx->pc = 0x7996d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x7996d8: 0x6d070018  ldr         $a3, 0x18($t0)
    ctx->pc = 0x7996d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x7996dc: 0xb0cd0007  sdl         $t5, 0x7($a2)
    ctx->pc = 0x7996dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7996e0: 0xb4cd0000  sdr         $t5, 0x0($a2)
    ctx->pc = 0x7996e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7996e4: 0xb0c3000f  sdl         $v1, 0xF($a2)
    ctx->pc = 0x7996e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7996e8: 0xb4c30008  sdr         $v1, 0x8($a2)
    ctx->pc = 0x7996e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7996ec: 0xb0c40017  sdl         $a0, 0x17($a2)
    ctx->pc = 0x7996ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7996f0: 0xb4c40010  sdr         $a0, 0x10($a2)
    ctx->pc = 0x7996f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7996f4: 0xb0c7001f  sdl         $a3, 0x1F($a2)
    ctx->pc = 0x7996f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7996f8: 0xb4c70018  sdr         $a3, 0x18($a2)
    ctx->pc = 0x7996f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7996fc: 0x25080020  addiu       $t0, $t0, 0x20
    ctx->pc = 0x7996fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
    // 0x799700: 0x1502ffee  bne         $t0, $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x799700u;
    {
        const bool branch_taken_0x799700 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        ctx->pc = 0x799704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799700u;
        // 0x799704: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799700) {
            ctx->pc = 0x7996BCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7996bc;
        }
    }
    ctx->pc = 0x799708u;
    // 0x799708: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x799708u;
    {
        const bool branch_taken_0x799708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79970Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799708u;
        // 0x79970c: 0x2524a728  addiu       $a0, $t1, -0x58D8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 4294944552));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799708) {
            ctx->pc = 0x799744u;
            goto label_799744;
        }
    }
    ctx->pc = 0x799710u;
label_799710:
    // 0x799710: 0x25020040  addiu       $v0, $t0, 0x40
    ctx->pc = 0x799710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 64));
label_799714:
    // 0x799714: 0xdd0a0000  ld          $t2, 0x0($t0)
    ctx->pc = 0x799714u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x799718: 0xdd0b0008  ld          $t3, 0x8($t0)
    ctx->pc = 0x799718u;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x79971c: 0xdd0c0010  ld          $t4, 0x10($t0)
    ctx->pc = 0x79971cu;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x799720: 0xdd0d0018  ld          $t5, 0x18($t0)
    ctx->pc = 0x799720u;
    SET_GPR_U64(ctx, 13, READ64(ADD32(GPR_U32(ctx, 8), 24)));
    // 0x799724: 0xfcca0000  sd          $t2, 0x0($a2)
    ctx->pc = 0x799724u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 10));
    // 0x799728: 0xfccb0008  sd          $t3, 0x8($a2)
    ctx->pc = 0x799728u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 11));
    // 0x79972c: 0xfccc0010  sd          $t4, 0x10($a2)
    ctx->pc = 0x79972cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 12));
    // 0x799730: 0xfccd0018  sd          $t5, 0x18($a2)
    ctx->pc = 0x799730u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 13));
    // 0x799734: 0x25080020  addiu       $t0, $t0, 0x20
    ctx->pc = 0x799734u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
    // 0x799738: 0x1502fff6  bne         $t0, $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x799738u;
    {
        const bool branch_taken_0x799738 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        ctx->pc = 0x79973Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799738u;
        // 0x79973c: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799738) {
            ctx->pc = 0x799714u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799714;
        }
    }
    ctx->pc = 0x799740u;
    // 0x799740: 0x2524a728  addiu       $a0, $t1, -0x58D8
    ctx->pc = 0x799740u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 4294944552));
label_799744:
    // 0x799744: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x799744u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799748: 0x69070007  ldl         $a3, 0x7($t0)
    ctx->pc = 0x799748u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x79974c: 0x6d070000  ldr         $a3, 0x0($t0)
    ctx->pc = 0x79974cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x799750: 0x6909000f  ldl         $t1, 0xF($t0)
    ctx->pc = 0x799750u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x799754: 0x6d090008  ldr         $t1, 0x8($t0)
    ctx->pc = 0x799754u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x799758: 0x8d0a0010  lw          $t2, 0x10($t0)
    ctx->pc = 0x799758u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x79975c: 0xb0c70007  sdl         $a3, 0x7($a2)
    ctx->pc = 0x79975cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x799760: 0xb4c70000  sdr         $a3, 0x0($a2)
    ctx->pc = 0x799760u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x799764: 0xb0c9000f  sdl         $t1, 0xF($a2)
    ctx->pc = 0x799764u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x799768: 0xb4c90008  sdr         $t1, 0x8($a2)
    ctx->pc = 0x799768u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79976c: 0x30820007  andi        $v0, $a0, 0x7
    ctx->pc = 0x79976cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)7);
    // 0x799770: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x799770u;
    {
        const bool branch_taken_0x799770 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799770u;
        // 0x799774: 0xacca0010  sw          $t2, 0x10($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799770) {
            ctx->pc = 0x7997D0u;
            goto label_7997d0;
        }
    }
    ctx->pc = 0x799778u;
    // 0x799778: 0x24820080  addiu       $v0, $a0, 0x80
    ctx->pc = 0x799778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
label_79977c:
    // 0x79977c: 0x688c0007  ldl         $t4, 0x7($a0)
    ctx->pc = 0x79977cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x799780: 0x6c8c0000  ldr         $t4, 0x0($a0)
    ctx->pc = 0x799780u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x799784: 0x688d000f  ldl         $t5, 0xF($a0)
    ctx->pc = 0x799784u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem << shift)); }
    // 0x799788: 0x6c8d0008  ldr         $t5, 0x8($a0)
    ctx->pc = 0x799788u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem >> shift)); }
    // 0x79978c: 0x68860017  ldl         $a2, 0x17($a0)
    ctx->pc = 0x79978cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x799790: 0x6c860010  ldr         $a2, 0x10($a0)
    ctx->pc = 0x799790u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x799794: 0x6887001f  ldl         $a3, 0x1F($a0)
    ctx->pc = 0x799794u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x799798: 0x6c870018  ldr         $a3, 0x18($a0)
    ctx->pc = 0x799798u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x79979c: 0xb06c0007  sdl         $t4, 0x7($v1)
    ctx->pc = 0x79979cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7997a0: 0xb46c0000  sdr         $t4, 0x0($v1)
    ctx->pc = 0x7997a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7997a4: 0xb06d000f  sdl         $t5, 0xF($v1)
    ctx->pc = 0x7997a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7997a8: 0xb46d0008  sdr         $t5, 0x8($v1)
    ctx->pc = 0x7997a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7997ac: 0xb0660017  sdl         $a2, 0x17($v1)
    ctx->pc = 0x7997acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7997b0: 0xb4660010  sdr         $a2, 0x10($v1)
    ctx->pc = 0x7997b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7997b4: 0xb067001f  sdl         $a3, 0x1F($v1)
    ctx->pc = 0x7997b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7997b8: 0xb4670018  sdr         $a3, 0x18($v1)
    ctx->pc = 0x7997b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7997bc: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x7997bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x7997c0: 0x1482ffee  bne         $a0, $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x7997C0u;
    {
        const bool branch_taken_0x7997c0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x7997C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7997C0u;
        // 0x7997c4: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7997c0) {
            ctx->pc = 0x79977Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79977c;
        }
    }
    ctx->pc = 0x7997C8u;
    // 0x7997c8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x7997C8u;
    {
        const bool branch_taken_0x7997c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x7997c8) {
            ctx->pc = 0x799800u;
            goto label_799800;
        }
    }
    ctx->pc = 0x7997D0u;
label_7997d0:
    // 0x7997d0: 0x24820080  addiu       $v0, $a0, 0x80
    ctx->pc = 0x7997d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
label_7997d4:
    // 0x7997d4: 0xdc880000  ld          $t0, 0x0($a0)
    ctx->pc = 0x7997d4u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x7997d8: 0xdc890008  ld          $t1, 0x8($a0)
    ctx->pc = 0x7997d8u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x7997dc: 0xdc8a0010  ld          $t2, 0x10($a0)
    ctx->pc = 0x7997dcu;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x7997e0: 0xdc8b0018  ld          $t3, 0x18($a0)
    ctx->pc = 0x7997e0u;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x7997e4: 0xfc680000  sd          $t0, 0x0($v1)
    ctx->pc = 0x7997e4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 8));
    // 0x7997e8: 0xfc690008  sd          $t1, 0x8($v1)
    ctx->pc = 0x7997e8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 9));
    // 0x7997ec: 0xfc6a0010  sd          $t2, 0x10($v1)
    ctx->pc = 0x7997ecu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 10));
    // 0x7997f0: 0xfc6b0018  sd          $t3, 0x18($v1)
    ctx->pc = 0x7997f0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 11));
    // 0x7997f4: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x7997f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x7997f8: 0x1482fff6  bne         $a0, $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x7997F8u;
    {
        const bool branch_taken_0x7997f8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x7997FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7997F8u;
        // 0x7997fc: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7997f8) {
            ctx->pc = 0x7997D4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7997d4;
        }
    }
    ctx->pc = 0x799800u;
label_799800:
    // 0x799800: 0x688c0007  ldl         $t4, 0x7($a0)
    ctx->pc = 0x799800u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x799804: 0x6c8c0000  ldr         $t4, 0x0($a0)
    ctx->pc = 0x799804u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x799808: 0x8c8d0008  lw          $t5, 0x8($a0)
    ctx->pc = 0x799808u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x79980c: 0xb06c0007  sdl         $t4, 0x7($v1)
    ctx->pc = 0x79980cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x799810: 0xb46c0000  sdr         $t4, 0x0($v1)
    ctx->pc = 0x799810u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x799814: 0xac6d0008  sw          $t5, 0x8($v1)
    ctx->pc = 0x799814u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 13));
    // 0x799818: 0xc078c86  jal         func_1E3218
    ctx->pc = 0x799818u;
    SET_GPR_U32(ctx, 31, 0x799820u);
    ctx->pc = 0x79981Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799818u;
    // 0x79981c: 0x8e24ab00  lw          $a0, -0x5500($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294945536)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3218u, 0x799818u, 0x799820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799820u;
label_799820:
    // 0x799820: 0x8202a7b8  lb          $v0, -0x5848($s0)
    ctx->pc = 0x799820u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4294944696)));
    // 0x799824: 0x26a84c38  addiu       $t0, $s5, 0x4C38
    ctx->pc = 0x799824u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 21), 19512));
    // 0x799828: 0x2603a7b8  addiu       $v1, $s0, -0x5848
    ctx->pc = 0x799828u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294944696));
    // 0x79982c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79982cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799830: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x799830u;
    {
        const bool branch_taken_0x799830 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799830u;
        // 0x799834: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799830) {
            ctx->pc = 0x799868u;
            goto label_799868;
        }
    }
    ctx->pc = 0x799838u;
    // 0x799838: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x799838u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79983c: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79983cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_799840:
    // 0x799840: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x799840u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x799844: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x799844u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x799848: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x799848u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x79984c: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x79984cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x799850: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x799850u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x799854: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x799854u;
    {
        const bool branch_taken_0x799854 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799854u;
        // 0x799858: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799854) {
            ctx->pc = 0x799868u;
            goto label_799868;
        }
    }
    ctx->pc = 0x79985Cu;
    // 0x79985c: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79985cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x799860: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x799860u;
    {
        const bool branch_taken_0x799860 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799860) {
            ctx->pc = 0x799864u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799860u;
            // 0x799864: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799840u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799840;
        }
    }
    ctx->pc = 0x799868u;
label_799868:
    // 0x799868: 0xc0b1508  jal         func_2C5420
    ctx->pc = 0x799868u;
    SET_GPR_U32(ctx, 31, 0x799870u);
    ctx->pc = 0x79986Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799868u;
    // 0x79986c: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5420u, 0x799868u, 0x799870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799870u;
label_799870:
    // 0x799870: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x799870u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799874: 0x26a84c38  addiu       $t0, $s5, 0x4C38
    ctx->pc = 0x799874u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 21), 19512));
    // 0x799878: 0x8282a7c0  lb          $v0, -0x5840($s4)
    ctx->pc = 0x799878u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 4294944704)));
    // 0x79987c: 0x2683a7c0  addiu       $v1, $s4, -0x5840
    ctx->pc = 0x79987cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294944704));
    // 0x799880: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799880u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799884: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x799884u;
    {
        const bool branch_taken_0x799884 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799884u;
        // 0x799888: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799884) {
            ctx->pc = 0x7998C0u;
            goto label_7998c0;
        }
    }
    ctx->pc = 0x79988Cu;
    // 0x79988c: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x79988cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799890: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x799890u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x799894: 0x0  nop
    ctx->pc = 0x799894u;
    // NOP
label_799898:
    // 0x799898: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x799898u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x79989c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x79989cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x7998a0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x7998a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x7998a4: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x7998a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x7998a8: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x7998a8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x7998ac: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x7998ACu;
    {
        const bool branch_taken_0x7998ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x7998B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7998ACu;
        // 0x7998b0: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7998ac) {
            ctx->pc = 0x7998C0u;
            goto label_7998c0;
        }
    }
    ctx->pc = 0x7998B4u;
    // 0x7998b4: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x7998b4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x7998b8: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x7998B8u;
    {
        const bool branch_taken_0x7998b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7998b8) {
            ctx->pc = 0x7998BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7998B8u;
            // 0x7998bc: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799898u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799898;
        }
    }
    ctx->pc = 0x7998C0u;
label_7998c0:
    // 0x7998c0: 0xc0b1508  jal         func_2C5420
    ctx->pc = 0x7998C0u;
    SET_GPR_U32(ctx, 31, 0x7998C8u);
    ctx->pc = 0x7998C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7998C0u;
    // 0x7998c4: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5420u, 0x7998C0u, 0x7998C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7998C8u;
label_7998c8:
    // 0x7998c8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x7998c8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7998cc: 0x26a84c38  addiu       $t0, $s5, 0x4C38
    ctx->pc = 0x7998ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 21), 19512));
    // 0x7998d0: 0x82e2a7c8  lb          $v0, -0x5838($s7)
    ctx->pc = 0x7998d0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 23), 4294944712)));
    // 0x7998d4: 0x26e3a7c8  addiu       $v1, $s7, -0x5838
    ctx->pc = 0x7998d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4294944712));
    // 0x7998d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7998d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7998dc: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x7998DCu;
    {
        const bool branch_taken_0x7998dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7998E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7998DCu;
        // 0x7998e0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7998dc) {
            ctx->pc = 0x799918u;
            goto label_799918;
        }
    }
    ctx->pc = 0x7998E4u;
    // 0x7998e4: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x7998e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7998e8: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x7998e8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x7998ec: 0x0  nop
    ctx->pc = 0x7998ecu;
    // NOP
label_7998f0:
    // 0x7998f0: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x7998f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x7998f4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x7998f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x7998f8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x7998f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x7998fc: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x7998fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x799900: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x799900u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x799904: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x799904u;
    {
        const bool branch_taken_0x799904 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799904u;
        // 0x799908: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799904) {
            ctx->pc = 0x799918u;
            goto label_799918;
        }
    }
    ctx->pc = 0x79990Cu;
    // 0x79990c: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79990cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x799910: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x799910u;
    {
        const bool branch_taken_0x799910 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799910) {
            ctx->pc = 0x799914u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799910u;
            // 0x799914: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7998F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7998f0;
        }
    }
    ctx->pc = 0x799918u;
label_799918:
    // 0x799918: 0xc0b1508  jal         func_2C5420
    ctx->pc = 0x799918u;
    SET_GPR_U32(ctx, 31, 0x799920u);
    ctx->pc = 0x79991Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799918u;
    // 0x79991c: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5420u, 0x799918u, 0x799920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799920u;
label_799920:
    // 0x799920: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x799920u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799924: 0x26a84c38  addiu       $t0, $s5, 0x4C38
    ctx->pc = 0x799924u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 21), 19512));
    // 0x799928: 0x83c2a7d0  lb          $v0, -0x5830($fp)
    ctx->pc = 0x799928u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 30), 4294944720)));
    // 0x79992c: 0x27c3a7d0  addiu       $v1, $fp, -0x5830
    ctx->pc = 0x79992cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 4294944720));
    // 0x799930: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799930u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799934: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x799934u;
    {
        const bool branch_taken_0x799934 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799934u;
        // 0x799938: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799934) {
            ctx->pc = 0x799970u;
            goto label_799970;
        }
    }
    ctx->pc = 0x79993Cu;
    // 0x79993c: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x79993cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799940: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x799940u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x799944: 0x0  nop
    ctx->pc = 0x799944u;
    // NOP
label_799948:
    // 0x799948: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x799948u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x79994c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x79994cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x799950: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x799950u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x799954: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x799954u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x799958: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x799958u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x79995c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x79995Cu;
    {
        const bool branch_taken_0x79995c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79995Cu;
        // 0x799960: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79995c) {
            ctx->pc = 0x799970u;
            goto label_799970;
        }
    }
    ctx->pc = 0x799964u;
    // 0x799964: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x799964u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x799968: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x799968u;
    {
        const bool branch_taken_0x799968 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799968) {
            ctx->pc = 0x79996Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799968u;
            // 0x79996c: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799948u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799948;
        }
    }
    ctx->pc = 0x799970u;
label_799970:
    // 0x799970: 0xc0b1508  jal         func_2C5420
    ctx->pc = 0x799970u;
    SET_GPR_U32(ctx, 31, 0x799978u);
    ctx->pc = 0x799974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799970u;
    // 0x799974: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5420u, 0x799970u, 0x799978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799978u;
label_799978:
    // 0x799978: 0x24030015  addiu       $v1, $zero, 0x15
    ctx->pc = 0x799978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x79997c: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x79997cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x799980: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x799980u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x799984: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x799984u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799988: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799988u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79998c: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x79998cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x799990: 0x8e24ab00  lw          $a0, -0x5500($s1)
    ctx->pc = 0x799990u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294945536)));
    // 0x799994: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x799994u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799998: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x799998u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79999c: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x79999cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7999a0: 0xc077f12  jal         func_1DFC48
    ctx->pc = 0x7999A0u;
    SET_GPR_U32(ctx, 31, 0x7999A8u);
    ctx->pc = 0x7999A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7999A0u;
    // 0x7999a4: 0x240582d  daddu       $t3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DFC48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFC48u, 0x7999A0u, 0x7999A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7999A8u;
label_7999a8:
    // 0x7999a8: 0x3c07007a  lui         $a3, 0x7A
    ctx->pc = 0x7999a8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)122 << 16));
    // 0x7999ac: 0x26a84c38  addiu       $t0, $s5, 0x4C38
    ctx->pc = 0x7999acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 21), 19512));
    // 0x7999b0: 0x24e3a7d8  addiu       $v1, $a3, -0x5828
    ctx->pc = 0x7999b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294944728));
    // 0x7999b4: 0x80e2a7d8  lb          $v0, -0x5828($a3)
    ctx->pc = 0x7999b4u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x79A7D8u));
    // 0x7999b8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7999b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7999bc: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x7999BCu;
    {
        const bool branch_taken_0x7999bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7999C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7999BCu;
        // 0x7999c0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7999bc) {
            ctx->pc = 0x7999F8u;
            goto label_7999f8;
        }
    }
    ctx->pc = 0x7999C4u;
    // 0x7999c4: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x7999c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7999c8: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x7999c8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x7999cc: 0x0  nop
    ctx->pc = 0x7999ccu;
    // NOP
label_7999d0:
    // 0x7999d0: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x7999d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x7999d4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x7999d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x7999d8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x7999d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x7999dc: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x7999dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x7999e0: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x7999e0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x7999e4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x7999E4u;
    {
        const bool branch_taken_0x7999e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x7999E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7999E4u;
        // 0x7999e8: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7999e4) {
            ctx->pc = 0x7999F8u;
            goto label_7999f8;
        }
    }
    ctx->pc = 0x7999ECu;
    // 0x7999ec: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x7999ecu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x7999f0: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x7999F0u;
    {
        const bool branch_taken_0x7999f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7999f0) {
            ctx->pc = 0x7999F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7999F0u;
            // 0x7999f4: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7999D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7999d0;
        }
    }
    ctx->pc = 0x7999F8u;
label_7999f8:
    // 0x7999f8: 0xc0b1508  jal         func_2C5420
    ctx->pc = 0x7999F8u;
    SET_GPR_U32(ctx, 31, 0x799A00u);
    ctx->pc = 0x7999FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7999F8u;
    // 0x7999fc: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5420u, 0x7999F8u, 0x799A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A00u;
label_799a00:
    // 0x799a00: 0x3c09007a  lui         $t1, 0x7A
    ctx->pc = 0x799a00u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)122 << 16));
    // 0x799a04: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x799a04u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799a08: 0x8122a7e0  lb          $v0, -0x5820($t1)
    ctx->pc = 0x799a08u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x79A7E0u));
    // 0x799a0c: 0x26a84c38  addiu       $t0, $s5, 0x4C38
    ctx->pc = 0x799a0cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 21), 19512));
    // 0x799a10: 0x2523a7e0  addiu       $v1, $t1, -0x5820
    ctx->pc = 0x799a10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 4294944736));
    // 0x799a14: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799a14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799a18: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x799A18u;
    {
        const bool branch_taken_0x799a18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A18u;
        // 0x799a1c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799a18) {
            ctx->pc = 0x799A50u;
            goto label_799a50;
        }
    }
    ctx->pc = 0x799A20u;
    // 0x799a20: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x799a20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799a24: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x799a24u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_799a28:
    // 0x799a28: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x799a28u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x799a2c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x799a2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x799a30: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x799a30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x799a34: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x799a34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x799a38: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x799a38u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x799a3c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x799A3Cu;
    {
        const bool branch_taken_0x799a3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A3Cu;
        // 0x799a40: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799a3c) {
            ctx->pc = 0x799A50u;
            goto label_799a50;
        }
    }
    ctx->pc = 0x799A44u;
    // 0x799a44: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x799a44u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x799a48: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x799A48u;
    {
        const bool branch_taken_0x799a48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799a48) {
            ctx->pc = 0x799A4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799A48u;
            // 0x799a4c: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799A28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799a28;
        }
    }
    ctx->pc = 0x799A50u;
label_799a50:
    // 0x799a50: 0xc0b1508  jal         func_2C5420
    ctx->pc = 0x799A50u;
    SET_GPR_U32(ctx, 31, 0x799A58u);
    ctx->pc = 0x799A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A50u;
    // 0x799a54: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5420u, 0x799A50u, 0x799A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A58u;
label_799a58:
    // 0x799a58: 0x3c0a007a  lui         $t2, 0x7A
    ctx->pc = 0x799a58u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)122 << 16));
    // 0x799a5c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x799a5cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799a60: 0x8142a7f0  lb          $v0, -0x5810($t2)
    ctx->pc = 0x799a60u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x79A7F0u));
    // 0x799a64: 0x26a84c38  addiu       $t0, $s5, 0x4C38
    ctx->pc = 0x799a64u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 21), 19512));
    // 0x799a68: 0x2543a7f0  addiu       $v1, $t2, -0x5810
    ctx->pc = 0x799a68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 4294944752));
    // 0x799a6c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799a6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799a70: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x799A70u;
    {
        const bool branch_taken_0x799a70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A70u;
        // 0x799a74: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799a70) {
            ctx->pc = 0x799AA8u;
            goto label_799aa8;
        }
    }
    ctx->pc = 0x799A78u;
    // 0x799a78: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x799a78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799a7c: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x799a7cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_799a80:
    // 0x799a80: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x799a80u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x799a84: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x799a84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x799a88: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x799a88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x799a8c: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x799a8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x799a90: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x799a90u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x799a94: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x799A94u;
    {
        const bool branch_taken_0x799a94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A94u;
        // 0x799a98: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799a94) {
            ctx->pc = 0x799AA8u;
            goto label_799aa8;
        }
    }
    ctx->pc = 0x799A9Cu;
    // 0x799a9c: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x799a9cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x799aa0: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x799AA0u;
    {
        const bool branch_taken_0x799aa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799aa0) {
            ctx->pc = 0x799AA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799AA0u;
            // 0x799aa4: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799A80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799a80;
        }
    }
    ctx->pc = 0x799AA8u;
label_799aa8:
    // 0x799aa8: 0xc0b1508  jal         func_2C5420
    ctx->pc = 0x799AA8u;
    SET_GPR_U32(ctx, 31, 0x799AB0u);
    ctx->pc = 0x799AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799AA8u;
    // 0x799aac: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5420u, 0x799AA8u, 0x799AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799AB0u;
label_799ab0:
    // 0x799ab0: 0x3c0b007a  lui         $t3, 0x7A
    ctx->pc = 0x799ab0u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)122 << 16));
    // 0x799ab4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x799ab4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799ab8: 0x8162a7f8  lb          $v0, -0x5808($t3)
    ctx->pc = 0x799ab8u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x79A7F8u));
    // 0x799abc: 0x26a84c38  addiu       $t0, $s5, 0x4C38
    ctx->pc = 0x799abcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 21), 19512));
    // 0x799ac0: 0x2563a7f8  addiu       $v1, $t3, -0x5808
    ctx->pc = 0x799ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), 4294944760));
    // 0x799ac4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799ac4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799ac8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x799AC8u;
    {
        const bool branch_taken_0x799ac8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799AC8u;
        // 0x799acc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799ac8) {
            ctx->pc = 0x799B00u;
            goto label_799b00;
        }
    }
    ctx->pc = 0x799AD0u;
    // 0x799ad0: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x799ad0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799ad4: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x799ad4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_799ad8:
    // 0x799ad8: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x799ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x799adc: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x799adcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x799ae0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x799ae0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x799ae4: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x799ae4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x799ae8: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x799ae8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x799aec: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x799AECu;
    {
        const bool branch_taken_0x799aec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799AECu;
        // 0x799af0: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799aec) {
            ctx->pc = 0x799B00u;
            goto label_799b00;
        }
    }
    ctx->pc = 0x799AF4u;
    // 0x799af4: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x799af4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x799af8: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x799AF8u;
    {
        const bool branch_taken_0x799af8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799af8) {
            ctx->pc = 0x799AFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799AF8u;
            // 0x799afc: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799AD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799ad8;
        }
    }
    ctx->pc = 0x799B00u;
label_799b00:
    // 0x799b00: 0xc0b1508  jal         func_2C5420
    ctx->pc = 0x799B00u;
    SET_GPR_U32(ctx, 31, 0x799B08u);
    ctx->pc = 0x799B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799B00u;
    // 0x799b04: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5420u, 0x799B00u, 0x799B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799B08u;
label_799b08:
    // 0x799b08: 0x8e23ab00  lw          $v1, -0x5500($s1)
    ctx->pc = 0x799b08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294945536)));
    // 0x799b0c: 0x2406012c  addiu       $a2, $zero, 0x12C
    ctx->pc = 0x799b0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x799b10: 0x3407c350  ori         $a3, $zero, 0xC350
    ctx->pc = 0x799b10u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)50000);
    // 0x799b14: 0x24082710  addiu       $t0, $zero, 0x2710
    ctx->pc = 0x799b14u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
    // 0x799b18: 0xac7304b0  sw          $s3, 0x4B0($v1)
    ctx->pc = 0x799b18u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1200), GPR_U32(ctx, 19));
    // 0x799b1c: 0x24040bb8  addiu       $a0, $zero, 0xBB8
    ctx->pc = 0x799b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3000));
    // 0x799b20: 0xac7204b4  sw          $s2, 0x4B4($v1)
    ctx->pc = 0x799b20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1204), GPR_U32(ctx, 18));
    // 0x799b24: 0x24090172  addiu       $t1, $zero, 0x172
    ctx->pc = 0x799b24u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 370));
    // 0x799b28: 0xac7004b8  sw          $s0, 0x4B8($v1)
    ctx->pc = 0x799b28u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1208), GPR_U32(ctx, 16));
    // 0x799b2c: 0x240a0078  addiu       $t2, $zero, 0x78
    ctx->pc = 0x799b2cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x799b30: 0xac6204bc  sw          $v0, 0x4BC($v1)
    ctx->pc = 0x799b30u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1212), GPR_U32(ctx, 2));
    // 0x799b34: 0x240b00c8  addiu       $t3, $zero, 0xC8
    ctx->pc = 0x799b34u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x799b38: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x799b38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x799b3c: 0x7bb00250  lq          $s0, 0x250($sp)
    ctx->pc = 0x799b3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x799b40: 0x8e22ab00  lw          $v0, -0x5500($s1)
    ctx->pc = 0x799b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294945536)));
    // 0x799b44: 0x7bb20230  lq          $s2, 0x230($sp)
    ctx->pc = 0x799b44u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x799b48: 0xac4603c8  sw          $a2, 0x3C8($v0)
    ctx->pc = 0x799b48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 968), GPR_U32(ctx, 6));
    // 0x799b4c: 0x7bb30220  lq          $s3, 0x220($sp)
    ctx->pc = 0x799b4cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x799b50: 0x8e23ab00  lw          $v1, -0x5500($s1)
    ctx->pc = 0x799b50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294945536)));
    // 0x799b54: 0x7bb40210  lq          $s4, 0x210($sp)
    ctx->pc = 0x799b54u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x799b58: 0xac6703cc  sw          $a3, 0x3CC($v1)
    ctx->pc = 0x799b58u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 972), GPR_U32(ctx, 7));
    // 0x799b5c: 0x7bb50200  lq          $s5, 0x200($sp)
    ctx->pc = 0x799b5cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x799b60: 0x8e22ab00  lw          $v0, -0x5500($s1)
    ctx->pc = 0x799b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294945536)));
    // 0x799b64: 0x7bb601f0  lq          $s6, 0x1F0($sp)
    ctx->pc = 0x799b64u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x799b68: 0xac4803d0  sw          $t0, 0x3D0($v0)
    ctx->pc = 0x799b68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 976), GPR_U32(ctx, 8));
    // 0x799b6c: 0x7bb701e0  lq          $s7, 0x1E0($sp)
    ctx->pc = 0x799b6cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x799b70: 0x8e23ab00  lw          $v1, -0x5500($s1)
    ctx->pc = 0x799b70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294945536)));
    // 0x799b74: 0x7bbe01d0  lq          $fp, 0x1D0($sp)
    ctx->pc = 0x799b74u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x799b78: 0xac6403d4  sw          $a0, 0x3D4($v1)
    ctx->pc = 0x799b78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 980), GPR_U32(ctx, 4));
    // 0x799b7c: 0xdfbf01c0  ld          $ra, 0x1C0($sp)
    ctx->pc = 0x799b7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x799b80: 0x8e22ab00  lw          $v0, -0x5500($s1)
    ctx->pc = 0x799b80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294945536)));
    // 0x799b84: 0xac4403d8  sw          $a0, 0x3D8($v0)
    ctx->pc = 0x799b84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 984), GPR_U32(ctx, 4));
    // 0x799b88: 0x8e23ab00  lw          $v1, -0x5500($s1)
    ctx->pc = 0x799b88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294945536)));
    // 0x799b8c: 0xac6403dc  sw          $a0, 0x3DC($v1)
    ctx->pc = 0x799b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 988), GPR_U32(ctx, 4));
    // 0x799b90: 0x8e22ab00  lw          $v0, -0x5500($s1)
    ctx->pc = 0x799b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294945536)));
    // 0x799b94: 0xac4403e0  sw          $a0, 0x3E0($v0)
    ctx->pc = 0x799b94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 992), GPR_U32(ctx, 4));
    // 0x799b98: 0x8e23ab00  lw          $v1, -0x5500($s1)
    ctx->pc = 0x799b98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294945536)));
    // 0x799b9c: 0xac6903e4  sw          $t1, 0x3E4($v1)
    ctx->pc = 0x799b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 996), GPR_U32(ctx, 9));
    // 0x799ba0: 0x8e22ab00  lw          $v0, -0x5500($s1)
    ctx->pc = 0x799ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294945536)));
    // 0x799ba4: 0xac4a03e8  sw          $t2, 0x3E8($v0)
    ctx->pc = 0x799ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1000), GPR_U32(ctx, 10));
    // 0x799ba8: 0x8e23ab00  lw          $v1, -0x5500($s1)
    ctx->pc = 0x799ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294945536)));
    // 0x799bac: 0xac6b03ec  sw          $t3, 0x3EC($v1)
    ctx->pc = 0x799bacu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1004), GPR_U32(ctx, 11));
    // 0x799bb0: 0x8e22ab00  lw          $v0, -0x5500($s1)
    ctx->pc = 0x799bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294945536)));
    // 0x799bb4: 0xac4503f0  sw          $a1, 0x3F0($v0)
    ctx->pc = 0x799bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1008), GPR_U32(ctx, 5));
    // 0x799bb8: 0x8e23ab00  lw          $v1, -0x5500($s1)
    ctx->pc = 0x799bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294945536)));
    // 0x799bbc: 0xac6503f4  sw          $a1, 0x3F4($v1)
    ctx->pc = 0x799bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1012), GPR_U32(ctx, 5));
    // 0x799bc0: 0x8e22ab00  lw          $v0, -0x5500($s1)
    ctx->pc = 0x799bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294945536)));
    // 0x799bc4: 0xac4503f8  sw          $a1, 0x3F8($v0)
    ctx->pc = 0x799bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1016), GPR_U32(ctx, 5));
    // 0x799bc8: 0x8e23ab00  lw          $v1, -0x5500($s1)
    ctx->pc = 0x799bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294945536)));
    // 0x799bcc: 0x7bb10240  lq          $s1, 0x240($sp)
    ctx->pc = 0x799bccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x799bd0: 0xac6503fc  sw          $a1, 0x3FC($v1)
    ctx->pc = 0x799bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1020), GPR_U32(ctx, 5));
    // 0x799bd4: 0x3e00008  jr          $ra
    ctx->pc = 0x799BD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799BD4u;
        // 0x799bd8: 0x27bd0260  addiu       $sp, $sp, 0x260 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799BD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799BDCu;
    // 0x799bdc: 0x0  nop
    ctx->pc = 0x799bdcu;
    // NOP
    ctx->pc = 0x799be0u;
}
} // namespace gh_r006
