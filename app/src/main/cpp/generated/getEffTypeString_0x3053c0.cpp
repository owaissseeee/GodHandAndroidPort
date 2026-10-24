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

// Function: getEffTypeString
// Address: 0x3053c0 - 0x305758
void getEffTypeString_0x3053c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("getEffTypeString_0x3053c0");
#endif

    switch (ctx->pc) {
        case 0x305534u: goto label_305534;
        case 0x305558u: goto label_305558;
        case 0x30557cu: goto label_30557c;
        case 0x3055a0u: goto label_3055a0;
        case 0x3055c0u: goto label_3055c0;
        case 0x3055e4u: goto label_3055e4;
        case 0x305608u: goto label_305608;
        case 0x30562cu: goto label_30562c;
        case 0x305650u: goto label_305650;
        case 0x305674u: goto label_305674;
        case 0x305698u: goto label_305698;
        case 0x3056b8u: goto label_3056b8;
        case 0x3056d8u: goto label_3056d8;
        case 0x3056f8u: goto label_3056f8;
        case 0x305718u: goto label_305718;
        case 0x305738u: goto label_305738;
        case 0x30574cu: goto label_30574c;
        default: break;
    }

    ctx->pc = 0x3053c0u;

    // 0x3053c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3053c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3053c4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x3053c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3053c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3053c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3053cc: 0x28c20007  slti        $v0, $a2, 0x7
    ctx->pc = 0x3053ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x3053d0: 0x1040005a  beqz        $v0, . + 4 + (0x5A << 2)
    ctx->pc = 0x3053D0u;
    {
        const bool branch_taken_0x3053d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3053D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3053D0u;
        // 0x3053d4: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3053d0) {
            ctx->pc = 0x30553Cu;
            goto label_30553c;
        }
    }
    ctx->pc = 0x3053D8u;
    // 0x3053d8: 0x2cc20007  sltiu       $v0, $a2, 0x7
    ctx->pc = 0x3053d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x3053dc: 0x10400051  beqz        $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x3053DCu;
    {
        const bool branch_taken_0x3053dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3053E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3053DCu;
        // 0x3053e0: 0x3c020045  lui         $v0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3053dc) {
            ctx->pc = 0x305524u;
            goto label_305524;
        }
    }
    ctx->pc = 0x3053E4u;
    // 0x3053e4: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x3053e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x3053e8: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x3053e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x3053ec: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3053ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3053f0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3053f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3053f4: 0x800008  jr          $a0
    ctx->pc = 0x3053F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3053FCu: goto label_3053fc;
            case 0x305424u: goto label_305424;
            case 0x30544Cu: goto label_30544c;
            case 0x305474u: goto label_305474;
            case 0x305494u: goto label_305494;
            case 0x3054C4u: goto label_3054c4;
            case 0x3054F4u: goto label_3054f4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3053F4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3053FCu;
label_3053fc:
    // 0x3053fc: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x3053fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
    // 0x305400: 0x2446fea8  addiu       $a2, $v0, -0x158
    ctx->pc = 0x305400u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966952));
    // 0x305404: 0x68c30007  ldl         $v1, 0x7($a2)
    ctx->pc = 0x305404u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x305408: 0x6cc30000  ldr         $v1, 0x0($a2)
    ctx->pc = 0x305408u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x30540c: 0x80c40008  lb          $a0, 0x8($a2)
    ctx->pc = 0x30540cu;
    SET_GPR_S32(ctx, 4, (int8_t)FAST_READ8(0x44FEB0u));
    // 0x305410: 0xb0e30007  sdl         $v1, 0x7($a3)
    ctx->pc = 0x305410u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x305414: 0xb4e30000  sdr         $v1, 0x0($a3)
    ctx->pc = 0x305414u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x305418: 0xa0e40008  sb          $a0, 0x8($a3)
    ctx->pc = 0x305418u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 8), (uint8_t)GPR_U32(ctx, 4));
    // 0x30541c: 0x100000cc  b           . + 4 + (0xCC << 2)
    ctx->pc = 0x30541Cu;
    {
        const bool branch_taken_0x30541c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x305420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30541Cu;
        // 0x305420: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30541c) {
            ctx->pc = 0x305750u;
            goto label_305750;
        }
    }
    ctx->pc = 0x305424u;
