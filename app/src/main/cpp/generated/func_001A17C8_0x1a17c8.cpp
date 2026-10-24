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

// Function: func_001A17C8
// Address: 0x1a17c8 - 0x1a20a8
void func_001A17C8_0x1a17c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001A17C8_0x1a17c8");
#endif

    switch (ctx->pc) {
        case 0x1a1860u: goto label_1a1860;
        case 0x1a18c0u: goto label_1a18c0;
        case 0x1a191cu: goto label_1a191c;
        case 0x1a1938u: goto label_1a1938;
        case 0x1a1958u: goto label_1a1958;
        case 0x1a1980u: goto label_1a1980;
        case 0x1a1998u: goto label_1a1998;
        case 0x1a19ecu: goto label_1a19ec;
        case 0x1a1a20u: goto label_1a1a20;
        case 0x1a1a48u: goto label_1a1a48;
        case 0x1a1a5cu: goto label_1a1a5c;
        case 0x1a1a78u: goto label_1a1a78;
        case 0x1a1b94u: goto label_1a1b94;
        case 0x1a1ba0u: goto label_1a1ba0;
        case 0x1a1bacu: goto label_1a1bac;
        case 0x1a1bbcu: goto label_1a1bbc;
        case 0x1a1bc8u: goto label_1a1bc8;
        case 0x1a1bd4u: goto label_1a1bd4;
        case 0x1a1bf0u: goto label_1a1bf0;
        case 0x1a1d1cu: goto label_1a1d1c;
        case 0x1a1d28u: goto label_1a1d28;
        case 0x1a1d34u: goto label_1a1d34;
        case 0x1a1d44u: goto label_1a1d44;
        case 0x1a1d50u: goto label_1a1d50;
        case 0x1a1d5cu: goto label_1a1d5c;
        case 0x1a1d78u: goto label_1a1d78;
        case 0x1a1da4u: goto label_1a1da4;
        case 0x1a1dccu: goto label_1a1dcc;
        case 0x1a1e00u: goto label_1a1e00;
        case 0x1a1e50u: goto label_1a1e50;
        case 0x1a1e94u: goto label_1a1e94;
        case 0x1a1ea4u: goto label_1a1ea4;
        case 0x1a1f20u: goto label_1a1f20;
        case 0x1a1f98u: goto label_1a1f98;
        case 0x1a1fb4u: goto label_1a1fb4;
        case 0x1a2008u: goto label_1a2008;
        default: break;
    }

    ctx->pc = 0x1a17c8u;

    // 0x1a17c8: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x1a17c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x1a17cc: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x1a17ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
    // 0x1a17d0: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x1a17d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
    // 0x1a17d4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1a17d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a17d8: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x1a17d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
    // 0x1a17dc: 0x7fb300c0  sq          $s3, 0xC0($sp)
    ctx->pc = 0x1a17dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 19));
    // 0x1a17e0: 0x7fb400b0  sq          $s4, 0xB0($sp)
    ctx->pc = 0x1a17e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 20));
    // 0x1a17e4: 0x7fb500a0  sq          $s5, 0xA0($sp)
    ctx->pc = 0x1a17e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 21));
    // 0x1a17e8: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x1a17e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
    // 0x1a17ec: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x1a17ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x1a17f0: 0x7fbe0070  sq          $fp, 0x70($sp)
    ctx->pc = 0x1a17f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 30));
    // 0x1a17f4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1a17f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1a17f8: 0xe7b60110  swc1        $f22, 0x110($sp)
    ctx->pc = 0x1a17f8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x1a17fc: 0xe7b50108  swc1        $f21, 0x108($sp)
    ctx->pc = 0x1a17fcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x1a1800: 0xe7b40100  swc1        $f20, 0x100($sp)
    ctx->pc = 0x1a1800u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x1a1804: 0x924302f5  lbu         $v1, 0x2F5($s2)
    ctx->pc = 0x1a1804u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 757)));
    // 0x1a1808: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x1a1808u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x1a180c: 0x10400216  beqz        $v0, . + 4 + (0x216 << 2)
    ctx->pc = 0x1A180Cu;
    {
        const bool branch_taken_0x1a180c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A180Cu;
        // 0x1a1810: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a180c) {
            ctx->pc = 0x1A2068u;
            goto label_1a2068;
        }
    }
    ctx->pc = 0x1A1814u;
    // 0x1a1814: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a1814u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a1818: 0x24426e60  addiu       $v0, $v0, 0x6E60
    ctx->pc = 0x1a1818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28256));
    // 0x1a181c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1a181cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a1820: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1a1820u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a1824: 0x800008  jr          $a0
    ctx->pc = 0x1A1824u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A182Cu: goto label_1a182c;
            case 0x1A1E10u: goto label_1a1e10;
            case 0x1A1E34u: goto label_1a1e34;
            case 0x1A1FCCu: goto label_1a1fcc;
            case 0x1A2010u: goto label_1a2010;
            case 0x1A2054u: goto label_1a2054;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A1824u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1A182Cu;
label_1a182c:
    // 0x1a182c: 0x82430d9c  lb          $v1, 0xD9C($s2)
    ctx->pc = 0x1a182cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 3484)));
    // 0x1a1830: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1a1830u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1834: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A1834u;
    {
        const bool branch_taken_0x1a1834 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1834u;
        // 0x1a1838: 0x92450d9c  lbu         $a1, 0xD9C($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3484)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1834) {
            ctx->pc = 0x1A1850u;
            goto label_1a1850;
        }
    }
    ctx->pc = 0x1A183Cu;
    // 0x1a183c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a183cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a1840: 0x1062001b  beq         $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1A1840u;
    {
        const bool branch_taken_0x1a1840 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A1844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1840u;
        // 0x1a1844: 0x52e00  sll         $a1, $a1, 24 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1840) {
            ctx->pc = 0x1A18B0u;
            goto label_1a18b0;
        }
    }
    ctx->pc = 0x1A1848u;
    // 0x1a1848: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x1A1848u;
    {
        const bool branch_taken_0x1a1848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A184Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1848u;
        // 0x1a184c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1848) {
            ctx->pc = 0x1A1914u;
            goto label_1a1914;
        }
    }
    ctx->pc = 0x1A1850u;
label_1a1850:
    // 0x1a1850: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a1850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1854: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a1854u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1858: 0xc0688f0  jal         func_1A23C0
    ctx->pc = 0x1A1858u;
    SET_GPR_U32(ctx, 31, 0x1A1860u);
    ctx->pc = 0x1A185Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1858u;
    // 0x1a185c: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A23C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A23C0u, 0x1A1858u, 0x1A1860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1860u;
label_1a1860:
    // 0x1a1860: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x1a1860u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x1a1864: 0x924302b4  lbu         $v1, 0x2B4($s2)
    ctx->pc = 0x1a1864u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 692)));
    // 0x1a1868: 0x90446f30  lbu         $a0, 0x6F30($v0)
    ctx->pc = 0x1a1868u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x426F30u));
    // 0x1a186c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a186cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1870: 0x28820000  slti        $v0, $a0, 0x0
    ctx->pc = 0x1a1870u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1a1874: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A1874u;
    {
        const bool branch_taken_0x1a1874 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A1878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1874u;
        // 0x1a1878: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1874) {
            ctx->pc = 0x1A1884u;
            goto label_1a1884;
        }
    }
    ctx->pc = 0x1A187Cu;
    // 0x1a187c: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x1a187cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1a1880: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1a1880u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a1884:
    // 0x1a1884: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x1a1884u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1a1888: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A1888u;
    {
        const bool branch_taken_0x1a1888 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A188Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1888u;
        // 0x1a188c: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1888) {
            ctx->pc = 0x1A18A0u;
            goto label_1a18a0;
        }
    }
    ctx->pc = 0x1A1890u;
    // 0x1a1890: 0x8e430278  lw          $v1, 0x278($s2)
    ctx->pc = 0x1a1890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 632)));
    // 0x1a1894: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a1894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a1898: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A1898u;
    {
        const bool branch_taken_0x1a1898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A189Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1898u;
        // 0x1a189c: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1898) {
            ctx->pc = 0x1A18A4u;
            goto label_1a18a4;
        }
    }
    ctx->pc = 0x1A18A0u;
