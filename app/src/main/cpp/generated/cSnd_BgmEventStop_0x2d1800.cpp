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

// Function: cSnd_BgmEventStop
// Address: 0x2d1800 - 0x2d1900
void cSnd_BgmEventStop_0x2d1800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cSnd_BgmEventStop_0x2d1800");
#endif

    switch (ctx->pc) {
        case 0x2d1870u: goto label_2d1870;
        case 0x2d188cu: goto label_2d188c;
        case 0x2d18c8u: goto label_2d18c8;
        default: break;
    }

    ctx->pc = 0x2d1800u;

    // 0x2d1800: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2d1800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2d1804: 0x3c02efff  lui         $v0, 0xEFFF
    ctx->pc = 0x2d1804u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61439 << 16));
    // 0x2d1808: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x2d1808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x2d180c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2d180cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2d1810: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x2d1810u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x2d1814: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2d1814u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1818: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x2d1818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x2d181c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2d181cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2d1820: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x2d1820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x2d1824: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x2d1824u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x2d1828: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x2d1828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x2d182c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d182cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d1830: 0x8c8600b0  lw          $a2, 0xB0($a0)
    ctx->pc = 0x2d1830u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 176)));
    // 0x2d1834: 0x8c8300ac  lw          $v1, 0xAC($a0)
    ctx->pc = 0x2d1834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 172)));
    // 0x2d1838: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x2d1838u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x2d183c: 0x8c900018  lw          $s0, 0x18($a0)
    ctx->pc = 0x2d183cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2d1840: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2d1840u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2d1844: 0xac8600b0  sw          $a2, 0xB0($a0)
    ctx->pc = 0x2d1844u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 176), GPR_U32(ctx, 6));
    // 0x2d1848: 0x12000022  beqz        $s0, . + 4 + (0x22 << 2)
    ctx->pc = 0x2D1848u;
    {
        const bool branch_taken_0x2d1848 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D184Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1848u;
        // 0x2d184c: 0xac8300ac  sw          $v1, 0xAC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 172), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1848) {
            ctx->pc = 0x2D18D4u;
            goto label_2d18d4;
        }
    }
    ctx->pc = 0x2D1850u;
    // 0x2d1850: 0x3c110001  lui         $s1, 0x1
    ctx->pc = 0x2d1850u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)1 << 16));
    // 0x2d1854: 0x24160005  addiu       $s6, $zero, 0x5
    ctx->pc = 0x2d1854u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2d1858: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x2d1858u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d185c: 0x2414efff  addiu       $s4, $zero, -0x1001
    ctx->pc = 0x2d185cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x2d1860: 0x3631ff00  ori         $s1, $s1, 0xFF00
    ctx->pc = 0x2d1860u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)65280);
    // 0x2d1864: 0x24130002  addiu       $s3, $zero, 0x2
    ctx->pc = 0x2d1864u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d1868: 0x8e020094  lw          $v0, 0x94($s0)
    ctx->pc = 0x2d1868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
    // 0x2d186c: 0x0  nop
    ctx->pc = 0x2d186cu;
    // NOP
label_2d1870:
    // 0x2d1870: 0x54560008  bnel        $v0, $s6, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D1870u;
    {
        const bool branch_taken_0x2d1870 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        if (branch_taken_0x2d1870) {
            ctx->pc = 0x2D1874u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D1870u;
            // 0x2d1874: 0x8e030098  lw          $v1, 0x98($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D1894u;
            goto label_2d1894;
        }
    }
    ctx->pc = 0x2D1878u;
    // 0x2d1878: 0x52550014  beql        $s2, $s5, . + 4 + (0x14 << 2)
    ctx->pc = 0x2D1878u;
    {
        const bool branch_taken_0x2d1878 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 21));
        if (branch_taken_0x2d1878) {
            ctx->pc = 0x2D187Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D1878u;
            // 0x2d187c: 0x8e100088  lw          $s0, 0x88($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D18CCu;
            goto label_2d18cc;
        }
    }
    ctx->pc = 0x2D1880u;
    // 0x2d1880: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2d1880u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2d1884: 0xc0b352a  jal         func_2CD4A8
    ctx->pc = 0x2D1884u;
    SET_GPR_U32(ctx, 31, 0x2D188Cu);
    ctx->pc = 0x2D1888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1884u;
    // 0x2d1888: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CD4A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CD4A8u, 0x2D1884u, 0x2D188Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D188Cu;