label_305424:
    // 0x305424: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x305424u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
    // 0x305428: 0x2446feb8  addiu       $a2, $v0, -0x148
    ctx->pc = 0x305428u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966968));
    // 0x30542c: 0x68c30007  ldl         $v1, 0x7($a2)
    ctx->pc = 0x30542cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x305430: 0x6cc30000  ldr         $v1, 0x0($a2)
    ctx->pc = 0x305430u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x305434: 0x80c40008  lb          $a0, 0x8($a2)
    ctx->pc = 0x305434u;
    SET_GPR_S32(ctx, 4, (int8_t)FAST_READ8(0x44FEC0u));
    // 0x305438: 0xb0e30007  sdl         $v1, 0x7($a3)
    ctx->pc = 0x305438u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x30543c: 0xb4e30000  sdr         $v1, 0x0($a3)
    ctx->pc = 0x30543cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x305440: 0xa0e40008  sb          $a0, 0x8($a3)
    ctx->pc = 0x305440u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 8), (uint8_t)GPR_U32(ctx, 4));
    // 0x305444: 0x100000c2  b           . + 4 + (0xC2 << 2)
    ctx->pc = 0x305444u;
    {
        const bool branch_taken_0x305444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x305448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305444u;
        // 0x305448: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305444) {
            ctx->pc = 0x305750u;
            goto label_305750;
        }
    }
    ctx->pc = 0x30544Cu;
label_30544c:
    // 0x30544c: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x30544cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
    // 0x305450: 0x2446fec8  addiu       $a2, $v0, -0x138
    ctx->pc = 0x305450u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966984));
    // 0x305454: 0x68c30007  ldl         $v1, 0x7($a2)
    ctx->pc = 0x305454u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x305458: 0x6cc30000  ldr         $v1, 0x0($a2)
    ctx->pc = 0x305458u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x30545c: 0x80c40008  lb          $a0, 0x8($a2)
    ctx->pc = 0x30545cu;
    SET_GPR_S32(ctx, 4, (int8_t)FAST_READ8(0x44FED0u));
    // 0x305460: 0xb0e30007  sdl         $v1, 0x7($a3)
    ctx->pc = 0x305460u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x305464: 0xb4e30000  sdr         $v1, 0x0($a3)
    ctx->pc = 0x305464u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x305468: 0xa0e40008  sb          $a0, 0x8($a3)
    ctx->pc = 0x305468u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 8), (uint8_t)GPR_U32(ctx, 4));
    // 0x30546c: 0x100000b8  b           . + 4 + (0xB8 << 2)
    ctx->pc = 0x30546Cu;
    {
        const bool branch_taken_0x30546c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x305470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30546Cu;
        // 0x305470: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30546c) {
            ctx->pc = 0x305750u;
            goto label_305750;
        }
    }
    ctx->pc = 0x305474u;
label_305474:
    // 0x305474: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x305474u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
    // 0x305478: 0x2446fed8  addiu       $a2, $v0, -0x128
    ctx->pc = 0x305478u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967000));
    // 0x30547c: 0x68c30007  ldl         $v1, 0x7($a2)
    ctx->pc = 0x30547cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x305480: 0x6cc30000  ldr         $v1, 0x0($a2)
    ctx->pc = 0x305480u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x305484: 0xb0e30007  sdl         $v1, 0x7($a3)
    ctx->pc = 0x305484u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x305488: 0xb4e30000  sdr         $v1, 0x0($a3)
    ctx->pc = 0x305488u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x30548c: 0x100000b0  b           . + 4 + (0xB0 << 2)
    ctx->pc = 0x30548Cu;
    {
        const bool branch_taken_0x30548c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x305490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30548Cu;
        // 0x305490: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30548c) {
            ctx->pc = 0x305750u;
            goto label_305750;
        }
    }
    ctx->pc = 0x305494u;