label_1a18a0:
    // 0x1a18a0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a18a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a18a4:
    // 0x1a18a4: 0x24510080  addiu       $s1, $v0, 0x80
    ctx->pc = 0x1a18a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x1a18a8: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1A18A8u;
    {
        const bool branch_taken_0x1a18a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A18ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A18A8u;
        // 0x1a18ac: 0x92450d9c  lbu         $a1, 0xD9C($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3484)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a18a8) {
            ctx->pc = 0x1A190Cu;
            goto label_1a190c;
        }
    }
    ctx->pc = 0x1A18B0u;
label_1a18b0:
    // 0x1a18b0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a18b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a18b4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a18b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a18b8: 0xc0688f0  jal         func_1A23C0
    ctx->pc = 0x1A18B8u;
    SET_GPR_U32(ctx, 31, 0x1A18C0u);
    ctx->pc = 0x1A18BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A18B8u;
    // 0x1a18bc: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A23C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A23C0u, 0x1A18B8u, 0x1A18C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A18C0u;
label_1a18c0:
    // 0x1a18c0: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x1a18c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x1a18c4: 0x924302b4  lbu         $v1, 0x2B4($s2)
    ctx->pc = 0x1a18c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 692)));
    // 0x1a18c8: 0x90446f32  lbu         $a0, 0x6F32($v0)
    ctx->pc = 0x1a18c8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x426F32u));
    // 0x1a18cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a18ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a18d0: 0x28820000  slti        $v0, $a0, 0x0
    ctx->pc = 0x1a18d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1a18d4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A18D4u;
    {
        const bool branch_taken_0x1a18d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A18D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A18D4u;
        // 0x1a18d8: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a18d4) {
            ctx->pc = 0x1A18E4u;
            goto label_1a18e4;
        }
    }
    ctx->pc = 0x1A18DCu;
    // 0x1a18dc: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x1a18dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1a18e0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1a18e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a18e4:
    // 0x1a18e4: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x1a18e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1a18e8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A18E8u;
    {
        const bool branch_taken_0x1a18e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A18ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A18E8u;
        // 0x1a18ec: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a18e8) {
            ctx->pc = 0x1A1900u;
            goto label_1a1900;
        }
    }
    ctx->pc = 0x1A18F0u;
    // 0x1a18f0: 0x8e430278  lw          $v1, 0x278($s2)
    ctx->pc = 0x1a18f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 632)));
    // 0x1a18f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a18f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a18f8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A18F8u;
    {
        const bool branch_taken_0x1a18f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A18FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A18F8u;
        // 0x1a18fc: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a18f8) {
            ctx->pc = 0x1A1904u;
            goto label_1a1904;
        }
    }
    ctx->pc = 0x1A1900u;
label_1a1900:
    // 0x1a1900: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a1900u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a1904:
    // 0x1a1904: 0x92450d9c  lbu         $a1, 0xD9C($s2)
    ctx->pc = 0x1a1904u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3484)));
    // 0x1a1908: 0x24510080  addiu       $s1, $v0, 0x80
    ctx->pc = 0x1a1908u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
label_1a190c:
    // 0x1a190c: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x1a190cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x1a1910: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a1910u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1a1914:
    // 0x1a1914: 0xc0688d4  jal         func_1A2350
    ctx->pc = 0x1A1914u;
    SET_GPR_U32(ctx, 31, 0x1A191Cu);
    ctx->pc = 0x1A1918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1914u;
    // 0x1a1918: 0x52e03  sra         $a1, $a1, 24 (Delay Slot)
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2350u, 0x1A1914u, 0x1A191Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A191Cu;
label_1a191c:
    // 0x1a191c: 0x12200019  beqz        $s1, . + 4 + (0x19 << 2)
    ctx->pc = 0x1A191Cu;
    {
        const bool branch_taken_0x1a191c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A191Cu;
        // 0x1a1920: 0x26550d90  addiu       $s5, $s2, 0xD90 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 3472));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a191c) {
            ctx->pc = 0x1A1984u;
            goto label_1a1984;
        }
    }
    ctx->pc = 0x1A1924u;
    // 0x1a1924: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x1a1924u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1a1928: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x1a1928u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1a192c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1a192cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1930: 0xc051f18  jal         func_147C60
    ctx->pc = 0x1A1930u;
    SET_GPR_U32(ctx, 31, 0x1A1938u);
    ctx->pc = 0x1A1934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1930u;
    // 0x1a1934: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C60u, 0x1A1930u, 0x1A1938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1938u;
label_1a1938:
    // 0x1a1938: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1a1938u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1a193c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1a193cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a1940: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1a1940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1944: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1a1944u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1948: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1a1948u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1a194c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a194cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1950: 0xc0c1a0e  jal         func_306838
    ctx->pc = 0x1A1950u;
    SET_GPR_U32(ctx, 31, 0x1A1958u);
    ctx->pc = 0x1A1954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1950u;
    // 0x1a1954: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306838u, 0x1A1950u, 0x1A1958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1958u;
label_1a1958:
    // 0x1a1958: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1a1958u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1a195c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1a195cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a1960: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1a1960u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1a1964: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1a1964u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1a1968: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1a1968u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a196c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1a196cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1970: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1a1970u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1974: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1a1974u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1978: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x1A1978u;
    SET_GPR_U32(ctx, 31, 0x1A1980u);
    ctx->pc = 0x1A197Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1978u;
    // 0x1a197c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x1A1978u, 0x1A1980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1980u;
label_1a1980:
    // 0x1a1980: 0x26550d90  addiu       $s5, $s2, 0xD90
    ctx->pc = 0x1a1980u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 3472));
label_1a1984:
    // 0x1a1984: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1a1984u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1988: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x1a1988u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a198c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a198cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1990: 0x3c098000  lui         $t1, 0x8000
    ctx->pc = 0x1a1990u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)32768 << 16));
    // 0x1a1994: 0x0  nop
    ctx->pc = 0x1a1994u;
    // NOP
label_1a1998:
    // 0x1a1998: 0x61142  srl         $v0, $a2, 5
    ctx->pc = 0x1a1998u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 5));
    // 0x1a199c: 0x30c4001f  andi        $a0, $a2, 0x1F
    ctx->pc = 0x1a199cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)31);
    // 0x1a19a0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a19a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a19a4: 0x892006  srlv        $a0, $t1, $a0
    ctx->pc = 0x1a19a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 9), GPR_U32(ctx, 4) & 0x1F));
    // 0x1a19a8: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1a19a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1a19ac: 0x24e50001  addiu       $a1, $a3, 0x1
    ctx->pc = 0x1a19acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1a19b0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1a19b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a19b4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1a19b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1a19b8: 0x2cc20002  sltiu       $v0, $a2, 0x2
    ctx->pc = 0x1a19b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1a19bc: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1a19bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1a19c0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x1A19C0u;
    {
        const bool branch_taken_0x1a19c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A19C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A19C0u;
        // 0x1a19c4: 0xa3380b  movn        $a3, $a1, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a19c0) {
            ctx->pc = 0x1A1998u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a1998;
        }
    }
    ctx->pc = 0x1A19C8u;
    // 0x1a19c8: 0x14e00004  bnez        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A19C8u;
    {
        const bool branch_taken_0x1a19c8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a19c8) {
            ctx->pc = 0x1A19DCu;
            goto label_1a19dc;
        }
    }
    ctx->pc = 0x1A19D0u;
    // 0x1a19d0: 0xa24002f7  sb          $zero, 0x2F7($s2)
    ctx->pc = 0x1a19d0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a19d4: 0x100001a2  b           . + 4 + (0x1A2 << 2)
    ctx->pc = 0x1A19D4u;
    {
        const bool branch_taken_0x1a19d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A19D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A19D4u;
        // 0x1a19d8: 0xa24002f4  sb          $zero, 0x2F4($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 756), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a19d4) {
            ctx->pc = 0x1A2060u;
            goto label_1a2060;
        }
    }
    ctx->pc = 0x1A19DCu;
label_1a19dc:
    // 0x1a19dc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1a19dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1a19e0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1a19e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1a19e4: 0xc06de42  jal         func_1B7908
    ctx->pc = 0x1A19E4u;
    SET_GPR_U32(ctx, 31, 0x1A19ECu);
    ctx->pc = 0x1A19E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A19E4u;
    // 0x1a19e8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7908u, 0x1A19E4u, 0x1A19ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A19ECu;
