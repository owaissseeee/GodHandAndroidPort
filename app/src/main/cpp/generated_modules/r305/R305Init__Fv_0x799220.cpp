#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r305_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r305
{
// Function: R305Init__Fv
// Address: 0x799220 - 0x799538
void R305Init__Fv_0x799220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R305Init__Fv_0x799220");
#endif

    switch (ctx->pc) {
        case 0x799278u: goto label_799278;
        case 0x799280u: goto label_799280;
        case 0x79928cu: goto label_79928c;
        case 0x7992b4u: goto label_7992b4;
        case 0x79930cu: goto label_79930c;
        case 0x7993a0u: goto label_7993a0;
        case 0x7993acu: goto label_7993ac;
        case 0x7993ccu: goto label_7993cc;
        case 0x7993f8u: goto label_7993f8;
        case 0x799420u: goto label_799420;
        case 0x799444u: goto label_799444;
        case 0x7994dcu: goto label_7994dc;
        case 0x7994f4u: goto label_7994f4;
        default: break;
    }

    ctx->pc = 0x799220u;

    // 0x799220: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x799220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
    // 0x799224: 0x24040f30  addiu       $a0, $zero, 0xF30
    ctx->pc = 0x799224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3888));
    // 0x799228: 0x7fb00130  sq          $s0, 0x130($sp)
    ctx->pc = 0x799228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 16));
    // 0x79922c: 0x7fb10120  sq          $s1, 0x120($sp)
    ctx->pc = 0x79922cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 17));
    // 0x799230: 0x3c10007a  lui         $s0, 0x7A
    ctx->pc = 0x799230u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)122 << 16));
    // 0x799234: 0x7fb20110  sq          $s2, 0x110($sp)
    ctx->pc = 0x799234u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 18));
    // 0x799238: 0x2411001a  addiu       $s1, $zero, 0x1A
    ctx->pc = 0x799238u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x79923c: 0x7fb30100  sq          $s3, 0x100($sp)
    ctx->pc = 0x79923cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 19));
    // 0x799240: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x799240u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x799244: 0x7fb400f0  sq          $s4, 0xF0($sp)
    ctx->pc = 0x799244u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 20));
    // 0x799248: 0x7fb500e0  sq          $s5, 0xE0($sp)
    ctx->pc = 0x799248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 21));
    // 0x79924c: 0x2614a800  addiu       $s4, $s0, -0x5800
    ctx->pc = 0x79924cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 4294944768));
    // 0x799250: 0x7fb600d0  sq          $s6, 0xD0($sp)
    ctx->pc = 0x799250u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 22));
    // 0x799254: 0x7fb700c0  sq          $s7, 0xC0($sp)
    ctx->pc = 0x799254u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 23));
    // 0x799258: 0x7fbe00b0  sq          $fp, 0xB0($sp)
    ctx->pc = 0x799258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 30));
    // 0x79925c: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x79925cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x799260: 0xe7b80160  swc1        $f24, 0x160($sp)
    ctx->pc = 0x799260u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
    // 0x799264: 0xe7b70158  swc1        $f23, 0x158($sp)
    ctx->pc = 0x799264u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
    // 0x799268: 0xe7b60150  swc1        $f22, 0x150($sp)
    ctx->pc = 0x799268u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x79926c: 0xe7b50148  swc1        $f21, 0x148($sp)
    ctx->pc = 0x79926cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
    // 0x799270: 0xc1e6460  jal         func_799180
    ctx->pc = 0x799270u;
    SET_GPR_U32(ctx, 31, 0x799278u);
    ctx->pc = 0x799274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799270u;
    // 0x799274: 0xe7b40140  swc1        $f20, 0x140($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x799180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799180u, 0x799270u, 0x799278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799278u;