label_305494:
    // 0x305494: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x305494u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
    // 0x305498: 0x2446fee0  addiu       $a2, $v0, -0x120
    ctx->pc = 0x305498u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967008));
    // 0x30549c: 0x68c30007  ldl         $v1, 0x7($a2)
    ctx->pc = 0x30549cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x3054a0: 0x6cc30000  ldr         $v1, 0x0($a2)
    ctx->pc = 0x3054a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x3054a4: 0x80c40008  lb          $a0, 0x8($a2)
    ctx->pc = 0x3054a4u;
    SET_GPR_S32(ctx, 4, (int8_t)FAST_READ8(0x44FEE8u));
    // 0x3054a8: 0x80c50009  lb          $a1, 0x9($a2)
    ctx->pc = 0x3054a8u;
    SET_GPR_S32(ctx, 5, (int8_t)FAST_READ8(0x44FEE9u));
    // 0x3054ac: 0xb0e30007  sdl         $v1, 0x7($a3)
    ctx->pc = 0x3054acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3054b0: 0xb4e30000  sdr         $v1, 0x0($a3)
    ctx->pc = 0x3054b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3054b4: 0xa0e40008  sb          $a0, 0x8($a3)
    ctx->pc = 0x3054b4u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 8), (uint8_t)GPR_U32(ctx, 4));
    // 0x3054b8: 0xa0e50009  sb          $a1, 0x9($a3)
    ctx->pc = 0x3054b8u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 9), (uint8_t)GPR_U32(ctx, 5));
    // 0x3054bc: 0x100000a4  b           . + 4 + (0xA4 << 2)
    ctx->pc = 0x3054BCu;
    {
        const bool branch_taken_0x3054bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3054C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3054BCu;
        // 0x3054c0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3054bc) {
            ctx->pc = 0x305750u;
            goto label_305750;
        }
    }
    ctx->pc = 0x3054C4u;
label_3054c4:
    // 0x3054c4: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x3054c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
    // 0x3054c8: 0x2446fef0  addiu       $a2, $v0, -0x110
    ctx->pc = 0x3054c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967024));
    // 0x3054cc: 0x68c30007  ldl         $v1, 0x7($a2)
    ctx->pc = 0x3054ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x3054d0: 0x6cc30000  ldr         $v1, 0x0($a2)
    ctx->pc = 0x3054d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x3054d4: 0x88c4000b  lwl         $a0, 0xB($a2)
    ctx->pc = 0x3054d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
    // 0x3054d8: 0x98c40008  lwr         $a0, 0x8($a2)
    ctx->pc = 0x3054d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
    // 0x3054dc: 0xb0e30007  sdl         $v1, 0x7($a3)
    ctx->pc = 0x3054dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3054e0: 0xb4e30000  sdr         $v1, 0x0($a3)
    ctx->pc = 0x3054e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3054e4: 0xa8e4000b  swl         $a0, 0xB($a3)
    ctx->pc = 0x3054e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x3054e8: 0xb8e40008  swr         $a0, 0x8($a3)
    ctx->pc = 0x3054e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x3054ec: 0x10000098  b           . + 4 + (0x98 << 2)
    ctx->pc = 0x3054ECu;
    {
        const bool branch_taken_0x3054ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3054F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3054ECu;
        // 0x3054f0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3054ec) {
            ctx->pc = 0x305750u;
            goto label_305750;
        }
    }
    ctx->pc = 0x3054F4u;
label_3054f4:
    // 0x3054f4: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x3054f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
    // 0x3054f8: 0x2446ff00  addiu       $a2, $v0, -0x100
    ctx->pc = 0x3054f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967040));
    // 0x3054fc: 0x68c30007  ldl         $v1, 0x7($a2)
    ctx->pc = 0x3054fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x305500: 0x6cc30000  ldr         $v1, 0x0($a2)
    ctx->pc = 0x305500u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x305504: 0x80c40008  lb          $a0, 0x8($a2)
    ctx->pc = 0x305504u;
    SET_GPR_S32(ctx, 4, (int8_t)FAST_READ8(0x44FF08u));
    // 0x305508: 0x80c50009  lb          $a1, 0x9($a2)
    ctx->pc = 0x305508u;
    SET_GPR_S32(ctx, 5, (int8_t)FAST_READ8(0x44FF09u));
    // 0x30550c: 0xb0e30007  sdl         $v1, 0x7($a3)
    ctx->pc = 0x30550cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x305510: 0xb4e30000  sdr         $v1, 0x0($a3)
    ctx->pc = 0x305510u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x305514: 0xa0e40008  sb          $a0, 0x8($a3)
    ctx->pc = 0x305514u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 8), (uint8_t)GPR_U32(ctx, 4));
    // 0x305518: 0xa0e50009  sb          $a1, 0x9($a3)
    ctx->pc = 0x305518u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 9), (uint8_t)GPR_U32(ctx, 5));
    // 0x30551c: 0x1000008c  b           . + 4 + (0x8C << 2)
    ctx->pc = 0x30551Cu;
    {
        const bool branch_taken_0x30551c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x305520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30551Cu;
        // 0x305520: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30551c) {
            ctx->pc = 0x305750u;
            goto label_305750;
        }
    }
    ctx->pc = 0x305524u;
