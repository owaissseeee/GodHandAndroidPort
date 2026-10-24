#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r606_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r606
{
// Function: func_007994A8
// Address: 0x7994a8 - 0x7996e8
void func_007994A8_0x7994a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_007994A8_0x7994a8");
#endif

    switch (ctx->pc) {
        case 0x799530u: goto label_799530;
        case 0x799538u: goto label_799538;
        case 0x799544u: goto label_799544;
        case 0x799558u: goto label_799558;
        case 0x799580u: goto label_799580;
        case 0x7995a0u: goto label_7995a0;
        case 0x7995acu: goto label_7995ac;
        case 0x7995dcu: goto label_7995dc;
        case 0x7995f0u: goto label_7995f0;
        case 0x7995fcu: goto label_7995fc;
        case 0x799610u: goto label_799610;
        case 0x79963cu: goto label_79963c;
        case 0x799644u: goto label_799644;
        case 0x799670u: goto label_799670;
        case 0x799678u: goto label_799678;
        case 0x7996a8u: goto label_7996a8;
        case 0x7996b8u: goto label_7996b8;
        default: break;
    }

    ctx->pc = 0x7994a8u;

    // 0x7994a8: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x7994a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x7994ac: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x7994acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x7994b0: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x7994b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x7994b4: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x7994b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x7994b8: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x7994b8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x7994bc: 0x7fb00100  sq          $s0, 0x100($sp)
    ctx->pc = 0x7994bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 16));
    // 0x7994c0: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x7994c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
    // 0x7994c4: 0x7fb100f0  sq          $s1, 0xF0($sp)
    ctx->pc = 0x7994c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 17));
    // 0x7994c8: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x7994c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7994cc: 0x7fb200e0  sq          $s2, 0xE0($sp)
    ctx->pc = 0x7994ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 18));
    // 0x7994d0: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x7994d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x7994d4: 0x7fb300d0  sq          $s3, 0xD0($sp)
    ctx->pc = 0x7994d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 19));
    // 0x7994d8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x7994d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7994dc: 0xa3a30008  sb          $v1, 0x8($sp)
    ctx->pc = 0x7994dcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 8), (uint8_t)GPR_U32(ctx, 3));
    // 0x7994e0: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x7994e0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x7994e4: 0x7fb400c0  sq          $s4, 0xC0($sp)
    ctx->pc = 0x7994e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 20));
    // 0x7994e8: 0x7fb500b0  sq          $s5, 0xB0($sp)
    ctx->pc = 0x7994e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 21));
    // 0x7994ec: 0x7fb600a0  sq          $s6, 0xA0($sp)
    ctx->pc = 0x7994ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 22));
    // 0x7994f0: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x7994f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
    // 0x7994f4: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x7994f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x7994f8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x7994f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x7994fc: 0xa3a40010  sb          $a0, 0x10($sp)
    ctx->pc = 0x7994fcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 4));
    // 0x799500: 0x2446a8a0  addiu       $a2, $v0, -0x5760
    ctx->pc = 0x799500u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944928));
    // 0x799504: 0x68c30007  ldl         $v1, 0x7($a2)
    ctx->pc = 0x799504u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x799508: 0x6cc30000  ldr         $v1, 0x0($a2)
    ctx->pc = 0x799508u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x79950c: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x79950cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x79A8A8u));
    // 0x799510: 0xb3a30027  sdl         $v1, 0x27($sp)
    ctx->pc = 0x799510u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x799514: 0xb7a30020  sdr         $v1, 0x20($sp)
    ctx->pc = 0x799514u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x799518: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x799518u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x79951c: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x79951cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x799520: 0x27a30008  addiu       $v1, $sp, 0x8
    ctx->pc = 0x799520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x799524: 0xafa20064  sw          $v0, 0x64($sp)
    ctx->pc = 0x799524u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
    // 0x799528: 0xafa30060  sw          $v1, 0x60($sp)
    ctx->pc = 0x799528u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 3));
    // 0x79952c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79952cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_799530:
    // 0x799530: 0xc0a56ae  jal         func_295AB8
    ctx->pc = 0x799530u;
    SET_GPR_U32(ctx, 31, 0x799538u);
    ctx->pc = 0x799534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799530u;
    // 0x799534: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295AB8u, 0x799530u, 0x799538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799538u;
label_799538:
    // 0x799538: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x799538u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79953c: 0xc0a5874  jal         func_2961D0
    ctx->pc = 0x79953Cu;
    SET_GPR_U32(ctx, 31, 0x799544u);
    ctx->pc = 0x799540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79953Cu;
    // 0x799540: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2961D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2961D0u, 0x79953Cu, 0x799544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799544u;