label_1a19ec:
    // 0x1a19ec: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1a19ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1a19f0: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1a19f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x1a19f4: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1a19f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x1a19f8: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x1a19f8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1a19fc: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x1a19fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1a1a00: 0x264205c0  addiu       $v0, $s2, 0x5C0
    ctx->pc = 0x1a1a00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1472));
    // 0x1a1a04: 0x4600a546  mov.s       $f21, $f20
    ctx->pc = 0x1a1a04u;
    ctx->f[21] = FPU_MOV_S(ctx->f[20]);
    // 0x1a1a08: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x1a1a08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    // 0x1a1a0c: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x1a1a0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x1a1a10: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1a1a10u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1a1a14: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1a1a14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1a1a18: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x1A1A18u;
    SET_GPR_U32(ctx, 31, 0x1A1A20u);
    ctx->pc = 0x1A1A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1A18u;
    // 0x1a1a1c: 0x3c1e0042  lui         $fp, 0x42 (Delay Slot)
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)66 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x1A1A18u, 0x1A1A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1A20u;
label_1a1a20:
    // 0x1a1a20: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x1a1a20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a1a24: 0x27d66f30  addiu       $s6, $fp, 0x6F30
    ctx->pc = 0x1a1a24u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 30), 28464));
    // 0x1a1a28: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1a1a28u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1a1a2c: 0x3c01bca3  lui         $at, 0xBCA3
    ctx->pc = 0x1a1a2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48291 << 16));
    // 0x1a1a30: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1a1a30u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1a1a34: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x1a1a34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x1a1a38: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1a1a38u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1a3c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1a1a3cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1a1a40: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x1A1A40u;
    SET_GPR_U32(ctx, 31, 0x1A1A48u);
    ctx->pc = 0x1A1A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1A40u;
    // 0x1a1a44: 0xe7a10020  swc1        $f1, 0x20($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x1A1A40u, 0x1A1A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1A48u;
label_1a1a48:
    // 0x1a1a48: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1a1a48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1a1a4c: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x1a1a4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a1a50: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1a1a50u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1a1a54: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x1A1A54u;
    SET_GPR_U32(ctx, 31, 0x1A1A5Cu);
    ctx->pc = 0x1A1A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1A54u;
    // 0x1a1a58: 0xe7a10024  swc1        $f1, 0x24($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x1A1A54u, 0x1A1A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1A5Cu;
label_1a1a5c:
    // 0x1a1a5c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1a1a5cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1a1a60: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x1a1a60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a1a64: 0x27b70030  addiu       $s7, $sp, 0x30
    ctx->pc = 0x1a1a64u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1a1a68: 0x27b40040  addiu       $s4, $sp, 0x40
    ctx->pc = 0x1a1a68u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1a1a6c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1a1a6cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1a1a70: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x1a1a70u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1a1a74: 0x131942  srl         $v1, $s3, 5
    ctx->pc = 0x1a1a74u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 19), 5));
label_1a1a78:
    // 0x1a1a78: 0x3265001f  andi        $a1, $s3, 0x1F
    ctx->pc = 0x1a1a78u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)31);
    // 0x1a1a7c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a1a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a1a80: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1a1a80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1a1a84: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x1a1a84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x1a1a88: 0xa42006  srlv        $a0, $a0, $a1
    ctx->pc = 0x1a1a88u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), GPR_U32(ctx, 5) & 0x1F));
    // 0x1a1a8c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1a1a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a1a90: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x1a1a90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x1a1a94: 0x54400058  bnel        $v0, $zero, . + 4 + (0x58 << 2)
    ctx->pc = 0x1A1A94u;
    {
        const bool branch_taken_0x1a1a94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a1a94) {
            ctx->pc = 0x1A1A98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A1A94u;
            // 0x1a1a98: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A1BF8u;
            goto label_1a1bf8;
        }
    }
    ctx->pc = 0x1A1A9Cu;
    // 0x1a1a9c: 0x92c2000a  lbu         $v0, 0xA($s6)
    ctx->pc = 0x1a1a9cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 10)));
    // 0x1a1aa0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a1aa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1aa4: 0x924302b4  lbu         $v1, 0x2B4($s2)
    ctx->pc = 0x1a1aa4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 692)));
    // 0x1a1aa8: 0x532021  addu        $a0, $v0, $s3
    ctx->pc = 0x1a1aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1a1aac: 0x4800003  bltz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A1AACu;
    {
        const bool branch_taken_0x1a1aac = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x1A1AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1AACu;
        // 0x1a1ab0: 0xafa30030  sw          $v1, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1aac) {
            ctx->pc = 0x1A1ABCu;
            goto label_1a1abc;
        }
    }
    ctx->pc = 0x1A1AB4u;
    // 0x1a1ab4: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x1a1ab4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1a1ab8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1a1ab8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a1abc:
    // 0x1a1abc: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x1a1abcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1a1ac0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A1AC0u;
    {
        const bool branch_taken_0x1a1ac0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1AC0u;
        // 0x1a1ac4: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1ac0) {
            ctx->pc = 0x1A1AD8u;
            goto label_1a1ad8;
        }
    }
    ctx->pc = 0x1A1AC8u;
    // 0x1a1ac8: 0x8e430278  lw          $v1, 0x278($s2)
    ctx->pc = 0x1a1ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 632)));
    // 0x1a1acc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a1accu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a1ad0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A1AD0u;
    {
        const bool branch_taken_0x1a1ad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1AD0u;
        // 0x1a1ad4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1ad0) {
            ctx->pc = 0x1A1ADCu;
            goto label_1a1adc;
        }
    }
    ctx->pc = 0x1A1AD8u;
label_1a1ad8:
    // 0x1a1ad8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1a1ad8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a1adc:
    // 0x1a1adc: 0x8c820154  lw          $v0, 0x154($a0)
    ctx->pc = 0x1a1adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
    // 0x1a1ae0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a1ae0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1ae4: 0x92c3000a  lbu         $v1, 0xA($s6)
    ctx->pc = 0x1a1ae4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 10)));
    // 0x1a1ae8: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x1a1ae8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x1a1aec: 0xac820154  sw          $v0, 0x154($a0)
    ctx->pc = 0x1a1aecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 2));
    // 0x1a1af0: 0x732021  addu        $a0, $v1, $s3
    ctx->pc = 0x1a1af0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x1a1af4: 0x924202b4  lbu         $v0, 0x2B4($s2)
    ctx->pc = 0x1a1af4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 692)));
    // 0x1a1af8: 0x4800003  bltz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A1AF8u;
    {
        const bool branch_taken_0x1a1af8 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x1A1AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1AF8u;
        // 0x1a1afc: 0xafa20030  sw          $v0, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1af8) {
            ctx->pc = 0x1A1B08u;
            goto label_1a1b08;
        }
    }
    ctx->pc = 0x1A1B00u;
    // 0x1a1b00: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x1a1b00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1a1b04: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1a1b04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a1b08:
    // 0x1a1b08: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x1a1b08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1a1b0c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A1B0Cu;
    {
        const bool branch_taken_0x1a1b0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1B0Cu;
        // 0x1a1b10: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1b0c) {
            ctx->pc = 0x1A1B24u;
            goto label_1a1b24;
        }
    }
    ctx->pc = 0x1A1B14u;
    // 0x1a1b14: 0x8e430278  lw          $v1, 0x278($s2)
    ctx->pc = 0x1a1b14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 632)));
    // 0x1a1b18: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a1b18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a1b1c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A1B1Cu;
    {
        const bool branch_taken_0x1a1b1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1B1Cu;
        // 0x1a1b20: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1b1c) {
            ctx->pc = 0x1A1B28u;
            goto label_1a1b28;
        }
    }
    ctx->pc = 0x1A1B24u;