label_799278:
    // 0x799278: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x799278u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79927c: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x79927cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_799280:
    // 0x799280: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799280u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799284: 0xc1e659c  jal         func_799670
    ctx->pc = 0x799284u;
    SET_GPR_U32(ctx, 31, 0x79928Cu);
    ctx->pc = 0x799288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799284u;
    // 0x799288: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x799670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799670u, 0x799284u, 0x79928Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79928Cu;
label_79928c:
    // 0x79928c: 0x0  nop
    ctx->pc = 0x79928cu;
    // NOP
    // 0x799290: 0x1632fffb  bne         $s1, $s2, . + 4 + (-0x5 << 2)
    ctx->pc = 0x799290u;
    {
        const bool branch_taken_0x799290 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 18));
        ctx->pc = 0x799294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799290u;
        // 0x799294: 0x26100090  addiu       $s0, $s0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799290) {
            ctx->pc = 0x799280u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799280;
        }
    }
    ctx->pc = 0x799298u;
    // 0x799298: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x799298u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
    // 0x79929c: 0xae930000  sw          $s3, 0x0($s4)
    ctx->pc = 0x79929cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 19));
    // 0x7992a0: 0x2445a6a0  addiu       $a1, $v0, -0x5960
    ctx->pc = 0x7992a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944416));
    // 0x7992a4: 0x30a20007  andi        $v0, $a1, 0x7
    ctx->pc = 0x7992a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
    // 0x7992a8: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x7992A8u;
    {
        const bool branch_taken_0x7992a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7992ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7992A8u;
        // 0x7992ac: 0x3a0182d  daddu       $v1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7992a8) {
            ctx->pc = 0x799308u;
            goto label_799308;
        }
    }
    ctx->pc = 0x7992B0u;
    // 0x7992b0: 0x24a20060  addiu       $v0, $a1, 0x60
    ctx->pc = 0x7992b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 96));
label_7992b4:
    // 0x7992b4: 0x68a40007  ldl         $a0, 0x7($a1)
    ctx->pc = 0x7992b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x7992b8: 0x6ca40000  ldr         $a0, 0x0($a1)
    ctx->pc = 0x7992b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x7992bc: 0x68a6000f  ldl         $a2, 0xF($a1)
    ctx->pc = 0x7992bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x7992c0: 0x6ca60008  ldr         $a2, 0x8($a1)
    ctx->pc = 0x7992c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x7992c4: 0x68a70017  ldl         $a3, 0x17($a1)
    ctx->pc = 0x7992c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x7992c8: 0x6ca70010  ldr         $a3, 0x10($a1)
    ctx->pc = 0x7992c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x7992cc: 0x68a8001f  ldl         $t0, 0x1F($a1)
    ctx->pc = 0x7992ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x7992d0: 0x6ca80018  ldr         $t0, 0x18($a1)
    ctx->pc = 0x7992d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x7992d4: 0xb0640007  sdl         $a0, 0x7($v1)
    ctx->pc = 0x7992d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7992d8: 0xb4640000  sdr         $a0, 0x0($v1)
    ctx->pc = 0x7992d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7992dc: 0xb066000f  sdl         $a2, 0xF($v1)
    ctx->pc = 0x7992dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7992e0: 0xb4660008  sdr         $a2, 0x8($v1)
    ctx->pc = 0x7992e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7992e4: 0xb0670017  sdl         $a3, 0x17($v1)
    ctx->pc = 0x7992e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7992e8: 0xb4670010  sdr         $a3, 0x10($v1)
    ctx->pc = 0x7992e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7992ec: 0xb068001f  sdl         $t0, 0x1F($v1)
    ctx->pc = 0x7992ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7992f0: 0xb4680018  sdr         $t0, 0x18($v1)
    ctx->pc = 0x7992f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7992f4: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x7992f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x7992f8: 0x14a2ffee  bne         $a1, $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x7992F8u;
    {
        const bool branch_taken_0x7992f8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x7992FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7992F8u;
        // 0x7992fc: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7992f8) {
            ctx->pc = 0x7992B4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7992b4;
        }
    }
    ctx->pc = 0x799300u;
    // 0x799300: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x799300u;
    {
        const bool branch_taken_0x799300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799300u;
        // 0x799304: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799300) {
            ctx->pc = 0x79933Cu;
            goto label_79933c;
        }
    }
    ctx->pc = 0x799308u;