label_305524:
    // 0x305524: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x305524u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x305528: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x305528u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30552c: 0xc0e9b16  jal         func_3A6C58
    ctx->pc = 0x30552Cu;
    SET_GPR_U32(ctx, 31, 0x305534u);
    ctx->pc = 0x305530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30552Cu;
    // 0x305530: 0x24a5ff10  addiu       $a1, $a1, -0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6C58u, 0x30552Cu, 0x305534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305534u;
label_305534:
    // 0x305534: 0x10000086  b           . + 4 + (0x86 << 2)
    ctx->pc = 0x305534u;
    {
        const bool branch_taken_0x305534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x305538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305534u;
        // 0x305538: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305534) {
            ctx->pc = 0x305750u;
            goto label_305750;
        }
    }
    ctx->pc = 0x30553Cu;
label_30553c:
    // 0x30553c: 0x28c20008  slti        $v0, $a2, 0x8
    ctx->pc = 0x30553cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x305540: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x305540u;
    {
        const bool branch_taken_0x305540 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x305544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305540u;
        // 0x305544: 0x3c050045  lui         $a1, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305540) {
            ctx->pc = 0x305560u;
            goto label_305560;
        }
    }
    ctx->pc = 0x305548u;
    // 0x305548: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x305548u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30554c: 0x24a5ff20  addiu       $a1, $a1, -0xE0
    ctx->pc = 0x30554cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967072));
    // 0x305550: 0xc0e9b16  jal         func_3A6C58
    ctx->pc = 0x305550u;
    SET_GPR_U32(ctx, 31, 0x305558u);
    ctx->pc = 0x305554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305550u;
    // 0x305554: 0x24c6fff9  addiu       $a2, $a2, -0x7 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967289));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6C58u, 0x305550u, 0x305558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305558u;
label_305558:
    // 0x305558: 0x1000007d  b           . + 4 + (0x7D << 2)
    ctx->pc = 0x305558u;
    {
        const bool branch_taken_0x305558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30555Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305558u;
        // 0x30555c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305558) {
            ctx->pc = 0x305750u;
            goto label_305750;
        }
    }
    ctx->pc = 0x305560u;
label_305560:
    // 0x305560: 0x28c20048  slti        $v0, $a2, 0x48
    ctx->pc = 0x305560u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)72) ? 1 : 0);
    // 0x305564: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x305564u;
    {
        const bool branch_taken_0x305564 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x305568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305564u;
        // 0x305568: 0x3c050045  lui         $a1, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305564) {
            ctx->pc = 0x305584u;
            goto label_305584;
        }
    }
    ctx->pc = 0x30556Cu;
    // 0x30556c: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x30556cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305570: 0x24a5ff30  addiu       $a1, $a1, -0xD0
    ctx->pc = 0x305570u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967088));
    // 0x305574: 0xc0e9b16  jal         func_3A6C58
    ctx->pc = 0x305574u;
    SET_GPR_U32(ctx, 31, 0x30557Cu);
    ctx->pc = 0x305578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305574u;
    // 0x305578: 0x24c6fff8  addiu       $a2, $a2, -0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6C58u, 0x305574u, 0x30557Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30557Cu;
label_30557c:
    // 0x30557c: 0x10000074  b           . + 4 + (0x74 << 2)
    ctx->pc = 0x30557Cu;
    {
        const bool branch_taken_0x30557c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x305580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30557Cu;
        // 0x305580: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30557c) {
            ctx->pc = 0x305750u;
            goto label_305750;
        }
    }
    ctx->pc = 0x305584u;