label_1a1b24:
    // 0x1a1b24: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1a1b24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a1b28:
    // 0x1a1b28: 0x8c820154  lw          $v0, 0x154($a0)
    ctx->pc = 0x1a1b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
    // 0x1a1b2c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a1b2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1b30: 0x92c3000a  lbu         $v1, 0xA($s6)
    ctx->pc = 0x1a1b30u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 10)));
    // 0x1a1b34: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x1a1b34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x1a1b38: 0xac820154  sw          $v0, 0x154($a0)
    ctx->pc = 0x1a1b38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 2));
    // 0x1a1b3c: 0x732021  addu        $a0, $v1, $s3
    ctx->pc = 0x1a1b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x1a1b40: 0x924202b4  lbu         $v0, 0x2B4($s2)
    ctx->pc = 0x1a1b40u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 692)));
    // 0x1a1b44: 0x4800003  bltz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A1B44u;
    {
        const bool branch_taken_0x1a1b44 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x1A1B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1B44u;
        // 0x1a1b48: 0xafa20030  sw          $v0, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1b44) {
            ctx->pc = 0x1A1B54u;
            goto label_1a1b54;
        }
    }
    ctx->pc = 0x1A1B4Cu;
    // 0x1a1b4c: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x1a1b4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1a1b50: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1a1b50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a1b54:
    // 0x1a1b54: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x1a1b54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1a1b58: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A1B58u;
    {
        const bool branch_taken_0x1a1b58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1B58u;
        // 0x1a1b5c: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1b58) {
            ctx->pc = 0x1A1B70u;
            goto label_1a1b70;
        }
    }
    ctx->pc = 0x1A1B60u;
    // 0x1a1b60: 0x8e430278  lw          $v1, 0x278($s2)
    ctx->pc = 0x1a1b60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 632)));
    // 0x1a1b64: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a1b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a1b68: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A1B68u;
    {
        const bool branch_taken_0x1a1b68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1B68u;
        // 0x1a1b6c: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1b68) {
            ctx->pc = 0x1A1B74u;
            goto label_1a1b74;
        }
    }
    ctx->pc = 0x1A1B70u;
label_1a1b70:
    // 0x1a1b70: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a1b70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a1b74:
    // 0x1a1b74: 0x24510080  addiu       $s1, $v0, 0x80
    ctx->pc = 0x1a1b74u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x1a1b78: 0x24100060  addiu       $s0, $zero, 0x60
    ctx->pc = 0x1a1b78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x1a1b7c: 0x901018  mult        $v0, $a0, $s0
    ctx->pc = 0x1a1b7cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1a1b80: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a1b80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a1b84: 0x528021  addu        $s0, $v0, $s2
    ctx->pc = 0x1a1b84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1a1b88: 0x26100610  addiu       $s0, $s0, 0x610
    ctx->pc = 0x1a1b88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1552));
    // 0x1a1b8c: 0xc05bd90  jal         func_16F640
    ctx->pc = 0x1A1B8Cu;
    SET_GPR_U32(ctx, 31, 0x1A1B94u);
    ctx->pc = 0x1A1B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1B8Cu;
    // 0x1a1b90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F640u, 0x1A1B8Cu, 0x1A1B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1B94u;
label_1a1b94:
    // 0x1a1b94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a1b94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1b98: 0xc05ce66  jal         func_173998
    ctx->pc = 0x1A1B98u;
    SET_GPR_U32(ctx, 31, 0x1A1BA0u);
    ctx->pc = 0x1A1B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1B98u;
    // 0x1a1b9c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173998u, 0x1A1B98u, 0x1A1BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1BA0u;
label_1a1ba0:
    // 0x1a1ba0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a1ba0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1ba4: 0xc051f18  jal         func_147C60
    ctx->pc = 0x1A1BA4u;
    SET_GPR_U32(ctx, 31, 0x1A1BACu);
    ctx->pc = 0x1A1BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1BA4u;
    // 0x1a1ba8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C60u, 0x1A1BA4u, 0x1A1BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1BACu;
label_1a1bac:
    // 0x1a1bac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a1bacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1bb0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1a1bb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1bb4: 0xc051f22  jal         func_147C88
    ctx->pc = 0x1A1BB4u;
    SET_GPR_U32(ctx, 31, 0x1A1BBCu);
    ctx->pc = 0x1A1BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1BB4u;
    // 0x1a1bb8: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C88u, 0x1A1BB4u, 0x1A1BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1BBCu;
label_1a1bbc:
    // 0x1a1bbc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1a1bbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1bc0: 0xc05ce42  jal         func_173908
    ctx->pc = 0x1A1BC0u;
    SET_GPR_U32(ctx, 31, 0x1A1BC8u);
    ctx->pc = 0x1A1BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1BC0u;
    // 0x1a1bc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173908u, 0x1A1BC0u, 0x1A1BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1BC8u;
label_1a1bc8:
    // 0x1a1bc8: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1a1bc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1a1bcc: 0xc05ce4e  jal         func_173938
    ctx->pc = 0x1A1BCCu;
    SET_GPR_U32(ctx, 31, 0x1A1BD4u);
    ctx->pc = 0x1A1BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1BCCu;
    // 0x1a1bd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173938u, 0x1A1BCCu, 0x1A1BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1BD4u;
label_1a1bd4:
    // 0x1a1bd4: 0xe7b50040  swc1        $f21, 0x40($sp)
    ctx->pc = 0x1a1bd4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1a1bd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a1bd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1bdc: 0xe6950004  swc1        $f21, 0x4($s4)
    ctx->pc = 0x1a1bdcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
    // 0x1a1be0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1a1be0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1be4: 0xe6950008  swc1        $f21, 0x8($s4)
    ctx->pc = 0x1a1be4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 8), bits); }
    // 0x1a1be8: 0xc05ce5a  jal         func_173968
    ctx->pc = 0x1A1BE8u;
    SET_GPR_U32(ctx, 31, 0x1A1BF0u);
    ctx->pc = 0x1A1BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1BE8u;
    // 0x1a1bec: 0xe695000c  swc1        $f21, 0xC($s4) (Delay Slot)
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x173968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173968u, 0x1A1BE8u, 0x1A1BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1BF0u;
label_1a1bf0:
    // 0x1a1bf0: 0xe6160058  swc1        $f22, 0x58($s0)
    ctx->pc = 0x1a1bf0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x1a1bf4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1a1bf4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1a1bf8:
    // 0x1a1bf8: 0x2e620002  sltiu       $v0, $s3, 0x2
    ctx->pc = 0x1a1bf8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1a1bfc: 0x1440ff9e  bnez        $v0, . + 4 + (-0x62 << 2)
    ctx->pc = 0x1A1BFCu;
    {
        const bool branch_taken_0x1a1bfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A1C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1BFCu;
        // 0x1a1c00: 0x131942  srl         $v1, $s3, 5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 19), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1bfc) {
            ctx->pc = 0x1A1A78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a1a78;
        }
    }
    ctx->pc = 0x1A1C04u;
    // 0x1a1c04: 0x27c26f30  addiu       $v0, $fp, 0x6F30
    ctx->pc = 0x1a1c04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 28464));
    // 0x1a1c08: 0x924302b4  lbu         $v1, 0x2B4($s2)
    ctx->pc = 0x1a1c08u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 692)));
    // 0x1a1c0c: 0x90440004  lbu         $a0, 0x4($v0)
    ctx->pc = 0x1a1c0cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1a1c10: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a1c10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1c14: 0x28820000  slti        $v0, $a0, 0x0
    ctx->pc = 0x1a1c14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1a1c18: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A1C18u;
    {
        const bool branch_taken_0x1a1c18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A1C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1C18u;
        // 0x1a1c1c: 0xafa30030  sw          $v1, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1c18) {
            ctx->pc = 0x1A1C28u;
            goto label_1a1c28;
        }
    }
    ctx->pc = 0x1A1C20u;
    // 0x1a1c20: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x1a1c20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1a1c24: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1a1c24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a1c28:
    // 0x1a1c28: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x1a1c28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1a1c2c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A1C2Cu;
    {
        const bool branch_taken_0x1a1c2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1C2Cu;
        // 0x1a1c30: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1c2c) {
            ctx->pc = 0x1A1C44u;
            goto label_1a1c44;
        }
    }
    ctx->pc = 0x1A1C34u;
    // 0x1a1c34: 0x8e430278  lw          $v1, 0x278($s2)
    ctx->pc = 0x1a1c34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 632)));
    // 0x1a1c38: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a1c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a1c3c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A1C3Cu;
    {
        const bool branch_taken_0x1a1c3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1C3Cu;
        // 0x1a1c40: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1c3c) {
            ctx->pc = 0x1A1C48u;
            goto label_1a1c48;
        }
    }
    ctx->pc = 0x1A1C44u;