label_799308:
    // 0x799308: 0x24a20060  addiu       $v0, $a1, 0x60
    ctx->pc = 0x799308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 96));
label_79930c:
    // 0x79930c: 0xdca40000  ld          $a0, 0x0($a1)
    ctx->pc = 0x79930cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x799310: 0xdca60008  ld          $a2, 0x8($a1)
    ctx->pc = 0x799310u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x799314: 0xdca70010  ld          $a3, 0x10($a1)
    ctx->pc = 0x799314u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x799318: 0xdca80018  ld          $t0, 0x18($a1)
    ctx->pc = 0x799318u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x79931c: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x79931cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 4));
    // 0x799320: 0xfc660008  sd          $a2, 0x8($v1)
    ctx->pc = 0x799320u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 6));
    // 0x799324: 0xfc670010  sd          $a3, 0x10($v1)
    ctx->pc = 0x799324u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 7));
    // 0x799328: 0xfc680018  sd          $t0, 0x18($v1)
    ctx->pc = 0x799328u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 8));
    // 0x79932c: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x79932cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x799330: 0x14a2fff6  bne         $a1, $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x799330u;
    {
        const bool branch_taken_0x799330 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x799334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799330u;
        // 0x799334: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799330) {
            ctx->pc = 0x79930Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79930c;
        }
    }
    ctx->pc = 0x799338u;
    // 0x799338: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x799338u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_79933c:
    // 0x79933c: 0x27a80080  addiu       $t0, $sp, 0x80
    ctx->pc = 0x79933cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x799340: 0x245eea60  addiu       $fp, $v0, -0x15A0
    ctx->pc = 0x799340u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961760));
    // 0x799344: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x799344u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
    // 0x799348: 0x3421fa35  ori         $at, $at, 0xFA35
    ctx->pc = 0x799348u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64053);
    // 0x79934c: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x79934cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x799350: 0x68a20007  ldl         $v0, 0x7($a1)
    ctx->pc = 0x799350u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x799354: 0x6ca20000  ldr         $v0, 0x0($a1)
    ctx->pc = 0x799354u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x799358: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x799358u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x79935c: 0xb0620007  sdl         $v0, 0x7($v1)
    ctx->pc = 0x79935cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x799360: 0xb4620000  sdr         $v0, 0x0($v1)
    ctx->pc = 0x799360u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x799364: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x799364u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799368: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x799368u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
    // 0x79936c: 0x27b30070  addiu       $s3, $sp, 0x70
    ctx->pc = 0x79936cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x799370: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x799370u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x799374: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x799374u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x799378: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x799378u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x79937c: 0x3c17007a  lui         $s7, 0x7A
    ctx->pc = 0x79937cu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)122 << 16));
    // 0x799380: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x799380u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x799384: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x799384u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x799388: 0x24150014  addiu       $s5, $zero, 0x14
    ctx->pc = 0x799388u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x79938c: 0xafa80090  sw          $t0, 0x90($sp)
    ctx->pc = 0x79938cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 8));
    // 0x799390: 0x24140005  addiu       $s4, $zero, 0x5
    ctx->pc = 0x799390u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x799394: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x799394u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799398: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x799398u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79939c: 0x0  nop
    ctx->pc = 0x79939cu;
    // NOP
label_7993a0:
    // 0x7993a0: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x7993a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x7993a4: 0xc0b0c46  jal         func_2C3118
    ctx->pc = 0x7993A4u;
    SET_GPR_U32(ctx, 31, 0x7993ACu);
    ctx->pc = 0x7993A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7993A4u;
    // 0x7993a8: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3118u, 0x7993A4u, 0x7993ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7993ACu;