label_799544:
    // 0x799544: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x799544u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x799548: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799548u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79954c: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x79954cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x799550: 0xc0a578e  jal         func_295E38
    ctx->pc = 0x799550u;
    SET_GPR_U32(ctx, 31, 0x799558u);
    ctx->pc = 0x799554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799550u;
    // 0x799554: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295E38u, 0x799550u, 0x799558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799558u;
label_799558:
    // 0x799558: 0x2e420003  sltiu       $v0, $s2, 0x3
    ctx->pc = 0x799558u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x79955c: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x79955Cu;
    {
        const bool branch_taken_0x79955c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79955Cu;
        // 0x799560: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79955c) {
            ctx->pc = 0x799530u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799530;
        }
    }
    ctx->pc = 0x799564u;
    // 0x799564: 0x241e0005  addiu       $fp, $zero, 0x5
    ctx->pc = 0x799564u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x799568: 0x24170006  addiu       $s7, $zero, 0x6
    ctx->pc = 0x799568u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x79956c: 0x24160007  addiu       $s6, $zero, 0x7
    ctx->pc = 0x79956cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x799570: 0x24150008  addiu       $s5, $zero, 0x8
    ctx->pc = 0x799570u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x799574: 0x24140009  addiu       $s4, $zero, 0x9
    ctx->pc = 0x799574u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x799578: 0xa3be0030  sb          $fp, 0x30($sp)
    ctx->pc = 0x799578u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 30));
    // 0x79957c: 0x0  nop
    ctx->pc = 0x79957cu;
    // NOP
label_799580:
    // 0x799580: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x799580u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799584: 0xa3b70038  sb          $s7, 0x38($sp)
    ctx->pc = 0x799584u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 56), (uint8_t)GPR_U32(ctx, 23));
    // 0x799588: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x799588u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79958c: 0xa3b60040  sb          $s6, 0x40($sp)
    ctx->pc = 0x79958cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 22));
    // 0x799590: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x799590u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799594: 0xa3b50048  sb          $s5, 0x48($sp)
    ctx->pc = 0x799594u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 72), (uint8_t)GPR_U32(ctx, 21));
    // 0x799598: 0xa3b40050  sb          $s4, 0x50($sp)
    ctx->pc = 0x799598u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 80), (uint8_t)GPR_U32(ctx, 20));
    // 0x79959c: 0x0  nop
    ctx->pc = 0x79959cu;
    // NOP
label_7995a0:
    // 0x7995a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7995a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7995a4: 0xc0a572a  jal         func_295CA8
    ctx->pc = 0x7995A4u;
    SET_GPR_U32(ctx, 31, 0x7995ACu);
    ctx->pc = 0x7995A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7995A4u;
    // 0x7995a8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x7995A4u, 0x7995ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7995ACu;
label_7995ac:
    // 0x7995ac: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x7995acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x7995b0: 0x26430001  addiu       $v1, $s2, 0x1
    ctx->pc = 0x7995b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x7995b4: 0x2e240005  sltiu       $a0, $s1, 0x5
    ctx->pc = 0x7995b4u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x7995b8: 0x1480fff9  bnez        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x7995B8u;
    {
        const bool branch_taken_0x7995b8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x7995BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995B8u;
        // 0x7995bc: 0x62900b  movn        $s2, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7995b8) {
            ctx->pc = 0x7995A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7995a0;
        }
    }
    ctx->pc = 0x7995C0u;
    // 0x7995c0: 0x2e420005  sltiu       $v0, $s2, 0x5
    ctx->pc = 0x7995c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x7995c4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x7995C4u;
    {
        const bool branch_taken_0x7995c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7995C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995C4u;
        // 0x7995c8: 0x3c04003c  lui         $a0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7995c4) {
            ctx->pc = 0x7995E4u;
            goto label_7995e4;
        }
    }
    ctx->pc = 0x7995CCu;
    // 0x7995cc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x7995ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7995d0: 0x8c822f84  lw          $v0, 0x2F84($a0)
    ctx->pc = 0x7995d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12164)));
    // 0x7995d4: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x7995D4u;
    SET_GPR_U32(ctx, 31, 0x7995DCu);
    ctx->pc = 0x7995D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7995D4u;
    // 0x7995d8: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x7995D4u, 0x7995DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7995DCu;