label_1a1c44:
    // 0x1a1c44: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1a1c44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a1c48:
    // 0x1a1c48: 0x8c820154  lw          $v0, 0x154($a0)
    ctx->pc = 0x1a1c48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
    // 0x1a1c4c: 0x27c36f30  addiu       $v1, $fp, 0x6F30
    ctx->pc = 0x1a1c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 28464));
    // 0x1a1c50: 0x90650004  lbu         $a1, 0x4($v1)
    ctx->pc = 0x1a1c50u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1a1c54: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a1c54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1c58: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x1a1c58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x1a1c5c: 0xac820154  sw          $v0, 0x154($a0)
    ctx->pc = 0x1a1c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 2));
    // 0x1a1c60: 0x28a30000  slti        $v1, $a1, 0x0
    ctx->pc = 0x1a1c60u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1a1c64: 0x924202b4  lbu         $v0, 0x2B4($s2)
    ctx->pc = 0x1a1c64u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 692)));
    // 0x1a1c68: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A1C68u;
    {
        const bool branch_taken_0x1a1c68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A1C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1C68u;
        // 0x1a1c6c: 0xafa20030  sw          $v0, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1c68) {
            ctx->pc = 0x1A1C78u;
            goto label_1a1c78;
        }
    }
    ctx->pc = 0x1A1C70u;
    // 0x1a1c70: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x1a1c70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1a1c74: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1a1c74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a1c78:
    // 0x1a1c78: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x1a1c78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x1a1c7c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A1C7Cu;
    {
        const bool branch_taken_0x1a1c7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1C7Cu;
        // 0x1a1c80: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1c7c) {
            ctx->pc = 0x1A1C94u;
            goto label_1a1c94;
        }
    }
    ctx->pc = 0x1A1C84u;
    // 0x1a1c84: 0x8e430278  lw          $v1, 0x278($s2)
    ctx->pc = 0x1a1c84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 632)));
    // 0x1a1c88: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a1c88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a1c8c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A1C8Cu;
    {
        const bool branch_taken_0x1a1c8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1C8Cu;
        // 0x1a1c90: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1c8c) {
            ctx->pc = 0x1A1C98u;
            goto label_1a1c98;
        }
    }
    ctx->pc = 0x1A1C94u;
label_1a1c94:
    // 0x1a1c94: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1a1c94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a1c98:
    // 0x1a1c98: 0x8c820154  lw          $v0, 0x154($a0)
    ctx->pc = 0x1a1c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
    // 0x1a1c9c: 0x27c36f30  addiu       $v1, $fp, 0x6F30
    ctx->pc = 0x1a1c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 28464));
    // 0x1a1ca0: 0x90650004  lbu         $a1, 0x4($v1)
    ctx->pc = 0x1a1ca0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1a1ca4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a1ca4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1ca8: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x1a1ca8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x1a1cac: 0xac820154  sw          $v0, 0x154($a0)
    ctx->pc = 0x1a1cacu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 2));
    // 0x1a1cb0: 0x28a30000  slti        $v1, $a1, 0x0
    ctx->pc = 0x1a1cb0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1a1cb4: 0x924202b4  lbu         $v0, 0x2B4($s2)
    ctx->pc = 0x1a1cb4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 692)));
    // 0x1a1cb8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A1CB8u;
    {
        const bool branch_taken_0x1a1cb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A1CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1CB8u;
        // 0x1a1cbc: 0xafa20030  sw          $v0, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1cb8) {
            ctx->pc = 0x1A1CC8u;
            goto label_1a1cc8;
        }
    }
    ctx->pc = 0x1A1CC0u;
    // 0x1a1cc0: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x1a1cc0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1a1cc4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1a1cc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a1cc8:
    // 0x1a1cc8: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x1a1cc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x1a1ccc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A1CCCu;
    {
        const bool branch_taken_0x1a1ccc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1CCCu;
        // 0x1a1cd0: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1ccc) {
            ctx->pc = 0x1A1CE4u;
            goto label_1a1ce4;
        }
    }
    ctx->pc = 0x1A1CD4u;
    // 0x1a1cd4: 0x8e430278  lw          $v1, 0x278($s2)
    ctx->pc = 0x1a1cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 632)));
    // 0x1a1cd8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a1cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a1cdc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A1CDCu;
    {
        const bool branch_taken_0x1a1cdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1CDCu;
        // 0x1a1ce0: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1cdc) {
            ctx->pc = 0x1A1CE8u;
            goto label_1a1ce8;
        }
    }
    ctx->pc = 0x1A1CE4u;
label_1a1ce4:
    // 0x1a1ce4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a1ce4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a1ce8:
    // 0x1a1ce8: 0x24510080  addiu       $s1, $v0, 0x80
    ctx->pc = 0x1a1ce8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x1a1cec: 0x24100060  addiu       $s0, $zero, 0x60
    ctx->pc = 0x1a1cecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x1a1cf0: 0xb01018  mult        $v0, $a1, $s0
    ctx->pc = 0x1a1cf0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1a1cf4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1a1cf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1a1cf8: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1a1cf8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1a1cfc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a1cfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a1d00: 0x3c01bca3  lui         $at, 0xBCA3
    ctx->pc = 0x1a1d00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48291 << 16));
    // 0x1a1d04: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1a1d04u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1a1d08: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1a1d08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1a1d0c: 0x528021  addu        $s0, $v0, $s2
    ctx->pc = 0x1a1d0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1a1d10: 0x26100610  addiu       $s0, $s0, 0x610
    ctx->pc = 0x1a1d10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1552));
    // 0x1a1d14: 0xc05bd90  jal         func_16F640
    ctx->pc = 0x1A1D14u;
    SET_GPR_U32(ctx, 31, 0x1A1D1Cu);
    ctx->pc = 0x1A1D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1D14u;
    // 0x1a1d18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F640u, 0x1A1D14u, 0x1A1D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1D1Cu;
label_1a1d1c:
    // 0x1a1d1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a1d1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1d20: 0xc05ce66  jal         func_173998
    ctx->pc = 0x1A1D20u;
    SET_GPR_U32(ctx, 31, 0x1A1D28u);
    ctx->pc = 0x1A1D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1D20u;
    // 0x1a1d24: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173998u, 0x1A1D20u, 0x1A1D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1D28u;
label_1a1d28:
    // 0x1a1d28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a1d28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1d2c: 0xc051f18  jal         func_147C60
    ctx->pc = 0x1A1D2Cu;
    SET_GPR_U32(ctx, 31, 0x1A1D34u);
    ctx->pc = 0x1A1D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1D2Cu;
    // 0x1a1d30: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C60u, 0x1A1D2Cu, 0x1A1D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1D34u;
label_1a1d34:
    // 0x1a1d34: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a1d34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1d38: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1a1d38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1d3c: 0xc051f22  jal         func_147C88
    ctx->pc = 0x1A1D3Cu;
    SET_GPR_U32(ctx, 31, 0x1A1D44u);
    ctx->pc = 0x1A1D40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1D3Cu;
    // 0x1a1d40: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C88u, 0x1A1D3Cu, 0x1A1D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1D44u;
label_1a1d44:
    // 0x1a1d44: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1a1d44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1d48: 0xc05ce42  jal         func_173908
    ctx->pc = 0x1A1D48u;
    SET_GPR_U32(ctx, 31, 0x1A1D50u);
    ctx->pc = 0x1A1D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1D48u;
    // 0x1a1d4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173908u, 0x1A1D48u, 0x1A1D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1D50u;
label_1a1d50:
    // 0x1a1d50: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1a1d50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1a1d54: 0xc05ce4e  jal         func_173938
    ctx->pc = 0x1A1D54u;
    SET_GPR_U32(ctx, 31, 0x1A1D5Cu);
    ctx->pc = 0x1A1D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1D54u;
    // 0x1a1d58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173938u, 0x1A1D54u, 0x1A1D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1D5Cu;