label_305584:
    // 0x305584: 0x24020048  addiu       $v0, $zero, 0x48
    ctx->pc = 0x305584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x305588: 0x14c20007  bne         $a2, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x305588u;
    {
        const bool branch_taken_0x305588 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x30558Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305588u;
        // 0x30558c: 0x28c20058  slti        $v0, $a2, 0x58 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)88) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x305588) {
            ctx->pc = 0x3055A8u;
            goto label_3055a8;
        }
    }
    ctx->pc = 0x305590u;
    // 0x305590: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x305590u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x305594: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x305594u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305598: 0xc0e9b16  jal         func_3A6C58
    ctx->pc = 0x305598u;
    SET_GPR_U32(ctx, 31, 0x3055A0u);
    ctx->pc = 0x30559Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305598u;
    // 0x30559c: 0x24a5ff40  addiu       $a1, $a1, -0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6C58u, 0x305598u, 0x3055A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3055A0u;
label_3055a0:
    // 0x3055a0: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x3055A0u;
    {
        const bool branch_taken_0x3055a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3055A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3055A0u;
        // 0x3055a4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3055a0) {
            ctx->pc = 0x305750u;
            goto label_305750;
        }
    }
    ctx->pc = 0x3055A8u;
label_3055a8:
    // 0x3055a8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3055A8u;
    {
        const bool branch_taken_0x3055a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3055ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3055A8u;
        // 0x3055ac: 0x3c050045  lui         $a1, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3055a8) {
            ctx->pc = 0x3055C8u;
            goto label_3055c8;
        }
    }
    ctx->pc = 0x3055B0u;
    // 0x3055b0: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x3055b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3055b4: 0x24a5ff50  addiu       $a1, $a1, -0xB0
    ctx->pc = 0x3055b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967120));
    // 0x3055b8: 0xc0e9b16  jal         func_3A6C58
    ctx->pc = 0x3055B8u;
    SET_GPR_U32(ctx, 31, 0x3055C0u);
    ctx->pc = 0x3055BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3055B8u;
    // 0x3055bc: 0x24c6ffb8  addiu       $a2, $a2, -0x48 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6C58u, 0x3055B8u, 0x3055C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3055C0u;
label_3055c0:
    // 0x3055c0: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x3055C0u;
    {
        const bool branch_taken_0x3055c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3055C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3055C0u;
        // 0x3055c4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3055c0) {
            ctx->pc = 0x305750u;
            goto label_305750;
        }
    }
    ctx->pc = 0x3055C8u;
label_3055c8:
    // 0x3055c8: 0x28c20158  slti        $v0, $a2, 0x158
    ctx->pc = 0x3055c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)344) ? 1 : 0);
    // 0x3055cc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3055CCu;
    {
        const bool branch_taken_0x3055cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3055D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3055CCu;
        // 0x3055d0: 0x3c050045  lui         $a1, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3055cc) {
            ctx->pc = 0x3055ECu;
            goto label_3055ec;
        }
    }
    ctx->pc = 0x3055D4u;
    // 0x3055d4: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x3055d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3055d8: 0x24a5ff60  addiu       $a1, $a1, -0xA0
    ctx->pc = 0x3055d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967136));
    // 0x3055dc: 0xc0e9b16  jal         func_3A6C58
    ctx->pc = 0x3055DCu;
    SET_GPR_U32(ctx, 31, 0x3055E4u);
    ctx->pc = 0x3055E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3055DCu;
    // 0x3055e0: 0x24c6ffa8  addiu       $a2, $a2, -0x58 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6C58u, 0x3055DCu, 0x3055E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3055E4u;
label_3055e4:
    // 0x3055e4: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x3055E4u;
    {
        const bool branch_taken_0x3055e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3055E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3055E4u;
        // 0x3055e8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3055e4) {
            ctx->pc = 0x305750u;
            goto label_305750;
        }
    }
    ctx->pc = 0x3055ECu;