label_7993ac:
    // 0x7993ac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x7993acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7993b0: 0x5200003d  beql        $s0, $zero, . + 4 + (0x3D << 2)
    ctx->pc = 0x7993B0u;
    {
        const bool branch_taken_0x7993b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x7993b0) {
            ctx->pc = 0x7993B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7993B0u;
            // 0x7993b4: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7994A8u;
            goto label_7994a8;
        }
    }
    ctx->pc = 0x7993B8u;
    // 0x7993b8: 0xfba00070  sqc2        $vf0, 0x70($sp)
    ctx->pc = 0x7993b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x7993bc: 0x96250000  lhu         $a1, 0x0($s1)
    ctx->pc = 0x7993bcu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x7993c0: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x7993c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7993c4: 0xc0b0a92  jal         func_2C2A48
    ctx->pc = 0x7993C4u;
    SET_GPR_U32(ctx, 31, 0x7993CCu);
    ctx->pc = 0x7993C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7993C4u;
    // 0x7993c8: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A48u, 0x7993C4u, 0x7993CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7993CCu;
label_7993cc:
    // 0x7993cc: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x7993ccu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x7993d0: 0xfba40080  sqc2        $vf4, 0x80($sp)
    ctx->pc = 0x7993d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x7993d4: 0x82020045  lb          $v0, 0x45($s0)
    ctx->pc = 0x7993d4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 69)));
    // 0x7993d8: 0x8ef0a800  lw          $s0, -0x5800($s7)
    ctx->pc = 0x7993d8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294944768)));
    // 0x7993dc: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x7993dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x7993e0: 0x4482a800  mtc1        $v0, $f21
    ctx->pc = 0x7993e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x7993e4: 0x0  nop
    ctx->pc = 0x7993e4u;
    // NOP
    // 0x7993e8: 0x4680ad60  cvt.s.w     $f21, $f21
    ctx->pc = 0x7993e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[21], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
    // 0x7993ec: 0x2128021  addu        $s0, $s0, $s2
    ctx->pc = 0x7993ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x7993f0: 0xc0c73be  jal         func_31CEF8
    ctx->pc = 0x7993F0u;
    SET_GPR_U32(ctx, 31, 0x7993F8u);
    ctx->pc = 0x7993F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7993F0u;
    // 0x7993f4: 0x4618ad42  mul.s       $f21, $f21, $f24 (Delay Slot)
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[24]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CEF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CEF8u, 0x7993F0u, 0x7993F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7993F8u;
label_7993f8:
    // 0x7993f8: 0x55001b  divu        $zero, $v0, $s5
    ctx->pc = 0x7993f8u;
    { uint32_t divisor = GPR_U32(ctx, 21); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x7993fc: 0x52a00001  beql        $s5, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x7993FCu;
    {
        const bool branch_taken_0x7993fc = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x7993fc) {
            ctx->pc = 0x799400u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7993FCu;
            // 0x799400: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x799404u;
            goto label_799404;
        }
    }
    ctx->pc = 0x799404u;