label_1a1d5c:
    // 0x1a1d5c: 0xe7b50030  swc1        $f21, 0x30($sp)
    ctx->pc = 0x1a1d5cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1a1d60: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1a1d60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1d64: 0xe6f50004  swc1        $f21, 0x4($s7)
    ctx->pc = 0x1a1d64u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 4), bits); }
    // 0x1a1d68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a1d68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1d6c: 0xe6f50008  swc1        $f21, 0x8($s7)
    ctx->pc = 0x1a1d6cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 8), bits); }
    // 0x1a1d70: 0xc05ce5a  jal         func_173968
    ctx->pc = 0x1A1D70u;
    SET_GPR_U32(ctx, 31, 0x1A1D78u);
    ctx->pc = 0x1A1D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1D70u;
    // 0x1a1d74: 0xe6f5000c  swc1        $f21, 0xC($s7) (Delay Slot)
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x173968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173968u, 0x1A1D70u, 0x1A1D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1D78u;
label_1a1d78:
    // 0x1a1d78: 0xe6140058  swc1        $f20, 0x58($s0)
    ctx->pc = 0x1a1d78u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x1a1d7c: 0x8e4505ec  lw          $a1, 0x5EC($s2)
    ctx->pc = 0x1a1d7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1516)));
    // 0x1a1d80: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A1D80u;
    {
        const bool branch_taken_0x1a1d80 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1D80u;
        // 0x1a1d84: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1d80) {
            ctx->pc = 0x1A1DA8u;
            goto label_1a1da8;
        }
    }
    ctx->pc = 0x1A1D88u;
    // 0x1a1d88: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x1a1d88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1a1d8c: 0x8e4405f0  lw          $a0, 0x5F0($s2)
    ctx->pc = 0x1a1d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1520)));
    // 0x1a1d90: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x1a1d90u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x1a1d94: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a1d94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1d98: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x1a1d98u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1d9c: 0xc0c1a0e  jal         func_306838
    ctx->pc = 0x1A1D9Cu;
    SET_GPR_U32(ctx, 31, 0x1A1DA4u);
    ctx->pc = 0x1A1DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1D9Cu;
    // 0x1a1da0: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306838u, 0x1A1D9Cu, 0x1A1DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1DA4u;
label_1a1da4:
    // 0x1a1da4: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1a1da4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_1a1da8:
    // 0x1a1da8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1a1da8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a1dac: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1a1dacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1a1db0: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1a1db0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1a1db4: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1a1db4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1db8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1a1db8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1dbc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1a1dbcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1dc0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1a1dc0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1dc4: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x1A1DC4u;
    SET_GPR_U32(ctx, 31, 0x1A1DCCu);
    ctx->pc = 0x1A1DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1DC4u;
    // 0x1a1dc8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x1A1DC4u, 0x1A1DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1DCCu;
label_1a1dcc:
    // 0x1a1dcc: 0xae4005c0  sw          $zero, 0x5C0($s2)
    ctx->pc = 0x1a1dccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1472), GPR_U32(ctx, 0));
    // 0x1a1dd0: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x1a1dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x1a1dd4: 0x3c014140  lui         $at, 0x4140
    ctx->pc = 0x1a1dd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16704 << 16));
    // 0x1a1dd8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a1dd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a1ddc: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x1a1ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a1de0: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x1a1de0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x1a1de4: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x1a1de4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x1a1de8: 0xa6420d94  sh          $v0, 0xD94($s2)
    ctx->pc = 0x1a1de8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 3476), (uint16_t)GPR_U32(ctx, 2));
    // 0x1a1dec: 0x8e440608  lw          $a0, 0x608($s2)
    ctx->pc = 0x1a1decu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1544)));
    // 0x1a1df0: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A1DF0u;
    {
        const bool branch_taken_0x1a1df0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1DF0u;
        // 0x1a1df4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1df0) {
            ctx->pc = 0x1A1E04u;
            goto label_1a1e04;
        }
    }
    ctx->pc = 0x1A1DF8u;
    // 0x1a1df8: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x1A1DF8u;
    SET_GPR_U32(ctx, 31, 0x1A1E00u);
    ctx->pc = 0x1A1DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1DF8u;
    // 0x1a1dfc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x1A1DF8u, 0x1A1E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1E00u;
label_1a1e00:
    // 0x1a1e00: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a1e00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a1e04:
    // 0x1a1e04: 0xa24002f6  sb          $zero, 0x2F6($s2)
    ctx->pc = 0x1a1e04u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a1e08: 0xa24202f5  sb          $v0, 0x2F5($s2)
    ctx->pc = 0x1a1e08u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x1a1e0c: 0xa24002f7  sb          $zero, 0x2F7($s2)
    ctx->pc = 0x1a1e0cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 759), (uint8_t)GPR_U32(ctx, 0));
label_1a1e10:
    // 0x1a1e10: 0x96420d94  lhu         $v0, 0xD94($s2)
    ctx->pc = 0x1a1e10u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 3476)));
    // 0x1a1e14: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1a1e14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1a1e18: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x1a1e18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1a1e1c: 0x1c600092  bgtz        $v1, . + 4 + (0x92 << 2)
    ctx->pc = 0x1A1E1Cu;
    {
        const bool branch_taken_0x1a1e1c = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x1A1E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1E1Cu;
        // 0x1a1e20: 0xa6420d94  sh          $v0, 0xD94($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 3476), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1e1c) {
            ctx->pc = 0x1A2068u;
            goto label_1a2068;
        }
    }
    ctx->pc = 0x1A1E24u;
    // 0x1a1e24: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1a1e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a1e28: 0xa24002f7  sb          $zero, 0x2F7($s2)
    ctx->pc = 0x1a1e28u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a1e2c: 0x1000008d  b           . + 4 + (0x8D << 2)
    ctx->pc = 0x1A1E2Cu;
    {
        const bool branch_taken_0x1a1e2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1E2Cu;
        // 0x1a1e30: 0xa24202f5  sb          $v0, 0x2F5($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 757), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1e2c) {
            ctx->pc = 0x1A2064u;
            goto label_1a2064;
        }
    }
    ctx->pc = 0x1A1E34u;
label_1a1e34:
    // 0x1a1e34: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1a1e34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1e38: 0x3c1e0042  lui         $fp, 0x42
    ctx->pc = 0x1a1e38u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)66 << 16));
    // 0x1a1e3c: 0x26550d90  addiu       $s5, $s2, 0xD90
    ctx->pc = 0x1a1e3cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 3472));
    // 0x1a1e40: 0x3c138000  lui         $s3, 0x8000
    ctx->pc = 0x1a1e40u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)32768 << 16));
    // 0x1a1e44: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1a1e44u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a1e48: 0x101142  srl         $v0, $s0, 5
    ctx->pc = 0x1a1e48u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 5));
    // 0x1a1e4c: 0x0  nop
    ctx->pc = 0x1a1e4cu;
    // NOP
label_1a1e50:
    // 0x1a1e50: 0x3204001f  andi        $a0, $s0, 0x1F
    ctx->pc = 0x1a1e50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)31);
    // 0x1a1e54: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a1e54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a1e58: 0x932006  srlv        $a0, $s3, $a0
    ctx->pc = 0x1a1e58u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 19), GPR_U32(ctx, 4) & 0x1F));
    // 0x1a1e5c: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x1a1e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x1a1e60: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1a1e60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a1e64: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1a1e64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1a1e68: 0x5460000f  bnel        $v1, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x1A1E68u;
    {
        const bool branch_taken_0x1a1e68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a1e68) {
            ctx->pc = 0x1A1E6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A1E68u;
            // 0x1a1e6c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A1EA8u;
            goto label_1a1ea8;
        }
    }
    ctx->pc = 0x1A1E70u;
    // 0x1a1e70: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A1E70u;
    {
        const bool branch_taken_0x1a1e70 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1E70u;
        // 0x1a1e74: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1e70) {
            ctx->pc = 0x1A1E88u;
            goto label_1a1e88;
        }
    }
    ctx->pc = 0x1A1E78u;
    // 0x1a1e78: 0x12110008  beq         $s0, $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A1E78u;
    {
        const bool branch_taken_0x1a1e78 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 17));
        ctx->pc = 0x1A1E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1E78u;
        // 0x1a1e7c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1e78) {
            ctx->pc = 0x1A1E9Cu;
            goto label_1a1e9c;
        }
    }
    ctx->pc = 0x1A1E80u;
    // 0x1a1e80: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1A1E80u;
    {
        const bool branch_taken_0x1a1e80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1E80u;
        // 0x1a1e84: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1e80) {
            ctx->pc = 0x1A1EA8u;
            goto label_1a1ea8;
        }
    }
    ctx->pc = 0x1A1E88u;