label_3055ec:
    // 0x3055ec: 0x28c20258  slti        $v0, $a2, 0x258
    ctx->pc = 0x3055ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)600) ? 1 : 0);
    // 0x3055f0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3055F0u;
    {
        const bool branch_taken_0x3055f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3055F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3055F0u;
        // 0x3055f4: 0x3c050045  lui         $a1, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3055f0) {
            ctx->pc = 0x305610u;
            goto label_305610;
        }
    }
    ctx->pc = 0x3055F8u;
    // 0x3055f8: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x3055f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3055fc: 0x24a5ff70  addiu       $a1, $a1, -0x90
    ctx->pc = 0x3055fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967152));
    // 0x305600: 0xc0e9b16  jal         func_3A6C58
    ctx->pc = 0x305600u;
    SET_GPR_U32(ctx, 31, 0x305608u);
    ctx->pc = 0x305604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305600u;
    // 0x305604: 0x24c6fea8  addiu       $a2, $a2, -0x158 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294966952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6C58u, 0x305600u, 0x305608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305608u;
label_305608:
    // 0x305608: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x305608u;
    {
        const bool branch_taken_0x305608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30560Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305608u;
        // 0x30560c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305608) {
            ctx->pc = 0x305750u;
            goto label_305750;
        }
    }
    ctx->pc = 0x305610u;
label_305610:
    // 0x305610: 0x28c20358  slti        $v0, $a2, 0x358
    ctx->pc = 0x305610u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)856) ? 1 : 0);
    // 0x305614: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x305614u;
    {
        const bool branch_taken_0x305614 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x305618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305614u;
        // 0x305618: 0x3c050045  lui         $a1, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305614) {
            ctx->pc = 0x305634u;
            goto label_305634;
        }
    }
    ctx->pc = 0x30561Cu;
    // 0x30561c: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x30561cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305620: 0x24a5ff80  addiu       $a1, $a1, -0x80
    ctx->pc = 0x305620u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967168));
    // 0x305624: 0xc0e9b16  jal         func_3A6C58
    ctx->pc = 0x305624u;
    SET_GPR_U32(ctx, 31, 0x30562Cu);
    ctx->pc = 0x305628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305624u;
    // 0x305628: 0x24c6fda8  addiu       $a2, $a2, -0x258 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294966696));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6C58u, 0x305624u, 0x30562Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30562Cu;
label_30562c:
    // 0x30562c: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x30562Cu;
    {
        const bool branch_taken_0x30562c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x305630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30562Cu;
        // 0x305630: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30562c) {
            ctx->pc = 0x305750u;
            goto label_305750;
        }
    }
    ctx->pc = 0x305634u;
label_305634:
    // 0x305634: 0x28c20458  slti        $v0, $a2, 0x458
    ctx->pc = 0x305634u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)1112) ? 1 : 0);
    // 0x305638: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x305638u;
    {
        const bool branch_taken_0x305638 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30563Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305638u;
        // 0x30563c: 0x3c050045  lui         $a1, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305638) {
            ctx->pc = 0x305658u;
            goto label_305658;
        }
    }
    ctx->pc = 0x305640u;
    // 0x305640: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x305640u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305644: 0x24a5ff90  addiu       $a1, $a1, -0x70
    ctx->pc = 0x305644u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967184));
    // 0x305648: 0xc0e9b16  jal         func_3A6C58
    ctx->pc = 0x305648u;
    SET_GPR_U32(ctx, 31, 0x305650u);
    ctx->pc = 0x30564Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305648u;
    // 0x30564c: 0x24c6fca8  addiu       $a2, $a2, -0x358 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294966440));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6C58u, 0x305648u, 0x305650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305650u;
label_305650:
    // 0x305650: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x305650u;
    {
        const bool branch_taken_0x305650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x305654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305650u;
        // 0x305654: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305650) {
            ctx->pc = 0x305750u;
            goto label_305750;
        }
    }
    ctx->pc = 0x305658u;