label_7995dc:
    // 0x7995dc: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
    ctx->pc = 0x7995DCu;
    {
        const bool branch_taken_0x7995dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7995E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995DCu;
        // 0x7995e0: 0xa3be0030  sb          $fp, 0x30($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7995dc) {
            ctx->pc = 0x799580u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799580;
        }
    }
    ctx->pc = 0x7995E4u;
label_7995e4:
    // 0x7995e4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x7995e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7995e8: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x7995e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7995ec: 0x0  nop
    ctx->pc = 0x7995ecu;
    // NOP
label_7995f0:
    // 0x7995f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7995f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7995f4: 0xc0a5860  jal         func_296180
    ctx->pc = 0x7995F4u;
    SET_GPR_U32(ctx, 31, 0x7995FCu);
    ctx->pc = 0x7995F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7995F4u;
    // 0x7995f8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296180u, 0x7995F4u, 0x7995FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7995FCu;
label_7995fc:
    // 0x7995fc: 0x2e220003  sltiu       $v0, $s1, 0x3
    ctx->pc = 0x7995fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x799600: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x799600u;
    {
        const bool branch_taken_0x799600 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799600u;
        // 0x799604: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799600) {
            ctx->pc = 0x7995F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7995f0;
        }
    }
    ctx->pc = 0x799608u;
    // 0x799608: 0xc0a572a  jal         func_295CA8
    ctx->pc = 0x799608u;
    SET_GPR_U32(ctx, 31, 0x799610u);
    ctx->pc = 0x79960Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799608u;
    // 0x79960c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x799608u, 0x799610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799610u;
label_799610:
    // 0x799610: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x799610u;
    {
        const bool branch_taken_0x799610 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799610u;
        // 0x799614: 0x3c03007a  lui         $v1, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799610) {
            ctx->pc = 0x79963Cu;
            goto label_79963c;
        }
    }
    ctx->pc = 0x799618u;
    // 0x799618: 0x24051005  addiu       $a1, $zero, 0x1005
    ctx->pc = 0x799618u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4101));
    // 0x79961c: 0x8c64a980  lw          $a0, -0x5680($v1)
    ctx->pc = 0x79961cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294945152)));
    // 0x799620: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x799620u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x799624: 0xac8500a8  sw          $a1, 0xA8($a0)
    ctx->pc = 0x799624u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 168), GPR_U32(ctx, 5));
    // 0x799628: 0x8c62a980  lw          $v0, -0x5680($v1)
    ctx->pc = 0x799628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294945152)));
    // 0x79962c: 0xac4600a4  sw          $a2, 0xA4($v0)
    ctx->pc = 0x79962cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 164), GPR_U32(ctx, 6));
    // 0x799630: 0x8c64a980  lw          $a0, -0x5680($v1)
    ctx->pc = 0x799630u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294945152)));
    // 0x799634: 0xc1e692a  jal         func_79A4A8
    ctx->pc = 0x799634u;
    SET_GPR_U32(ctx, 31, 0x79963Cu);
    ctx->pc = 0x799638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799634u;
    // 0x799638: 0x248400a4  addiu       $a0, $a0, 0xA4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 164));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79A4A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79A4A8u, 0x799634u, 0x79963Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79963Cu;
label_79963c:
    // 0x79963c: 0xc0a572a  jal         func_295CA8
    ctx->pc = 0x79963Cu;
    SET_GPR_U32(ctx, 31, 0x799644u);
    ctx->pc = 0x799640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79963Cu;
    // 0x799640: 0x8fa40060  lw          $a0, 0x60($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x79963Cu, 0x799644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799644u;
label_799644:
    // 0x799644: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x799644u;
    {
        const bool branch_taken_0x799644 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799644u;
        // 0x799648: 0x3c03007a  lui         $v1, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799644) {
            ctx->pc = 0x799670u;
            goto label_799670;
        }
    }
    ctx->pc = 0x79964Cu;
    // 0x79964c: 0x24051004  addiu       $a1, $zero, 0x1004
    ctx->pc = 0x79964cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4100));
    // 0x799650: 0x8c64a980  lw          $a0, -0x5680($v1)
    ctx->pc = 0x799650u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294945152)));
    // 0x799654: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x799654u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x799658: 0xac85014c  sw          $a1, 0x14C($a0)
    ctx->pc = 0x799658u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 332), GPR_U32(ctx, 5));
    // 0x79965c: 0x8c62a980  lw          $v0, -0x5680($v1)
    ctx->pc = 0x79965cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294945152)));
    // 0x799660: 0xac460148  sw          $a2, 0x148($v0)
    ctx->pc = 0x799660u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 328), GPR_U32(ctx, 6));
    // 0x799664: 0x8c64a980  lw          $a0, -0x5680($v1)
    ctx->pc = 0x799664u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294945152)));
    // 0x799668: 0xc1e692a  jal         func_79A4A8
    ctx->pc = 0x799668u;
    SET_GPR_U32(ctx, 31, 0x799670u);
    ctx->pc = 0x79966Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799668u;
    // 0x79966c: 0x24840148  addiu       $a0, $a0, 0x148 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79A4A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79A4A8u, 0x799668u, 0x799670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799670u;