label_1a1e88:
    // 0x1a1e88: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a1e88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1e8c: 0xc0688f0  jal         func_1A23C0
    ctx->pc = 0x1A1E8Cu;
    SET_GPR_U32(ctx, 31, 0x1A1E94u);
    ctx->pc = 0x1A1E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1E8Cu;
    // 0x1a1e90: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A23C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A23C0u, 0x1A1E8Cu, 0x1A1E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1E94u;
label_1a1e94:
    // 0x1a1e94: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1A1E94u;
    {
        const bool branch_taken_0x1a1e94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1E94u;
        // 0x1a1e98: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1e94) {
            ctx->pc = 0x1A1EA8u;
            goto label_1a1ea8;
        }
    }
    ctx->pc = 0x1A1E9Cu;
label_1a1e9c:
    // 0x1a1e9c: 0xc0688f0  jal         func_1A23C0
    ctx->pc = 0x1A1E9Cu;
    SET_GPR_U32(ctx, 31, 0x1A1EA4u);
    ctx->pc = 0x1A1EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1E9Cu;
    // 0x1a1ea0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A23C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A23C0u, 0x1A1E9Cu, 0x1A1EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1EA4u;
label_1a1ea4:
    // 0x1a1ea4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1a1ea4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1a1ea8:
    // 0x1a1ea8: 0x2e020002  sltiu       $v0, $s0, 0x2
    ctx->pc = 0x1a1ea8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1a1eac: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x1A1EACu;
    {
        const bool branch_taken_0x1a1eac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A1EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1EACu;
        // 0x1a1eb0: 0x101142  srl         $v0, $s0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1eac) {
            ctx->pc = 0x1A1E50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a1e50;
        }
    }
    ctx->pc = 0x1A1EB4u;
    // 0x1a1eb4: 0x27c26f30  addiu       $v0, $fp, 0x6F30
    ctx->pc = 0x1a1eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 28464));
    // 0x1a1eb8: 0x924302b4  lbu         $v1, 0x2B4($s2)
    ctx->pc = 0x1a1eb8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 692)));
    // 0x1a1ebc: 0x90440004  lbu         $a0, 0x4($v0)
    ctx->pc = 0x1a1ebcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1a1ec0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a1ec0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1ec4: 0x28820000  slti        $v0, $a0, 0x0
    ctx->pc = 0x1a1ec4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1a1ec8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A1EC8u;
    {
        const bool branch_taken_0x1a1ec8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A1ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1EC8u;
        // 0x1a1ecc: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1ec8) {
            ctx->pc = 0x1A1ED8u;
            goto label_1a1ed8;
        }
    }
    ctx->pc = 0x1A1ED0u;
    // 0x1a1ed0: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x1a1ed0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1a1ed4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1a1ed4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a1ed8:
    // 0x1a1ed8: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x1a1ed8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1a1edc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A1EDCu;
    {
        const bool branch_taken_0x1a1edc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1EDCu;
        // 0x1a1ee0: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1edc) {
            ctx->pc = 0x1A1EF4u;
            goto label_1a1ef4;
        }
    }
    ctx->pc = 0x1A1EE4u;
    // 0x1a1ee4: 0x8e430278  lw          $v1, 0x278($s2)
    ctx->pc = 0x1a1ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 632)));
    // 0x1a1ee8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a1ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a1eec: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A1EECu;
    {
        const bool branch_taken_0x1a1eec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1EECu;
        // 0x1a1ef0: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1eec) {
            ctx->pc = 0x1A1EF8u;
            goto label_1a1ef8;
        }
    }
    ctx->pc = 0x1A1EF4u;
label_1a1ef4:
    // 0x1a1ef4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a1ef4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a1ef8:
    // 0x1a1ef8: 0x27c26f30  addiu       $v0, $fp, 0x6F30
    ctx->pc = 0x1a1ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 28464));
    // 0x1a1efc: 0x9043000b  lbu         $v1, 0xB($v0)
    ctx->pc = 0x1a1efcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 11)));
    // 0x1a1f00: 0x9050000a  lbu         $s0, 0xA($v0)
    ctx->pc = 0x1a1f00u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x1a1f04: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1a1f04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1a1f08: 0x203102b  sltu        $v0, $s0, $v1
    ctx->pc = 0x1a1f08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1a1f0c: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x1A1F0Cu;
    {
        const bool branch_taken_0x1a1f0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1F0Cu;
        // 0x1a1f10: 0x24b40080  addiu       $s4, $a1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1f0c) {
            ctx->pc = 0x1A1FA4u;
            goto label_1a1fa4;
        }
    }
    ctx->pc = 0x1A1F14u;
    // 0x1a1f14: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x1a1f14u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1f18: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x1a1f18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1f1c: 0x0  nop
    ctx->pc = 0x1a1f1cu;
    // NOP
label_1a1f20:
    // 0x1a1f20: 0x924302b4  lbu         $v1, 0x2B4($s2)
    ctx->pc = 0x1a1f20u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 692)));
    // 0x1a1f24: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a1f24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1f28: 0x6200002  bltz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A1F28u;
    {
        const bool branch_taken_0x1a1f28 = (GPR_S64(ctx, 17) < 0);
        ctx->pc = 0x1A1F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1F28u;
        // 0x1a1f2c: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1f28) {
            ctx->pc = 0x1A1F34u;
            goto label_1a1f34;
        }
    }
    ctx->pc = 0x1A1F30u;
    // 0x1a1f30: 0x203102a  slt         $v0, $s0, $v1
    ctx->pc = 0x1a1f30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1a1f34:
    // 0x1a1f34: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1a1f34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1a1f38: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A1F38u;
    {
        const bool branch_taken_0x1a1f38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1F38u;
        // 0x1a1f3c: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1f38) {
            ctx->pc = 0x1A1F50u;
            goto label_1a1f50;
        }
    }
    ctx->pc = 0x1A1F40u;
    // 0x1a1f40: 0x8e430278  lw          $v1, 0x278($s2)
    ctx->pc = 0x1a1f40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 632)));
    // 0x1a1f44: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a1f44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a1f48: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A1F48u;
    {
        const bool branch_taken_0x1a1f48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1F48u;
        // 0x1a1f4c: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1f48) {
            ctx->pc = 0x1A1F54u;
            goto label_1a1f54;
        }
    }
    ctx->pc = 0x1A1F50u;
label_1a1f50:
    // 0x1a1f50: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a1f50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a1f54:
    // 0x1a1f54: 0x924302b4  lbu         $v1, 0x2B4($s2)
    ctx->pc = 0x1a1f54u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 692)));
    // 0x1a1f58: 0x24440080  addiu       $a0, $v0, 0x80
    ctx->pc = 0x1a1f58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x1a1f5c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a1f5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1f60: 0x6200002  bltz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A1F60u;
    {
        const bool branch_taken_0x1a1f60 = (GPR_S64(ctx, 17) < 0);
        ctx->pc = 0x1A1F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1F60u;
        // 0x1a1f64: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1f60) {
            ctx->pc = 0x1A1F6Cu;
            goto label_1a1f6c;
        }
    }
    ctx->pc = 0x1A1F68u;
    // 0x1a1f68: 0x203102a  slt         $v0, $s0, $v1
    ctx->pc = 0x1a1f68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1a1f6c:
    // 0x1a1f6c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1a1f6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1a1f70: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A1F70u;
    {
        const bool branch_taken_0x1a1f70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1F70u;
        // 0x1a1f74: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1f70) {
            ctx->pc = 0x1A1F88u;
            goto label_1a1f88;
        }
    }
    ctx->pc = 0x1A1F78u;
    // 0x1a1f78: 0x8e430278  lw          $v1, 0x278($s2)
    ctx->pc = 0x1a1f78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 632)));
    // 0x1a1f7c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a1f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a1f80: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A1F80u;
    {
        const bool branch_taken_0x1a1f80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1F80u;
        // 0x1a1f84: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1f80) {
            ctx->pc = 0x1A1F8Cu;
            goto label_1a1f8c;
        }
    }
    ctx->pc = 0x1A1F88u;