label_2d188c:
    // 0x2d188c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2D188Cu;
    {
        const bool branch_taken_0x2d188c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D188Cu;
        // 0x2d1890: 0x8e100088  lw          $s0, 0x88($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d188c) {
            ctx->pc = 0x2D18CCu;
            goto label_2d18cc;
        }
    }
    ctx->pc = 0x2D1894u;
label_2d1894:
    // 0x2d1894: 0x30621000  andi        $v0, $v1, 0x1000
    ctx->pc = 0x2d1894u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4096);
    // 0x2d1898: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2D1898u;
    {
        const bool branch_taken_0x2d1898 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D189Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1898u;
        // 0x2d189c: 0x741024  and         $v0, $v1, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1898) {
            ctx->pc = 0x2D18C8u;
            goto label_2d18c8;
        }
    }
    ctx->pc = 0x2D18A0u;
    // 0x2d18a0: 0x511824  and         $v1, $v0, $s1
    ctx->pc = 0x2d18a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x2d18a4: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D18A4u;
    {
        const bool branch_taken_0x2d18a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D18A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D18A4u;
        // 0x2d18a8: 0xae020098  sw          $v0, 0x98($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d18a4) {
            ctx->pc = 0x2D18C8u;
            goto label_2d18c8;
        }
    }
    ctx->pc = 0x2D18ACu;
    // 0x2d18ac: 0x8e0200b0  lw          $v0, 0xB0($s0)
    ctx->pc = 0x2d18acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x2d18b0: 0x50530006  beql        $v0, $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D18B0u;
    {
        const bool branch_taken_0x2d18b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        if (branch_taken_0x2d18b0) {
            ctx->pc = 0x2D18B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D18B0u;
            // 0x2d18b4: 0x8e100088  lw          $s0, 0x88($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D18CCu;
            goto label_2d18cc;
        }
    }
    ctx->pc = 0x2D18B8u;
    // 0x2d18b8: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x2d18b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
    // 0x2d18bc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2d18bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2d18c0: 0xc0b351c  jal         func_2CD470
    ctx->pc = 0x2D18C0u;
    SET_GPR_U32(ctx, 31, 0x2D18C8u);
    ctx->pc = 0x2D18C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D18C0u;
    // 0x2d18c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CD470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CD470u, 0x2D18C0u, 0x2D18C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D18C8u;
label_2d18c8:
    // 0x2d18c8: 0x8e100088  lw          $s0, 0x88($s0)
    ctx->pc = 0x2d18c8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
label_2d18cc:
    // 0x2d18cc: 0x5600ffe8  bnel        $s0, $zero, . + 4 + (-0x18 << 2)
    ctx->pc = 0x2D18CCu;
    {
        const bool branch_taken_0x2d18cc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d18cc) {
            ctx->pc = 0x2D18D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D18CCu;
            // 0x2d18d0: 0x8e020094  lw          $v0, 0x94($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D1870u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d1870;
        }
    }
    ctx->pc = 0x2D18D4u;
label_2d18d4:
    // 0x2d18d4: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x2d18d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2d18d8: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x2d18d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2d18dc: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x2d18dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d18e0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2d18e0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d18e4: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x2d18e4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d18e8: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x2d18e8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d18ec: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x2d18ecu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d18f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d18f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d18f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2D18F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D18F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D18F4u;
        // 0x2d18f8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D18F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D18FCu;
    // 0x2d18fc: 0x0  nop
    ctx->pc = 0x2d18fcu;
    // NOP
    ctx->pc = 0x2d1900u;
}