label_799670:
    // 0x799670: 0xc0a572a  jal         func_295CA8
    ctx->pc = 0x799670u;
    SET_GPR_U32(ctx, 31, 0x799678u);
    ctx->pc = 0x799674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799670u;
    // 0x799674: 0x8fa40064  lw          $a0, 0x64($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x799670u, 0x799678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799678u;
label_799678:
    // 0x799678: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x799678u;
    {
        const bool branch_taken_0x799678 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79967Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799678u;
        // 0x79967c: 0x3c05003c  lui         $a1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799678) {
            ctx->pc = 0x7996ACu;
            goto label_7996ac;
        }
    }
    ctx->pc = 0x799680u;
    // 0x799680: 0x3c03007a  lui         $v1, 0x7A
    ctx->pc = 0x799680u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)122 << 16));
    // 0x799684: 0x24051003  addiu       $a1, $zero, 0x1003
    ctx->pc = 0x799684u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4099));
    // 0x799688: 0x8c64a980  lw          $a0, -0x5680($v1)
    ctx->pc = 0x799688u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x79A980u));
    // 0x79968c: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x79968cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x799690: 0xac8501f0  sw          $a1, 0x1F0($a0)
    ctx->pc = 0x799690u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 496), GPR_U32(ctx, 5));
    // 0x799694: 0x8c62a980  lw          $v0, -0x5680($v1)
    ctx->pc = 0x799694u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x79A980u));
    // 0x799698: 0xac4601ec  sw          $a2, 0x1EC($v0)
    ctx->pc = 0x799698u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 492), GPR_U32(ctx, 6));
    // 0x79969c: 0x8c64a980  lw          $a0, -0x5680($v1)
    ctx->pc = 0x79969cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x79A980u));
    // 0x7996a0: 0xc1e692a  jal         func_79A4A8
    ctx->pc = 0x7996A0u;
    SET_GPR_U32(ctx, 31, 0x7996A8u);
    ctx->pc = 0x7996A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7996A0u;
    // 0x7996a4: 0x248401ec  addiu       $a0, $a0, 0x1EC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 492));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79A4A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79A4A8u, 0x7996A0u, 0x7996A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7996A8u;
label_7996a8:
    // 0x7996a8: 0x3c05003c  lui         $a1, 0x3C
    ctx->pc = 0x7996a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60 << 16));
label_7996ac:
    // 0x7996ac: 0x8ca22f84  lw          $v0, 0x2F84($a1)
    ctx->pc = 0x7996acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12164)));
    // 0x7996b0: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x7996B0u;
    SET_GPR_U32(ctx, 31, 0x7996B8u);
    ctx->pc = 0x7996B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7996B0u;
    // 0x7996b4: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x7996B0u, 0x7996B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7996B8u;
label_7996b8:
    // 0x7996b8: 0x7bb00100  lq          $s0, 0x100($sp)
    ctx->pc = 0x7996b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x7996bc: 0x7bb100f0  lq          $s1, 0xF0($sp)
    ctx->pc = 0x7996bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x7996c0: 0x7bb200e0  lq          $s2, 0xE0($sp)
    ctx->pc = 0x7996c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x7996c4: 0x7bb300d0  lq          $s3, 0xD0($sp)
    ctx->pc = 0x7996c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x7996c8: 0x7bb400c0  lq          $s4, 0xC0($sp)
    ctx->pc = 0x7996c8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x7996cc: 0x7bb500b0  lq          $s5, 0xB0($sp)
    ctx->pc = 0x7996ccu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x7996d0: 0x7bb600a0  lq          $s6, 0xA0($sp)
    ctx->pc = 0x7996d0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x7996d4: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x7996d4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x7996d8: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x7996d8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x7996dc: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x7996dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x7996e0: 0x3e00008  jr          $ra
    ctx->pc = 0x7996E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7996E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996E0u;
        // 0x7996e4: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7996E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7996E8u;
}
} // namespace gh_r606