label_799404:
    // 0x799404: 0x1810  mfhi        $v1
    ctx->pc = 0x799404u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x799408: 0x4483a000  mtc1        $v1, $f20
    ctx->pc = 0x799408u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x79940c: 0x0  nop
    ctx->pc = 0x79940cu;
    // NOP
    // 0x799410: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x799410u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x799414: 0x4617a502  mul.s       $f20, $f20, $f23
    ctx->pc = 0x799414u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[23]);
    // 0x799418: 0xc0c73be  jal         func_31CEF8
    ctx->pc = 0x799418u;
    SET_GPR_U32(ctx, 31, 0x799420u);
    ctx->pc = 0x79941Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799418u;
    // 0x79941c: 0x4614b501  sub.s       $f20, $f22, $f20 (Delay Slot)
    ctx->f[20] = FPU_SUB_S(ctx->f[22], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CEF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CEF8u, 0x799418u, 0x799420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799420u;
label_799420:
    // 0x799420: 0x54001b  divu        $zero, $v0, $s4
    ctx->pc = 0x799420u;
    { uint32_t divisor = GPR_U32(ctx, 20); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x799424: 0x52800001  beql        $s4, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x799424u;
    {
        const bool branch_taken_0x799424 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x799424) {
            ctx->pc = 0x799428u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799424u;
            // 0x799428: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x79942Cu;
            goto label_79942c;
        }
    }
    ctx->pc = 0x79942Cu;
label_79942c:
    // 0x79942c: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x79942cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x799430: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799434: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x799434u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x799438: 0x3010  mfhi        $a2
    ctx->pc = 0x799438u;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x79943c: 0xc1e65b2  jal         func_7996C8
    ctx->pc = 0x79943Cu;
    SET_GPR_U32(ctx, 31, 0x799444u);
    ctx->pc = 0x799440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79943Cu;
    // 0x799440: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x7996C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7996C8u, 0x79943Cu, 0x799444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799444u;
label_799444:
    // 0x799444: 0x8ee3a800  lw          $v1, -0x5800($s7)
    ctx->pc = 0x799444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294944768)));
    // 0x799448: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x799448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x79944c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x79944cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x799450: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x799450u;
    {
        const bool branch_taken_0x799450 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x799450) {
            ctx->pc = 0x799454u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799450u;
            // 0x799454: 0x3c03007a  lui         $v1, 0x7A (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)122 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799468u;
            goto label_799468;
        }
    }
    ctx->pc = 0x799458u;
    // 0x799458: 0x8c620600  lw          $v0, 0x600($v1)
    ctx->pc = 0x799458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1536)));
    // 0x79945c: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x79945cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x799460: 0xac620600  sw          $v0, 0x600($v1)
    ctx->pc = 0x799460u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1536), GPR_U32(ctx, 2));
    // 0x799464: 0x3c03007a  lui         $v1, 0x7A
    ctx->pc = 0x799464u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)122 << 16));
label_799468:
    // 0x799468: 0x8c62a800  lw          $v0, -0x5800($v1)
    ctx->pc = 0x799468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294944768)));
    // 0x79946c: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x79946cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x799470: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x799470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x799474: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x799474u;
    {
        const bool branch_taken_0x799474 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799474u;
        // 0x799478: 0x3c04007a  lui         $a0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799474) {
            ctx->pc = 0x799488u;
            goto label_799488;
        }
    }
    ctx->pc = 0x79947Cu;
    // 0x79947c: 0x8c620600  lw          $v0, 0x600($v1)
    ctx->pc = 0x79947cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1536)));
    // 0x799480: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x799480u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x799484: 0xac620600  sw          $v0, 0x600($v1)
    ctx->pc = 0x799484u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1536), GPR_U32(ctx, 2));
label_799488:
    // 0x799488: 0x8c82a800  lw          $v0, -0x5800($a0)
    ctx->pc = 0x799488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294944768)));
    // 0x79948c: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x79948cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x799490: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x799490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x799494: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x799494u;
    {
        const bool branch_taken_0x799494 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799494u;
        // 0x799498: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799494) {
            ctx->pc = 0x7994A8u;
            goto label_7994a8;
        }
    }
    ctx->pc = 0x79949Cu;
    // 0x79949c: 0x8c620600  lw          $v0, 0x600($v1)
    ctx->pc = 0x79949cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1536)));
    // 0x7994a0: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x7994a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x7994a4: 0xac620600  sw          $v0, 0x600($v1)
    ctx->pc = 0x7994a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1536), GPR_U32(ctx, 2));