label_1a1f88:
    // 0x1a1f88: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a1f88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a1f8c:
    // 0x1a1f8c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1a1f8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1f90: 0xc051d52  jal         func_147548
    ctx->pc = 0x1A1F90u;
    SET_GPR_U32(ctx, 31, 0x1A1F98u);
    ctx->pc = 0x1A1F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1F90u;
    // 0x1a1f94: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147548u, 0x1A1F90u, 0x1A1F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1F98u;
label_1a1f98:
    // 0x1a1f98: 0x213102b  sltu        $v0, $s0, $s3
    ctx->pc = 0x1a1f98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x1a1f9c: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x1A1F9Cu;
    {
        const bool branch_taken_0x1a1f9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A1FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1F9Cu;
        // 0x1a1fa0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1f9c) {
            ctx->pc = 0x1A1F20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a1f20;
        }
    }
    ctx->pc = 0x1A1FA4u;
label_1a1fa4:
    // 0x1a1fa4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a1fa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1fa8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1a1fa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a1fac: 0xc0688f0  jal         func_1A23C0
    ctx->pc = 0x1A1FACu;
    SET_GPR_U32(ctx, 31, 0x1A1FB4u);
    ctx->pc = 0x1A1FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1FACu;
    // 0x1a1fb0: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A23C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A23C0u, 0x1A1FACu, 0x1A1FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1FB4u;
label_1a1fb4:
    // 0x1a1fb4: 0x24020019  addiu       $v0, $zero, 0x19
    ctx->pc = 0x1a1fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x1a1fb8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1a1fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a1fbc: 0xa6420d94  sh          $v0, 0xD94($s2)
    ctx->pc = 0x1a1fbcu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 3476), (uint16_t)GPR_U32(ctx, 2));
    // 0x1a1fc0: 0xa24302f5  sb          $v1, 0x2F5($s2)
    ctx->pc = 0x1a1fc0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x1a1fc4: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x1A1FC4u;
    {
        const bool branch_taken_0x1a1fc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1FC4u;
        // 0x1a1fc8: 0xa24002f7  sb          $zero, 0x2F7($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1fc4) {
            ctx->pc = 0x1A2064u;
            goto label_1a2064;
        }
    }
    ctx->pc = 0x1A1FCCu;
label_1a1fcc:
    // 0x1a1fcc: 0x96420d94  lhu         $v0, 0xD94($s2)
    ctx->pc = 0x1a1fccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 3476)));
    // 0x1a1fd0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1a1fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1a1fd4: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x1a1fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1a1fd8: 0x1c600023  bgtz        $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x1A1FD8u;
    {
        const bool branch_taken_0x1a1fd8 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x1A1FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1FD8u;
        // 0x1a1fdc: 0xa6420d94  sh          $v0, 0xD94($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 3476), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1fd8) {
            ctx->pc = 0x1A2068u;
            goto label_1a2068;
        }
    }
    ctx->pc = 0x1A1FE0u;
    // 0x1a1fe0: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x1a1fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1a1fe4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1a1fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1a1fe8: 0x8e440608  lw          $a0, 0x608($s2)
    ctx->pc = 0x1a1fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1544)));
    // 0x1a1fec: 0xa6420d94  sh          $v0, 0xD94($s2)
    ctx->pc = 0x1a1fecu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 3476), (uint16_t)GPR_U32(ctx, 2));
    // 0x1a1ff0: 0xa24302f5  sb          $v1, 0x2F5($s2)
    ctx->pc = 0x1a1ff0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x1a1ff4: 0xa24002f6  sb          $zero, 0x2F6($s2)
    ctx->pc = 0x1a1ff4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a1ff8: 0x1080001b  beqz        $a0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1A1FF8u;
    {
        const bool branch_taken_0x1a1ff8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1FF8u;
        // 0x1a1ffc: 0xa24002f7  sb          $zero, 0x2F7($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1ff8) {
            ctx->pc = 0x1A2068u;
            goto label_1a2068;
        }
    }
    ctx->pc = 0x1A2000u;
    // 0x1a2000: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x1A2000u;
    SET_GPR_U32(ctx, 31, 0x1A2008u);
    ctx->pc = 0x1A2004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2000u;
    // 0x1a2004: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x1A2000u, 0x1A2008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2008u;
label_1a2008:
    // 0x1a2008: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1A2008u;
    {
        const bool branch_taken_0x1a2008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A200Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2008u;
        // 0x1a200c: 0x7bb000f0  lq          $s0, 0xF0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2008) {
            ctx->pc = 0x1A206Cu;
            goto label_1a206c;
        }
    }
    ctx->pc = 0x1A2010u;
label_1a2010:
    // 0x1a2010: 0x96420d94  lhu         $v0, 0xD94($s2)
    ctx->pc = 0x1a2010u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 3476)));
    // 0x1a2014: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x1a2014u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
    // 0x1a2018: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1a2018u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a201c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1a201cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1a2020: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x1a2020u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1a2024: 0xa6420d94  sh          $v0, 0xD94($s2)
    ctx->pc = 0x1a2024u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 3476), (uint16_t)GPR_U32(ctx, 2));
    // 0x1a2028: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x1a2028u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x1a202c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1a202cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a2030: 0x0  nop
    ctx->pc = 0x1a2030u;
    // NOP
    // 0x1a2034: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a2034u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1a2038: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1a2038u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[1]);
    // 0x1a203c: 0x1c60000a  bgtz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1A203Cu;
    {
        const bool branch_taken_0x1a203c = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x1A2040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A203Cu;
        // 0x1a2040: 0xe640024c  swc1        $f0, 0x24C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 588), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a203c) {
            ctx->pc = 0x1A2068u;
            goto label_1a2068;
        }
    }
    ctx->pc = 0x1A2044u;
    // 0x1a2044: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1a2044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1a2048: 0xa24002f7  sb          $zero, 0x2F7($s2)
    ctx->pc = 0x1a2048u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a204c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1A204Cu;
    {
        const bool branch_taken_0x1a204c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A204Cu;
        // 0x1a2050: 0xa24202f5  sb          $v0, 0x2F5($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 757), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a204c) {
            ctx->pc = 0x1A2064u;
            goto label_1a2064;
        }
    }
    ctx->pc = 0x1A2054u;
label_1a2054:
    // 0x1a2054: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1a2054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a2058: 0xa24002f7  sb          $zero, 0x2F7($s2)
    ctx->pc = 0x1a2058u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a205c: 0xa24202f4  sb          $v0, 0x2F4($s2)
    ctx->pc = 0x1a205cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 756), (uint8_t)GPR_U32(ctx, 2));
label_1a2060:
    // 0x1a2060: 0xa24002f5  sb          $zero, 0x2F5($s2)
    ctx->pc = 0x1a2060u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 757), (uint8_t)GPR_U32(ctx, 0));
label_1a2064:
    // 0x1a2064: 0xa24002f6  sb          $zero, 0x2F6($s2)
    ctx->pc = 0x1a2064u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 0));
label_1a2068:
    // 0x1a2068: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x1a2068u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_1a206c:
    // 0x1a206c: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x1a206cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1a2070: 0x7bb200d0  lq          $s2, 0xD0($sp)
    ctx->pc = 0x1a2070u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1a2074: 0x7bb300c0  lq          $s3, 0xC0($sp)
    ctx->pc = 0x1a2074u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1a2078: 0x7bb400b0  lq          $s4, 0xB0($sp)
    ctx->pc = 0x1a2078u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1a207c: 0x7bb500a0  lq          $s5, 0xA0($sp)
    ctx->pc = 0x1a207cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1a2080: 0x7bb60090  lq          $s6, 0x90($sp)
    ctx->pc = 0x1a2080u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1a2084: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x1a2084u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1a2088: 0x7bbe0070  lq          $fp, 0x70($sp)
    ctx->pc = 0x1a2088u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1a208c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1a208cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1a2090: 0xc7b60110  lwc1        $f22, 0x110($sp)
    ctx->pc = 0x1a2090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1a2094: 0xc7b50108  lwc1        $f21, 0x108($sp)
    ctx->pc = 0x1a2094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1a2098: 0xc7b40100  lwc1        $f20, 0x100($sp)
    ctx->pc = 0x1a2098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1a209c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A209Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A20A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A209Cu;
        // 0x1a20a0: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A209Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A20A4u;
    // 0x1a20a4: 0x0  nop
    ctx->pc = 0x1a20a4u;
    // NOP
    ctx->pc = 0x1a20a8u;
}