label_305658:
    // 0x305658: 0x28c204d8  slti        $v0, $a2, 0x4D8
    ctx->pc = 0x305658u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)1240) ? 1 : 0);
    // 0x30565c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x30565Cu;
    {
        const bool branch_taken_0x30565c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x305660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30565Cu;
        // 0x305660: 0x3c050045  lui         $a1, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30565c) {
            ctx->pc = 0x30567Cu;
            goto label_30567c;
        }
    }
    ctx->pc = 0x305664u;
    // 0x305664: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x305664u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305668: 0x24a5ffa0  addiu       $a1, $a1, -0x60
    ctx->pc = 0x305668u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967200));
    // 0x30566c: 0xc0e9b16  jal         func_3A6C58
    ctx->pc = 0x30566Cu;
    SET_GPR_U32(ctx, 31, 0x305674u);
    ctx->pc = 0x305670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30566Cu;
    // 0x305670: 0x24c6fba8  addiu       $a2, $a2, -0x458 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294966184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6C58u, 0x30566Cu, 0x305674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305674u;
label_305674:
    // 0x305674: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x305674u;
    {
        const bool branch_taken_0x305674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x305678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305674u;
        // 0x305678: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305674) {
            ctx->pc = 0x305750u;
            goto label_305750;
        }
    }
    ctx->pc = 0x30567Cu;
label_30567c:
    // 0x30567c: 0x240204d8  addiu       $v0, $zero, 0x4D8
    ctx->pc = 0x30567cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1240));
    // 0x305680: 0x14c20007  bne         $a2, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x305680u;
    {
        const bool branch_taken_0x305680 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x305684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305680u;
        // 0x305684: 0x240204d9  addiu       $v0, $zero, 0x4D9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1241));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305680) {
            ctx->pc = 0x3056A0u;
            goto label_3056a0;
        }
    }
    ctx->pc = 0x305688u;
    // 0x305688: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x305688u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x30568c: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x30568cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305690: 0xc0e9b16  jal         func_3A6C58
    ctx->pc = 0x305690u;
    SET_GPR_U32(ctx, 31, 0x305698u);
    ctx->pc = 0x305694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305690u;
    // 0x305694: 0x24a5ffb0  addiu       $a1, $a1, -0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6C58u, 0x305690u, 0x305698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305698u;
label_305698:
    // 0x305698: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x305698u;
    {
        const bool branch_taken_0x305698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30569Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305698u;
        // 0x30569c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305698) {
            ctx->pc = 0x305750u;
            goto label_305750;
        }
    }
    ctx->pc = 0x3056A0u;
label_3056a0:
    // 0x3056a0: 0x14c20007  bne         $a2, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3056A0u;
    {
        const bool branch_taken_0x3056a0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x3056A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3056A0u;
        // 0x3056a4: 0x240204da  addiu       $v0, $zero, 0x4DA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1242));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3056a0) {
            ctx->pc = 0x3056C0u;
            goto label_3056c0;
        }
    }
    ctx->pc = 0x3056A8u;
    // 0x3056a8: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x3056a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x3056ac: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x3056acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3056b0: 0xc0e9b16  jal         func_3A6C58
    ctx->pc = 0x3056B0u;
    SET_GPR_U32(ctx, 31, 0x3056B8u);
    ctx->pc = 0x3056B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3056B0u;
    // 0x3056b4: 0x24a5ffc0  addiu       $a1, $a1, -0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6C58u, 0x3056B0u, 0x3056B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3056B8u;
label_3056b8:
    // 0x3056b8: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x3056B8u;
    {
        const bool branch_taken_0x3056b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3056BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3056B8u;
        // 0x3056bc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3056b8) {
            ctx->pc = 0x305750u;
            goto label_305750;
        }
    }
    ctx->pc = 0x3056C0u;
label_3056c0:
    // 0x3056c0: 0x14c20007  bne         $a2, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3056C0u;
    {
        const bool branch_taken_0x3056c0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x3056C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3056C0u;
        // 0x3056c4: 0x240204db  addiu       $v0, $zero, 0x4DB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1243));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3056c0) {
            ctx->pc = 0x3056E0u;
            goto label_3056e0;
        }
    }
    ctx->pc = 0x3056C8u;
    // 0x3056c8: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x3056c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x3056cc: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x3056ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3056d0: 0xc0e9b16  jal         func_3A6C58
    ctx->pc = 0x3056D0u;
    SET_GPR_U32(ctx, 31, 0x3056D8u);
    ctx->pc = 0x3056D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3056D0u;
    // 0x3056d4: 0x24a5ffd0  addiu       $a1, $a1, -0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6C58u, 0x3056D0u, 0x3056D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3056D8u;