label_7994a8:
    // 0x7994a8: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x7994a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x7994ac: 0x2ac2001b  slti        $v0, $s6, 0x1B
    ctx->pc = 0x7994acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)27) ? 1 : 0);
    // 0x7994b0: 0x1440ffbb  bnez        $v0, . + 4 + (-0x45 << 2)
    ctx->pc = 0x7994B0u;
    {
        const bool branch_taken_0x7994b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7994B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994B0u;
        // 0x7994b4: 0x26520090  addiu       $s2, $s2, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7994b0) {
            ctx->pc = 0x7993A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7993a0;
        }
    }
    ctx->pc = 0x7994B8u;
    // 0x7994b8: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x7994b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x7994bc: 0x3c07007a  lui         $a3, 0x7A
    ctx->pc = 0x7994bcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)122 << 16));
    // 0x7994c0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x7994c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7994c4: 0x2484ea60  addiu       $a0, $a0, -0x15A0
    ctx->pc = 0x7994c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
    // 0x7994c8: 0x24e79588  addiu       $a3, $a3, -0x6A78
    ctx->pc = 0x7994c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294940040));
    // 0x7994cc: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x7994ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7994d0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x7994d0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7994d4: 0xc0b09e4  jal         func_2C2790
    ctx->pc = 0x7994D4u;
    SET_GPR_U32(ctx, 31, 0x7994DCu);
    ctx->pc = 0x7994D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7994D4u;
    // 0x7994d8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2790u, 0x7994D4u, 0x7994DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7994DCu;
label_7994dc:
    // 0x7994dc: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x7994dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x7994e0: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x7994e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x7994e4: 0x8c442f84  lw          $a0, 0x2F84($v0)
    ctx->pc = 0x7994e4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x7994e8: 0x24a59608  addiu       $a1, $a1, -0x69F8
    ctx->pc = 0x7994e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940168));
    // 0x7994ec: 0xc0b0e24  jal         func_2C3890
    ctx->pc = 0x7994ECu;
    SET_GPR_U32(ctx, 31, 0x7994F4u);
    ctx->pc = 0x7994F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7994ECu;
    // 0x7994f0: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x7994ECu, 0x7994F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7994F4u;
label_7994f4:
    // 0x7994f4: 0x7bb00130  lq          $s0, 0x130($sp)
    ctx->pc = 0x7994f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x7994f8: 0x7bb10120  lq          $s1, 0x120($sp)
    ctx->pc = 0x7994f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x7994fc: 0x7bb20110  lq          $s2, 0x110($sp)
    ctx->pc = 0x7994fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x799500: 0x7bb30100  lq          $s3, 0x100($sp)
    ctx->pc = 0x799500u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x799504: 0x7bb400f0  lq          $s4, 0xF0($sp)
    ctx->pc = 0x799504u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x799508: 0x7bb500e0  lq          $s5, 0xE0($sp)
    ctx->pc = 0x799508u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x79950c: 0x7bb600d0  lq          $s6, 0xD0($sp)
    ctx->pc = 0x79950cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x799510: 0x7bb700c0  lq          $s7, 0xC0($sp)
    ctx->pc = 0x799510u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x799514: 0x7bbe00b0  lq          $fp, 0xB0($sp)
    ctx->pc = 0x799514u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x799518: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x799518u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x79951c: 0xc7b80160  lwc1        $f24, 0x160($sp)
    ctx->pc = 0x79951cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x799520: 0xc7b70158  lwc1        $f23, 0x158($sp)
    ctx->pc = 0x799520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x799524: 0xc7b60150  lwc1        $f22, 0x150($sp)
    ctx->pc = 0x799524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x799528: 0xc7b50148  lwc1        $f21, 0x148($sp)
    ctx->pc = 0x799528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x79952c: 0xc7b40140  lwc1        $f20, 0x140($sp)
    ctx->pc = 0x79952cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x799530: 0x3e00008  jr          $ra
    ctx->pc = 0x799530u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799530u;
        // 0x799534: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799530u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799538u;
}
} // namespace gh_r305