label_3056d8:
    // 0x3056d8: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x3056D8u;
    {
        const bool branch_taken_0x3056d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3056DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3056D8u;
        // 0x3056dc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3056d8) {
            ctx->pc = 0x305750u;
            goto label_305750;
        }
    }
    ctx->pc = 0x3056E0u;
label_3056e0:
    // 0x3056e0: 0x14c20007  bne         $a2, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3056E0u;
    {
        const bool branch_taken_0x3056e0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x3056E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3056E0u;
        // 0x3056e4: 0x240204e0  addiu       $v0, $zero, 0x4E0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3056e0) {
            ctx->pc = 0x305700u;
            goto label_305700;
        }
    }
    ctx->pc = 0x3056E8u;
    // 0x3056e8: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x3056e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x3056ec: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x3056ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3056f0: 0xc0e9b16  jal         func_3A6C58
    ctx->pc = 0x3056F0u;
    SET_GPR_U32(ctx, 31, 0x3056F8u);
    ctx->pc = 0x3056F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3056F0u;
    // 0x3056f4: 0x24a5ffe0  addiu       $a1, $a1, -0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6C58u, 0x3056F0u, 0x3056F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3056F8u;
label_3056f8:
    // 0x3056f8: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x3056F8u;
    {
        const bool branch_taken_0x3056f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3056FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3056F8u;
        // 0x3056fc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3056f8) {
            ctx->pc = 0x305750u;
            goto label_305750;
        }
    }
    ctx->pc = 0x305700u;
label_305700:
    // 0x305700: 0x14c20007  bne         $a2, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x305700u;
    {
        const bool branch_taken_0x305700 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x305704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305700u;
        // 0x305704: 0x240204e1  addiu       $v0, $zero, 0x4E1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1249));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305700) {
            ctx->pc = 0x305720u;
            goto label_305720;
        }
    }
    ctx->pc = 0x305708u;
    // 0x305708: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x305708u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x30570c: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x30570cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305710: 0xc0e9b16  jal         func_3A6C58
    ctx->pc = 0x305710u;
    SET_GPR_U32(ctx, 31, 0x305718u);
    ctx->pc = 0x305714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305710u;
    // 0x305714: 0x24a5fff0  addiu       $a1, $a1, -0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6C58u, 0x305710u, 0x305718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305718u;
label_305718:
    // 0x305718: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x305718u;
    {
        const bool branch_taken_0x305718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30571Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305718u;
        // 0x30571c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305718) {
            ctx->pc = 0x305750u;
            goto label_305750;
        }
    }
    ctx->pc = 0x305720u;
label_305720:
    // 0x305720: 0x54c20007  bnel        $a2, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x305720u;
    {
        const bool branch_taken_0x305720 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x305720) {
            ctx->pc = 0x305724u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x305720u;
            // 0x305724: 0x3c050045  lui         $a1, 0x45 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x305740u;
            goto label_305740;
        }
    }
    ctx->pc = 0x305728u;
    // 0x305728: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x305728u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x30572c: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x30572cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305730: 0xc0e9b16  jal         func_3A6C58
    ctx->pc = 0x305730u;
    SET_GPR_U32(ctx, 31, 0x305738u);
    ctx->pc = 0x305734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305730u;
    // 0x305734: 0x24a50000  addiu       $a1, $a1, 0x0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6C58u, 0x305730u, 0x305738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305738u;
label_305738:
    // 0x305738: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x305738u;
    {
        const bool branch_taken_0x305738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30573Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305738u;
        // 0x30573c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305738) {
            ctx->pc = 0x305750u;
            goto label_305750;
        }
    }
    ctx->pc = 0x305740u;
label_305740:
    // 0x305740: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x305740u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305744: 0xc0e9b16  jal         func_3A6C58
    ctx->pc = 0x305744u;
    SET_GPR_U32(ctx, 31, 0x30574Cu);
    ctx->pc = 0x305748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305744u;
    // 0x305748: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6C58u, 0x305744u, 0x30574Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30574Cu;
label_30574c:
    // 0x30574c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30574cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_305750:
    // 0x305750: 0x3e00008  jr          $ra
    ctx->pc = 0x305750u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x305754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305750u;
        // 0x305754: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x305750u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x305758u;
}
