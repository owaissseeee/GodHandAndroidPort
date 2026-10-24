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

// Function: cEm00_idleChooseNext
// Address: 0x23d7d0 - 0x23e6b0
void cEm00_idleChooseNext_0x23d7d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cEm00_idleChooseNext_0x23d7d0");
#endif

    switch (ctx->pc) {
        case 0x23d8ccu: goto label_23d8cc;
        case 0x23d96cu: goto label_23d96c;
        case 0x23d9b4u: goto label_23d9b4;
        case 0x23da10u: goto label_23da10;
        case 0x23da30u: goto label_23da30;
        case 0x23da44u: goto label_23da44;
        case 0x23da58u: goto label_23da58;
        case 0x23daa0u: goto label_23daa0;
        case 0x23dac8u: goto label_23dac8;
        case 0x23db08u: goto label_23db08;
        case 0x23db24u: goto label_23db24;
        case 0x23db2cu: goto label_23db2c;
        case 0x23db94u: goto label_23db94;
        case 0x23dbd0u: goto label_23dbd0;
        case 0x23dbd8u: goto label_23dbd8;
        case 0x23dc04u: goto label_23dc04;
        case 0x23dc0cu: goto label_23dc0c;
        case 0x23dc24u: goto label_23dc24;
        case 0x23dc64u: goto label_23dc64;
        case 0x23dca0u: goto label_23dca0;
        case 0x23dcd4u: goto label_23dcd4;
        case 0x23dce8u: goto label_23dce8;
        case 0x23dd08u: goto label_23dd08;
        case 0x23dd20u: goto label_23dd20;
        case 0x23dd54u: goto label_23dd54;
        case 0x23dd74u: goto label_23dd74;
        case 0x23dd84u: goto label_23dd84;
        case 0x23ddc8u: goto label_23ddc8;
        case 0x23dde4u: goto label_23dde4;
        case 0x23de18u: goto label_23de18;
        case 0x23de38u: goto label_23de38;
        case 0x23de78u: goto label_23de78;
        case 0x23deb0u: goto label_23deb0;
        case 0x23deecu: goto label_23deec;
        case 0x23df00u: goto label_23df00;
        case 0x23df20u: goto label_23df20;
        case 0x23df38u: goto label_23df38;
        case 0x23df58u: goto label_23df58;
        case 0x23df68u: goto label_23df68;
        case 0x23df94u: goto label_23df94;
        case 0x23dfc8u: goto label_23dfc8;
        case 0x23e004u: goto label_23e004;
        case 0x23e020u: goto label_23e020;
        case 0x23e050u: goto label_23e050;
        case 0x23e08cu: goto label_23e08c;
        case 0x23e0c0u: goto label_23e0c0;
        case 0x23e0d4u: goto label_23e0d4;
        case 0x23e0f4u: goto label_23e0f4;
        case 0x23e10cu: goto label_23e10c;
        case 0x23e140u: goto label_23e140;
        case 0x23e160u: goto label_23e160;
        case 0x23e170u: goto label_23e170;
        case 0x23e19cu: goto label_23e19c;
        case 0x23e1b0u: goto label_23e1b0;
        case 0x23e1f4u: goto label_23e1f4;
        case 0x23e228u: goto label_23e228;
        case 0x23e248u: goto label_23e248;
        case 0x23e258u: goto label_23e258;
        case 0x23e280u: goto label_23e280;
        case 0x23e294u: goto label_23e294;
        case 0x23e2b0u: goto label_23e2b0;
        case 0x23e2c0u: goto label_23e2c0;
        case 0x23e2e4u: goto label_23e2e4;
        case 0x23e31cu: goto label_23e31c;
        case 0x23e330u: goto label_23e330;
        case 0x23e344u: goto label_23e344;
        case 0x23e378u: goto label_23e378;
        case 0x23e3bcu: goto label_23e3bc;
        case 0x23e3d0u: goto label_23e3d0;
        case 0x23e3f0u: goto label_23e3f0;
        case 0x23e424u: goto label_23e424;
        case 0x23e460u: goto label_23e460;
        case 0x23e484u: goto label_23e484;
        case 0x23e498u: goto label_23e498;
        case 0x23e4d0u: goto label_23e4d0;
        case 0x23e4f4u: goto label_23e4f4;
        case 0x23e52cu: goto label_23e52c;
        case 0x23e560u: goto label_23e560;
        case 0x23e59cu: goto label_23e59c;
        case 0x23e5b8u: goto label_23e5b8;
        case 0x23e5f8u: goto label_23e5f8;
        case 0x23e618u: goto label_23e618;
        case 0x23e65cu: goto label_23e65c;
        case 0x23e668u: goto label_23e668;
        case 0x23e680u: goto label_23e680;
        default: break;
    }

    ctx->pc = 0x23d7d0u;

    // 0x23d7d0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x23d7d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x23d7d4: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x23d7d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x23d7d8: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x23d7d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x23d7dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23d7dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d7e0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x23d7e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x23d7e4: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x23d7e4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23d7e8: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x23d7e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x23d7ec: 0x241404e2  addiu       $s4, $zero, 0x4E2
    ctx->pc = 0x23d7ecu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1250));
    // 0x23d7f0: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x23d7f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x23d7f4: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x23d7f4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d7f8: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x23d7f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x23d7fc: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x23d7fcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d800: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x23d800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x23d804: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x23d804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x23d808: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x23d808u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x23d80c: 0x8e0216d0  lw          $v0, 0x16D0($s0)
    ctx->pc = 0x23d80cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5840)));
    // 0x23d810: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x23d810u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x23d814: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x23d814u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    // 0x23d818: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x23D818u;
    {
        const bool branch_taken_0x23d818 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D818u;
        // 0x23d81c: 0xae0216d0  sw          $v0, 0x16D0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5840), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d818) {
            ctx->pc = 0x23D830u;
            goto label_23d830;
        }
    }
    ctx->pc = 0x23D820u;
    // 0x23d820: 0x507300e0  beql        $v1, $s3, . + 4 + (0xE0 << 2)
    ctx->pc = 0x23D820u;
    {
        const bool branch_taken_0x23d820 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 19));
        if (branch_taken_0x23d820) {
            ctx->pc = 0x23D824u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23D820u;
            // 0x23d824: 0x8e0205f0  lw          $v0, 0x5F0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1520)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23DBA4u;
            goto label_23dba4;
        }
    }
    ctx->pc = 0x23D828u;
    // 0x23d828: 0x10000390  b           . + 4 + (0x390 << 2)
    ctx->pc = 0x23D828u;
    {
        const bool branch_taken_0x23d828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D828u;
        // 0x23d82c: 0x8e030564  lw          $v1, 0x564($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d828) {
            ctx->pc = 0x23E66Cu;
            goto label_23e66c;
        }
    }
    ctx->pc = 0x23D830u;
label_23d830:
    // 0x23d830: 0x8e030564  lw          $v1, 0x564($s0)
    ctx->pc = 0x23d830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
    // 0x23d834: 0x2463fdfb  addiu       $v1, $v1, -0x205
    ctx->pc = 0x23d834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966779));
    // 0x23d838: 0x2c62007a  sltiu       $v0, $v1, 0x7A
    ctx->pc = 0x23d838u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)122) ? 1 : 0);
    // 0x23d83c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x23D83Cu;
    {
        const bool branch_taken_0x23d83c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D83Cu;
        // 0x23d840: 0xa2001864  sb          $zero, 0x1864($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 6244), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d83c) {
            ctx->pc = 0x23D860u;
            goto label_23d860;
        }
    }
    ctx->pc = 0x23D844u;
    // 0x23d844: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x23d844u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x23d848: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x23d848u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x23d84c: 0x2442b140  addiu       $v0, $v0, -0x4EC0
    ctx->pc = 0x23d84cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947136));
    // 0x23d850: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x23d850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23d854: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x23d854u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23d858: 0x800008  jr          $a0
    ctx->pc = 0x23D858u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23D860u: goto label_23d860;
            case 0x23D870u: goto label_23d870;
            case 0x23D880u: goto label_23d880;
            case 0x23D890u: goto label_23d890;
            case 0x23D8A0u: goto label_23d8a0;
            case 0x23D8B0u: goto label_23d8b0;
            case 0x23D8D4u: goto label_23d8d4;
            case 0x23D8E4u: goto label_23d8e4;
            case 0x23D8F4u: goto label_23d8f4;
            case 0x23D904u: goto label_23d904;
            case 0x23D914u: goto label_23d914;
            case 0x23D924u: goto label_23d924;
            case 0x23D934u: goto label_23d934;
            case 0x23D944u: goto label_23d944;
            case 0x23D954u: goto label_23d954;
            case 0x23D964u: goto label_23d964;
            case 0x23D9C4u: goto label_23d9c4;
            case 0x23D9D4u: goto label_23d9d4;
            case 0x23D9E4u: goto label_23d9e4;
            case 0x23D9F4u: goto label_23d9f4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23D858u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x23D860u;
label_23d860:
    // 0x23d860: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x23d860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x23d864: 0x8c4303bc  lw          $v1, 0x3BC($v0)
    ctx->pc = 0x23d864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 956)));
    // 0x23d868: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x23D868u;
    {
        const bool branch_taken_0x23d868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D868u;
        // 0x23d86c: 0x8c4403c0  lw          $a0, 0x3C0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 960)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d868) {
            ctx->pc = 0x23DA00u;
            goto label_23da00;
        }
    }
    ctx->pc = 0x23D870u;
label_23d870:
    // 0x23d870: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x23d870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x23d874: 0x8c431b90  lw          $v1, 0x1B90($v0)
    ctx->pc = 0x23d874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7056)));
    // 0x23d878: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x23D878u;
    {
        const bool branch_taken_0x23d878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D878u;
        // 0x23d87c: 0x8c441b94  lw          $a0, 0x1B94($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7060)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d878) {
            ctx->pc = 0x23DA00u;
            goto label_23da00;
        }
    }
    ctx->pc = 0x23D880u;
label_23d880:
    // 0x23d880: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x23d880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x23d884: 0x8c4336a8  lw          $v1, 0x36A8($v0)
    ctx->pc = 0x23d884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13992)));
    // 0x23d888: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x23D888u;
    {
        const bool branch_taken_0x23d888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D888u;
        // 0x23d88c: 0x8c4436ac  lw          $a0, 0x36AC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13996)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d888) {
            ctx->pc = 0x23DA00u;
            goto label_23da00;
        }
    }
    ctx->pc = 0x23D890u;
label_23d890:
    // 0x23d890: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x23d890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x23d894: 0x8c432bb0  lw          $v1, 0x2BB0($v0)
    ctx->pc = 0x23d894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11184)));
    // 0x23d898: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x23D898u;
    {
        const bool branch_taken_0x23d898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D898u;
        // 0x23d89c: 0x8c442bb4  lw          $a0, 0x2BB4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11188)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d898) {
            ctx->pc = 0x23DA00u;
            goto label_23da00;
        }
    }
    ctx->pc = 0x23D8A0u;
label_23d8a0:
    // 0x23d8a0: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x23d8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x23d8a4: 0x8c430b64  lw          $v1, 0xB64($v0)
    ctx->pc = 0x23d8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2916)));
    // 0x23d8a8: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x23D8A8u;
    {
        const bool branch_taken_0x23d8a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D8A8u;
        // 0x23d8ac: 0x8c440b68  lw          $a0, 0xB68($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2920)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d8a8) {
            ctx->pc = 0x23DA00u;
            goto label_23da00;
        }
    }
    ctx->pc = 0x23D8B0u;
label_23d8b0:
    // 0x23d8b0: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x23d8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x23d8b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23d8b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d8b8: 0x8c433c2c  lw          $v1, 0x3C2C($v0)
    ctx->pc = 0x23d8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15404)));
    // 0x23d8bc: 0x8c453c30  lw          $a1, 0x3C30($v0)
    ctx->pc = 0x23d8bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15408)));
    // 0x23d8c0: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x23d8c0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23d8c4: 0xc09ac7a  jal         func_26B1E8
    ctx->pc = 0x23D8C4u;
    SET_GPR_U32(ctx, 31, 0x23D8CCu);
    ctx->pc = 0x23D8C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D8C4u;
    // 0x23d8c8: 0xa28821  addu        $s1, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26B1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B1E8u, 0x23D8C4u, 0x23D8CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D8CCu;
label_23d8cc:
    // 0x23d8cc: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x23D8CCu;
    {
        const bool branch_taken_0x23d8cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23d8cc) {
            ctx->pc = 0x23DA08u;
            goto label_23da08;
        }
    }
    ctx->pc = 0x23D8D4u;
label_23d8d4:
    // 0x23d8d4: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x23d8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x23d8d8: 0x8c431e44  lw          $v1, 0x1E44($v0)
    ctx->pc = 0x23d8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7748)));
    // 0x23d8dc: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x23D8DCu;
    {
        const bool branch_taken_0x23d8dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D8DCu;
        // 0x23d8e0: 0x8c441e48  lw          $a0, 0x1E48($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7752)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d8dc) {
            ctx->pc = 0x23DA00u;
            goto label_23da00;
        }
    }
    ctx->pc = 0x23D8E4u;
label_23d8e4:
    // 0x23d8e4: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x23d8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x23d8e8: 0x8c431f90  lw          $v1, 0x1F90($v0)
    ctx->pc = 0x23d8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8080)));
    // 0x23d8ec: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x23D8ECu;
    {
        const bool branch_taken_0x23d8ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D8ECu;
        // 0x23d8f0: 0x8c441f94  lw          $a0, 0x1F94($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8084)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d8ec) {
            ctx->pc = 0x23DA00u;
            goto label_23da00;
        }
    }
    ctx->pc = 0x23D8F4u;
label_23d8f4:
    // 0x23d8f4: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x23d8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x23d8f8: 0x8c431a28  lw          $v1, 0x1A28($v0)
    ctx->pc = 0x23d8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6696)));
    // 0x23d8fc: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x23D8FCu;
    {
        const bool branch_taken_0x23d8fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D8FCu;
        // 0x23d900: 0x8c441a2c  lw          $a0, 0x1A2C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6700)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d8fc) {
            ctx->pc = 0x23DA00u;
            goto label_23da00;
        }
    }
    ctx->pc = 0x23D904u;
label_23d904:
    // 0x23d904: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x23d904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x23d908: 0x8c431a28  lw          $v1, 0x1A28($v0)
    ctx->pc = 0x23d908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6696)));
    // 0x23d90c: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x23D90Cu;
    {
        const bool branch_taken_0x23d90c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D90Cu;
        // 0x23d910: 0x8c441a2c  lw          $a0, 0x1A2C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6700)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d90c) {
            ctx->pc = 0x23DA00u;
            goto label_23da00;
        }
    }
    ctx->pc = 0x23D914u;
label_23d914:
    // 0x23d914: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x23d914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x23d918: 0x8c43326c  lw          $v1, 0x326C($v0)
    ctx->pc = 0x23d918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12908)));
    // 0x23d91c: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x23D91Cu;
    {
        const bool branch_taken_0x23d91c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D91Cu;
        // 0x23d920: 0x8c443270  lw          $a0, 0x3270($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12912)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d91c) {
            ctx->pc = 0x23DA00u;
            goto label_23da00;
        }
    }
    ctx->pc = 0x23D924u;
label_23d924:
    // 0x23d924: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x23d924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x23d928: 0x8c433724  lw          $v1, 0x3724($v0)
    ctx->pc = 0x23d928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14116)));
    // 0x23d92c: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x23D92Cu;
    {
        const bool branch_taken_0x23d92c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D92Cu;
        // 0x23d930: 0x8c443728  lw          $a0, 0x3728($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14120)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d92c) {
            ctx->pc = 0x23DA00u;
            goto label_23da00;
        }
    }
    ctx->pc = 0x23D934u;
label_23d934:
    // 0x23d934: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x23d934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x23d938: 0x8c4317e8  lw          $v1, 0x17E8($v0)
    ctx->pc = 0x23d938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6120)));
    // 0x23d93c: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x23D93Cu;
    {
        const bool branch_taken_0x23d93c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D93Cu;
        // 0x23d940: 0x8c4417ec  lw          $a0, 0x17EC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6124)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d93c) {
            ctx->pc = 0x23DA00u;
            goto label_23da00;
        }
    }
    ctx->pc = 0x23D944u;
label_23d944:
    // 0x23d944: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x23d944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x23d948: 0x8c433b0c  lw          $v1, 0x3B0C($v0)
    ctx->pc = 0x23d948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15116)));
    // 0x23d94c: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x23D94Cu;
    {
        const bool branch_taken_0x23d94c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D94Cu;
        // 0x23d950: 0x8c443b10  lw          $a0, 0x3B10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15120)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d94c) {
            ctx->pc = 0x23DA00u;
            goto label_23da00;
        }
    }
    ctx->pc = 0x23D954u;
label_23d954:
    // 0x23d954: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x23d954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x23d958: 0x8c43346c  lw          $v1, 0x346C($v0)
    ctx->pc = 0x23d958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13420)));
    // 0x23d95c: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x23D95Cu;
    {
        const bool branch_taken_0x23d95c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D95Cu;
        // 0x23d960: 0x8c443470  lw          $a0, 0x3470($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13424)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d95c) {
            ctx->pc = 0x23DA00u;
            goto label_23da00;
        }
    }
    ctx->pc = 0x23D964u;
label_23d964:
    // 0x23d964: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x23D964u;
    SET_GPR_U32(ctx, 31, 0x23D96Cu);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x23D964u, 0x23D96Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D96Cu;
label_23d96c:
    // 0x23d96c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x23d96cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x23d970: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23D970u;
    {
        const bool branch_taken_0x23d970 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D970u;
        // 0x23d974: 0x8e020304  lw          $v0, 0x304($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d970) {
            ctx->pc = 0x23D984u;
            goto label_23d984;
        }
    }
    ctx->pc = 0x23D978u;
    // 0x23d978: 0x8c43346c  lw          $v1, 0x346C($v0)
    ctx->pc = 0x23d978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13420)));
    // 0x23d97c: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x23D97Cu;
    {
        const bool branch_taken_0x23d97c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D97Cu;
        // 0x23d980: 0x8c443470  lw          $a0, 0x3470($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13424)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d97c) {
            ctx->pc = 0x23DA00u;
            goto label_23da00;
        }
    }
    ctx->pc = 0x23D984u;
label_23d984:
    // 0x23d984: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23d984u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d988: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x23d988u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x23d98c: 0x2406001a  addiu       $a2, $zero, 0x1A
    ctx->pc = 0x23d98cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x23d990: 0x8c43355c  lw          $v1, 0x355C($v0)
    ctx->pc = 0x23d990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13660)));
    // 0x23d994: 0x24070037  addiu       $a3, $zero, 0x37
    ctx->pc = 0x23d994u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x23d998: 0x8c4a3560  lw          $t2, 0x3560($v0)
    ctx->pc = 0x23d998u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13664)));
    // 0x23d99c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x23d99cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d9a0: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x23d9a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23d9a4: 0x240900f0  addiu       $t1, $zero, 0xF0
    ctx->pc = 0x23d9a4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    // 0x23d9a8: 0x1428821  addu        $s1, $t2, $v0
    ctx->pc = 0x23d9a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x23d9ac: 0xc09826a  jal         func_2609A8
    ctx->pc = 0x23D9ACu;
    SET_GPR_U32(ctx, 31, 0x23D9B4u);
    ctx->pc = 0x23D9B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D9ACu;
    // 0x23d9b0: 0x24140077  addiu       $s4, $zero, 0x77 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 119));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609A8u, 0x23D9ACu, 0x23D9B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D9B4u;
label_23d9b4:
    // 0x23d9b4: 0x2413000e  addiu       $s3, $zero, 0xE
    ctx->pc = 0x23d9b4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x23d9b8: 0x24150002  addiu       $s5, $zero, 0x2
    ctx->pc = 0x23d9b8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x23d9bc: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x23D9BCu;
    {
        const bool branch_taken_0x23d9bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D9BCu;
        // 0x23d9c0: 0x8e160704  lw          $s6, 0x704($s0) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1796)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d9bc) {
            ctx->pc = 0x23DA08u;
            goto label_23da08;
        }
    }
    ctx->pc = 0x23D9C4u;
label_23d9c4:
    // 0x23d9c4: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x23d9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x23d9c8: 0x8c431d60  lw          $v1, 0x1D60($v0)
    ctx->pc = 0x23d9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7520)));
    // 0x23d9cc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x23D9CCu;
    {
        const bool branch_taken_0x23d9cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D9CCu;
        // 0x23d9d0: 0x8c441d64  lw          $a0, 0x1D64($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7524)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d9cc) {
            ctx->pc = 0x23DA00u;
            goto label_23da00;
        }
    }
    ctx->pc = 0x23D9D4u;
label_23d9d4:
    // 0x23d9d4: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x23d9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x23d9d8: 0x8c432ec4  lw          $v1, 0x2EC4($v0)
    ctx->pc = 0x23d9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11972)));
    // 0x23d9dc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x23D9DCu;
    {
        const bool branch_taken_0x23d9dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D9DCu;
        // 0x23d9e0: 0x8c442ec8  lw          $a0, 0x2EC8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11976)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d9dc) {
            ctx->pc = 0x23DA00u;
            goto label_23da00;
        }
    }
    ctx->pc = 0x23D9E4u;
label_23d9e4:
    // 0x23d9e4: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x23d9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x23d9e8: 0x8c4323b8  lw          $v1, 0x23B8($v0)
    ctx->pc = 0x23d9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9144)));
    // 0x23d9ec: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x23D9ECu;
    {
        const bool branch_taken_0x23d9ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D9ECu;
        // 0x23d9f0: 0x8c4423bc  lw          $a0, 0x23BC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9148)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d9ec) {
            ctx->pc = 0x23DA00u;
            goto label_23da00;
        }
    }
    ctx->pc = 0x23D9F4u;
label_23d9f4:
    // 0x23d9f4: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x23d9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x23d9f8: 0x8c4313c8  lw          $v1, 0x13C8($v0)
    ctx->pc = 0x23d9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5064)));
    // 0x23d9fc: 0x8c4413cc  lw          $a0, 0x13CC($v0)
    ctx->pc = 0x23d9fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5068)));
label_23da00:
    // 0x23da00: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x23da00u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23da04: 0x828821  addu        $s1, $a0, $v0
    ctx->pc = 0x23da04u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_23da08:
    // 0x23da08: 0xc09d91a  jal         func_276468
    ctx->pc = 0x23DA08u;
    SET_GPR_U32(ctx, 31, 0x23DA10u);
    ctx->pc = 0x23DA0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23DA08u;
    // 0x23da0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x23DA08u, 0x23DA10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DA10u;
label_23da10:
    // 0x23da10: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x23da10u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x23da14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23da14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23da18: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x23da18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23da1c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x23da1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23da20: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x23da20u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x23da24: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x23da24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23da28: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x23DA28u;
    SET_GPR_U32(ctx, 31, 0x23DA30u);
    ctx->pc = 0x23DA2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23DA28u;
    // 0x23da2c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x23DA28u, 0x23DA30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DA30u;
label_23da30:
    // 0x23da30: 0x8e0406f0  lw          $a0, 0x6F0($s0)
    ctx->pc = 0x23da30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1776)));
    // 0x23da34: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x23DA34u;
    {
        const bool branch_taken_0x23da34 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x23da34) {
            ctx->pc = 0x23DA38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23DA34u;
            // 0x23da38: 0x8e040708  lw          $a0, 0x708($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1800)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23DA48u;
            goto label_23da48;
        }
    }
    ctx->pc = 0x23DA3Cu;
    // 0x23da3c: 0xc074134  jal         func_1D04D0
    ctx->pc = 0x23DA3Cu;
    SET_GPR_U32(ctx, 31, 0x23DA44u);
    ctx->pc = 0x1D04D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D04D0u, 0x23DA3Cu, 0x23DA44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DA44u;
label_23da44:
    // 0x23da44: 0x8e040708  lw          $a0, 0x708($s0)
    ctx->pc = 0x23da44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1800)));
label_23da48:
    // 0x23da48: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x23DA48u;
    {
        const bool branch_taken_0x23da48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x23da48) {
            ctx->pc = 0x23DA4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23DA48u;
            // 0x23da4c: 0x920302b4  lbu         $v1, 0x2B4($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23DA5Cu;
            goto label_23da5c;
        }
    }
    ctx->pc = 0x23DA50u;
    // 0x23da50: 0xc074170  jal         func_1D05C0
    ctx->pc = 0x23DA50u;
    SET_GPR_U32(ctx, 31, 0x23DA58u);
    ctx->pc = 0x1D05C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D05C0u, 0x23DA50u, 0x23DA58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DA58u;
label_23da58:
    // 0x23da58: 0x920302b4  lbu         $v1, 0x2B4($s0)
    ctx->pc = 0x23da58u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
label_23da5c:
    // 0x23da5c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x23da5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x23da60: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x23da60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x23da64: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23DA64u;
    {
        const bool branch_taken_0x23da64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DA64u;
        // 0x23da68: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23da64) {
            ctx->pc = 0x23DA78u;
            goto label_23da78;
        }
    }
    ctx->pc = 0x23DA6Cu;
    // 0x23da6c: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x23da6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x23da70: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x23DA70u;
    {
        const bool branch_taken_0x23da70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DA70u;
        // 0x23da74: 0x8c420010  lw          $v0, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23da70) {
            ctx->pc = 0x23DA7Cu;
            goto label_23da7c;
        }
    }
    ctx->pc = 0x23DA78u;
label_23da78:
    // 0x23da78: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x23da78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23da7c:
    // 0x23da7c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x23DA7Cu;
    {
        const bool branch_taken_0x23da7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DA7Cu;
        // 0x23da80: 0x24040058  addiu       $a0, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23da7c) {
            ctx->pc = 0x23DAA0u;
            goto label_23daa0;
        }
    }
    ctx->pc = 0x23DA84u;
    // 0x23da84: 0x8c4700f0  lw          $a3, 0xF0($v0)
    ctx->pc = 0x23da84u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x23da88: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x23da88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x23da8c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x23da8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x23da90: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x23da90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x23da94: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x23da94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23da98: 0xc0c1a0e  jal         func_306838
    ctx->pc = 0x23DA98u;
    SET_GPR_U32(ctx, 31, 0x23DAA0u);
    ctx->pc = 0x23DA9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23DA98u;
    // 0x23da9c: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306838u, 0x23DA98u, 0x23DAA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DAA0u;
label_23daa0:
    // 0x23daa0: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x23daa0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x23daa4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23daa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23daa8: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x23daa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x23daac: 0x240600f6  addiu       $a2, $zero, 0xF6
    ctx->pc = 0x23daacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 246));
    // 0x23dab0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x23dab0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23dab4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x23dab4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23dab8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x23dab8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23dabc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x23dabcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23dac0: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x23DAC0u;
    SET_GPR_U32(ctx, 31, 0x23DAC8u);
    ctx->pc = 0x23DAC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23DAC0u;
    // 0x23dac4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x23DAC0u, 0x23DAC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DAC8u;
label_23dac8:
    // 0x23dac8: 0x8e030564  lw          $v1, 0x564($s0)
    ctx->pc = 0x23dac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
    // 0x23dacc: 0x28620205  slti        $v0, $v1, 0x205
    ctx->pc = 0x23daccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)517) ? 1 : 0);
    // 0x23dad0: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x23DAD0u;
    {
        const bool branch_taken_0x23dad0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23DAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DAD0u;
        // 0x23dad4: 0x28620208  slti        $v0, $v1, 0x208 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)520) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dad0) {
            ctx->pc = 0x23DB24u;
            goto label_23db24;
        }
    }
    ctx->pc = 0x23DAD8u;
    // 0x23dad8: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x23DAD8u;
    {
        const bool branch_taken_0x23dad8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23dad8) {
            ctx->pc = 0x23DADCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23DAD8u;
            // 0x23dadc: 0x8e0406f8  lw          $a0, 0x6F8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1784)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23DAF0u;
            goto label_23daf0;
        }
    }
    ctx->pc = 0x23DAE0u;
    // 0x23dae0: 0x24020224  addiu       $v0, $zero, 0x224
    ctx->pc = 0x23dae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 548));
    // 0x23dae4: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x23DAE4u;
    {
        const bool branch_taken_0x23dae4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x23dae4) {
            ctx->pc = 0x23DB24u;
            goto label_23db24;
        }
    }
    ctx->pc = 0x23DAECu;
    // 0x23daec: 0x8e0406f8  lw          $a0, 0x6F8($s0)
    ctx->pc = 0x23daecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1784)));
label_23daf0:
    // 0x23daf0: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x23DAF0u;
    {
        const bool branch_taken_0x23daf0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x23daf0) {
            ctx->pc = 0x23DAF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23DAF0u;
            // 0x23daf4: 0x8e0406fc  lw          $a0, 0x6FC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1788)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23DB0Cu;
            goto label_23db0c;
        }
    }
    ctx->pc = 0x23DAF8u;
    // 0x23daf8: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x23daf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
    // 0x23dafc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x23dafcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x23db00: 0xc0742cc  jal         func_1D0B30
    ctx->pc = 0x23DB00u;
    SET_GPR_U32(ctx, 31, 0x23DB08u);
    ctx->pc = 0x1D0B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0B30u, 0x23DB00u, 0x23DB08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DB08u;
label_23db08:
    // 0x23db08: 0x8e0406fc  lw          $a0, 0x6FC($s0)
    ctx->pc = 0x23db08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1788)));
label_23db0c:
    // 0x23db0c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23DB0Cu;
    {
        const bool branch_taken_0x23db0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x23db0c) {
            ctx->pc = 0x23DB24u;
            goto label_23db24;
        }
    }
    ctx->pc = 0x23DB14u;
    // 0x23db14: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x23db14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
    // 0x23db18: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x23db18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x23db1c: 0xc0742cc  jal         func_1D0B30
    ctx->pc = 0x23DB1Cu;
    SET_GPR_U32(ctx, 31, 0x23DB24u);
    ctx->pc = 0x1D0B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0B30u, 0x23DB1Cu, 0x23DB24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DB24u;
label_23db24:
    // 0x23db24: 0xc098a60  jal         func_262980
    ctx->pc = 0x23DB24u;
    SET_GPR_U32(ctx, 31, 0x23DB2Cu);
    ctx->pc = 0x23DB28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23DB24u;
    // 0x23db28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262980u, 0x23DB24u, 0x23DB2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DB2Cu;
label_23db2c:
    // 0x23db2c: 0x8e020698  lw          $v0, 0x698($s0)
    ctx->pc = 0x23db2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1688)));
    // 0x23db30: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x23DB30u;
    {
        const bool branch_taken_0x23db30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DB30u;
        // 0x23db34: 0xae0005f0  sw          $zero, 0x5F0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23db30) {
            ctx->pc = 0x23DB70u;
            goto label_23db70;
        }
    }
    ctx->pc = 0x23DB38u;
    // 0x23db38: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x23db38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x23db3c: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x23DB3Cu;
    {
        const bool branch_taken_0x23db3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DB3Cu;
        // 0x23db40: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23db3c) {
            ctx->pc = 0x23DB70u;
            goto label_23db70;
        }
    }
    ctx->pc = 0x23DB44u;
    // 0x23db44: 0x260305d0  addiu       $v1, $s0, 0x5D0
    ctx->pc = 0x23db44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1488));
    // 0x23db48: 0xae0205f0  sw          $v0, 0x5F0($s0)
    ctx->pc = 0x23db48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 2));
    // 0x23db4c: 0x8c8200f0  lw          $v0, 0xF0($a0)
    ctx->pc = 0x23db4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 240)));
    // 0x23db50: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x23DB50u;
    {
        const bool branch_taken_0x23db50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x23db50) {
            ctx->pc = 0x23DB54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23DB50u;
            // 0x23db54: 0x3a8204e2  xori        $v0, $s4, 0x4E2 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) ^ (uint64_t)(uint16_t)1250);
            ctx->in_delay_slot = false;
            ctx->pc = 0x23DB74u;
            goto label_23db74;
        }
    }
    ctx->pc = 0x23DB58u;
    // 0x23db58: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x23db58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23db5c: 0xe60005d0  swc1        $f0, 0x5D0($s0)
    ctx->pc = 0x23db5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1488), bits); }
    // 0x23db60: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x23db60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23db64: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x23db64u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x23db68: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x23db68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23db6c: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x23db6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_23db70:
    // 0x23db70: 0x3a8204e2  xori        $v0, $s4, 0x4E2
    ctx->pc = 0x23db70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) ^ (uint64_t)(uint16_t)1250);
label_23db74:
    // 0x23db74: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x23DB74u;
    {
        const bool branch_taken_0x23db74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DB74u;
        // 0x23db78: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23db74) {
            ctx->pc = 0x23DB94u;
            goto label_23db94;
        }
    }
    ctx->pc = 0x23DB7Cu;
    // 0x23db7c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x23db7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23db80: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x23db80u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23db84: 0x2c0482d  daddu       $t1, $s6, $zero
    ctx->pc = 0x23db84u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23db88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23db88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23db8c: 0xc0aa182  jal         func_2A8608
    ctx->pc = 0x23DB8Cu;
    SET_GPR_U32(ctx, 31, 0x23DB94u);
    ctx->pc = 0x23DB90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23DB8Cu;
    // 0x23db90: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8608u, 0x23DB8Cu, 0x23DB94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DB94u;
label_23db94:
    // 0x23db94: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x23db94u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x23db98: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x23db98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x23db9c: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x23db9cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
    // 0x23dba0: 0x8e0205f0  lw          $v0, 0x5F0($s0)
    ctx->pc = 0x23dba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1520)));
label_23dba4:
    // 0x23dba4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x23DBA4u;
    {
        const bool branch_taken_0x23dba4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DBA4u;
        // 0x23dba8: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dba4) {
            ctx->pc = 0x23DBD0u;
            goto label_23dbd0;
        }
    }
    ctx->pc = 0x23DBACu;
    // 0x23dbac: 0xc60c05a8  lwc1        $f12, 0x5A8($s0)
    ctx->pc = 0x23dbacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x23dbb0: 0x3c013ec9  lui         $at, 0x3EC9
    ctx->pc = 0x23dbb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16073 << 16));
    // 0x23dbb4: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x23dbb4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x23dbb8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x23dbb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23dbbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23dbbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23dbc0: 0xae0205f0  sw          $v0, 0x5F0($s0)
    ctx->pc = 0x23dbc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 2));
    // 0x23dbc4: 0x260505d0  addiu       $a1, $s0, 0x5D0
    ctx->pc = 0x23dbc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1488));
    // 0x23dbc8: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x23DBC8u;
    SET_GPR_U32(ctx, 31, 0x23DBD0u);
    ctx->pc = 0x23DBCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23DBC8u;
    // 0x23dbcc: 0x46006302  mul.s       $f12, $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x23DBC8u, 0x23DBD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DBD0u;
label_23dbd0:
    // 0x23dbd0: 0xc055f06  jal         func_157C18
    ctx->pc = 0x23DBD0u;
    SET_GPR_U32(ctx, 31, 0x23DBD8u);
    ctx->pc = 0x23DBD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23DBD0u;
    // 0x23dbd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x23DBD0u, 0x23DBD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DBD8u;
label_23dbd8:
    // 0x23dbd8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23DBD8u;
    {
        const bool branch_taken_0x23dbd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23DBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DBD8u;
        // 0x23dbdc: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dbd8) {
            ctx->pc = 0x23DBF0u;
            goto label_23dbf0;
        }
    }
    ctx->pc = 0x23DBE0u;
    // 0x23dbe0: 0x960203ac  lhu         $v0, 0x3AC($s0)
    ctx->pc = 0x23dbe0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
    // 0x23dbe4: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x23dbe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x23dbe8: 0x10400297  beqz        $v0, . + 4 + (0x297 << 2)
    ctx->pc = 0x23DBE8u;
    {
        const bool branch_taken_0x23dbe8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DBE8u;
        // 0x23dbec: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dbe8) {
            ctx->pc = 0x23E648u;
            goto label_23e648;
        }
    }
    ctx->pc = 0x23DBF0u;
label_23dbf0:
    // 0x23dbf0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23dbf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23dbf4: 0xa60217ca  sh          $v0, 0x17CA($s0)
    ctx->pc = 0x23dbf4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6090), (uint16_t)GPR_U32(ctx, 2));
    // 0x23dbf8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23dbf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23dbfc: 0xc09bb90  jal         func_26EE40
    ctx->pc = 0x23DBFCu;
    SET_GPR_U32(ctx, 31, 0x23DC04u);
    ctx->pc = 0x23DC00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23DBFCu;
    // 0x23dc00: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26EE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26EE40u, 0x23DBFCu, 0x23DC04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DC04u;
label_23dc04:
    // 0x23dc04: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x23DC04u;
    SET_GPR_U32(ctx, 31, 0x23DC0Cu);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x23DC04u, 0x23DC0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DC0Cu;
label_23dc0c:
    // 0x23dc0c: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x23dc0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x23dc10: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x23DC10u;
    {
        const bool branch_taken_0x23dc10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23dc10) {
            ctx->pc = 0x23DC14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23DC10u;
            // 0x23dc14: 0x8e020564  lw          $v0, 0x564($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23DC30u;
            goto label_23dc30;
        }
    }
    ctx->pc = 0x23DC18u;
    // 0x23dc18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23dc18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23dc1c: 0xc09a01a  jal         func_268068
    ctx->pc = 0x23DC1Cu;
    SET_GPR_U32(ctx, 31, 0x23DC24u);
    ctx->pc = 0x23DC20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23DC1Cu;
    // 0x23dc20: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x268068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x268068u, 0x23DC1Cu, 0x23DC24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DC24u;
label_23dc24:
    // 0x23dc24: 0x54400297  bnel        $v0, $zero, . + 4 + (0x297 << 2)
    ctx->pc = 0x23DC24u;
    {
        const bool branch_taken_0x23dc24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23dc24) {
            ctx->pc = 0x23DC28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23DC24u;
            // 0x23dc28: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23E684u;
            goto label_23e684;
        }
    }
    ctx->pc = 0x23DC2Cu;
    // 0x23dc2c: 0x8e020564  lw          $v0, 0x564($s0)
    ctx->pc = 0x23dc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
label_23dc30:
    // 0x23dc30: 0x2444fe00  addiu       $a0, $v0, -0x200
    ctx->pc = 0x23dc30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966784));
    // 0x23dc34: 0x2c83007f  sltiu       $v1, $a0, 0x7F
    ctx->pc = 0x23dc34u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)127) ? 1 : 0);
    // 0x23dc38: 0x1060026a  beqz        $v1, . + 4 + (0x26A << 2)
    ctx->pc = 0x23DC38u;
    {
        const bool branch_taken_0x23dc38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DC38u;
        // 0x23dc3c: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dc38) {
            ctx->pc = 0x23E5E4u;
            goto label_23e5e4;
        }
    }
    ctx->pc = 0x23DC40u;
    // 0x23dc40: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x23dc40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x23dc44: 0x2442b330  addiu       $v0, $v0, -0x4CD0
    ctx->pc = 0x23dc44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947632));
    // 0x23dc48: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x23dc48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23dc4c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x23dc4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23dc50: 0x800008  jr          $a0
    ctx->pc = 0x23DC50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23DC58u: goto label_23dc58;
            case 0x23DDA8u: goto label_23dda8;
            case 0x23DDDCu: goto label_23dddc;
            case 0x23DE70u: goto label_23de70;
            case 0x23DF8Cu: goto label_23df8c;
            case 0x23E044u: goto label_23e044;
            case 0x23E194u: goto label_23e194;
            case 0x23E1D0u: goto label_23e1d0;
            case 0x23E278u: goto label_23e278;
            case 0x23E2D8u: goto label_23e2d8;
            case 0x23E454u: goto label_23e454;
            case 0x23E524u: goto label_23e524;
            case 0x23E5DCu: goto label_23e5dc;
            case 0x23E5E4u: goto label_23e5e4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23DC50u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x23DC58u;
label_23dc58:
    // 0x23dc58: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x23dc58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x23dc5c: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x23DC5Cu;
    SET_GPR_U32(ctx, 31, 0x23DC64u);
    ctx->pc = 0x23DC60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23DC5Cu;
    // 0x23dc60: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x23DC5Cu, 0x23DC64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DC64u;
label_23dc64:
    // 0x23dc64: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x23dc64u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23dc68: 0x28620005  slti        $v0, $v1, 0x5
    ctx->pc = 0x23dc68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x23dc6c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23DC6Cu;
    {
        const bool branch_taken_0x23dc6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DC6Cu;
        // 0x23dc70: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dc6c) {
            ctx->pc = 0x23DC84u;
            goto label_23dc84;
        }
    }
    ctx->pc = 0x23DC74u;
    // 0x23dc74: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x23DC74u;
    {
        const bool branch_taken_0x23dc74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23dc74) {
            ctx->pc = 0x23DC98u;
            goto label_23dc98;
        }
    }
    ctx->pc = 0x23DC7Cu;
    // 0x23dc7c: 0x1000025a  b           . + 4 + (0x25A << 2)
    ctx->pc = 0x23DC7Cu;
    {
        const bool branch_taken_0x23dc7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DC7Cu;
        // 0x23dc80: 0x8e0206ec  lw          $v0, 0x6EC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dc7c) {
            ctx->pc = 0x23E5E8u;
            goto label_23e5e8;
        }
    }
    ctx->pc = 0x23DC84u;
label_23dc84:
    // 0x23dc84: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x23dc84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x23dc88: 0x10620023  beq         $v1, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x23DC88u;
    {
        const bool branch_taken_0x23dc88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x23dc88) {
            ctx->pc = 0x23DD18u;
            goto label_23dd18;
        }
    }
    ctx->pc = 0x23DC90u;
    // 0x23dc90: 0x10000255  b           . + 4 + (0x255 << 2)
    ctx->pc = 0x23DC90u;
    {
        const bool branch_taken_0x23dc90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DC90u;
        // 0x23dc94: 0x8e0206ec  lw          $v0, 0x6EC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dc90) {
            ctx->pc = 0x23E5E8u;
            goto label_23e5e8;
        }
    }
    ctx->pc = 0x23DC98u;
label_23dc98:
    // 0x23dc98: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x23DC98u;
    SET_GPR_U32(ctx, 31, 0x23DCA0u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x23DC98u, 0x23DCA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DCA0u;
label_23dca0:
    // 0x23dca0: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x23dca0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x23dca4: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x23dca4u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x23dca8: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x23DCA8u;
    {
        const bool branch_taken_0x23dca8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23dca8) {
            ctx->pc = 0x23DCACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23DCA8u;
            // 0x23dcac: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x23DCB0u;
            goto label_23dcb0;
        }
    }
    ctx->pc = 0x23DCB0u;
label_23dcb0:
    // 0x23dcb0: 0x2010  mfhi        $a0
    ctx->pc = 0x23dcb0u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x23dcb4: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23DCB4u;
    {
        const bool branch_taken_0x23dcb4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x23DCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DCB4u;
        // 0x23dcb8: 0x2403000a  addiu       $v1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dcb4) {
            ctx->pc = 0x23DCCCu;
            goto label_23dccc;
        }
    }
    ctx->pc = 0x23DCBCu;
    // 0x23dcbc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23dcbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23dcc0: 0xa20202f7  sb          $v0, 0x2F7($s0)
    ctx->pc = 0x23dcc0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 2));
    // 0x23dcc4: 0x10000258  b           . + 4 + (0x258 << 2)
    ctx->pc = 0x23DCC4u;
    {
        const bool branch_taken_0x23dcc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DCC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DCC4u;
        // 0x23dcc8: 0xa20302f5  sb          $v1, 0x2F5($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dcc4) {
            ctx->pc = 0x23E628u;
            goto label_23e628;
        }
    }
    ctx->pc = 0x23DCCCu;
label_23dccc:
    // 0x23dccc: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x23DCCCu;
    SET_GPR_U32(ctx, 31, 0x23DCD4u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x23DCCCu, 0x23DCD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DCD4u;
label_23dcd4:
    // 0x23dcd4: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x23dcd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x23dcd8: 0x54400243  bnel        $v0, $zero, . + 4 + (0x243 << 2)
    ctx->pc = 0x23DCD8u;
    {
        const bool branch_taken_0x23dcd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23dcd8) {
            ctx->pc = 0x23DCDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23DCD8u;
            // 0x23dcdc: 0x8e0206ec  lw          $v0, 0x6EC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23E5E8u;
            goto label_23e5e8;
        }
    }
    ctx->pc = 0x23DCE0u;
    // 0x23dce0: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x23DCE0u;
    SET_GPR_U32(ctx, 31, 0x23DCE8u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x23DCE0u, 0x23DCE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DCE8u;
label_23dce8:
    // 0x23dce8: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x23dce8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x23dcec: 0x1440024c  bnez        $v0, . + 4 + (0x24C << 2)
    ctx->pc = 0x23DCECu;
    {
        const bool branch_taken_0x23dcec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23DCF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DCECu;
        // 0x23dcf0: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dcec) {
            ctx->pc = 0x23E620u;
            goto label_23e620;
        }
    }
    ctx->pc = 0x23DCF4u;
    // 0x23dcf4: 0x8e0206ec  lw          $v0, 0x6EC($s0)
    ctx->pc = 0x23dcf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1772)));
    // 0x23dcf8: 0x14400249  bnez        $v0, . + 4 + (0x249 << 2)
    ctx->pc = 0x23DCF8u;
    {
        const bool branch_taken_0x23dcf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23DCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DCF8u;
        // 0x23dcfc: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dcf8) {
            ctx->pc = 0x23E620u;
            goto label_23e620;
        }
    }
    ctx->pc = 0x23DD00u;
    // 0x23dd00: 0xc09c340  jal         func_270D00
    ctx->pc = 0x23DD00u;
    SET_GPR_U32(ctx, 31, 0x23DD08u);
    ctx->pc = 0x23DD04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23DD00u;
    // 0x23dd04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x270D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x270D00u, 0x23DD00u, 0x23DD08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DD08u;
label_23dd08:
    // 0x23dd08: 0x14400245  bnez        $v0, . + 4 + (0x245 << 2)
    ctx->pc = 0x23DD08u;
    {
        const bool branch_taken_0x23dd08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23DD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DD08u;
        // 0x23dd0c: 0x2402004b  addiu       $v0, $zero, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dd08) {
            ctx->pc = 0x23E620u;
            goto label_23e620;
        }
    }
    ctx->pc = 0x23DD10u;
    // 0x23dd10: 0x10000243  b           . + 4 + (0x243 << 2)
    ctx->pc = 0x23DD10u;
    {
        const bool branch_taken_0x23dd10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DD10u;
        // 0x23dd14: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dd10) {
            ctx->pc = 0x23E620u;
            goto label_23e620;
        }
    }
    ctx->pc = 0x23DD18u;
label_23dd18:
    // 0x23dd18: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x23DD18u;
    SET_GPR_U32(ctx, 31, 0x23DD20u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x23DD18u, 0x23DD20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DD20u;
label_23dd20:
    // 0x23dd20: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x23dd20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x23dd24: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x23dd24u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x23dd28: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x23DD28u;
    {
        const bool branch_taken_0x23dd28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23dd28) {
            ctx->pc = 0x23DD2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23DD28u;
            // 0x23dd2c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x23DD30u;
            goto label_23dd30;
        }
    }
    ctx->pc = 0x23DD30u;
label_23dd30:
    // 0x23dd30: 0x2010  mfhi        $a0
    ctx->pc = 0x23dd30u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x23dd34: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23DD34u;
    {
        const bool branch_taken_0x23dd34 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x23DD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DD34u;
        // 0x23dd38: 0x2403000a  addiu       $v1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dd34) {
            ctx->pc = 0x23DD4Cu;
            goto label_23dd4c;
        }
    }
    ctx->pc = 0x23DD3Cu;
    // 0x23dd3c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23dd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23dd40: 0xa20202f7  sb          $v0, 0x2F7($s0)
    ctx->pc = 0x23dd40u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 2));
    // 0x23dd44: 0x10000238  b           . + 4 + (0x238 << 2)
    ctx->pc = 0x23DD44u;
    {
        const bool branch_taken_0x23dd44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DD44u;
        // 0x23dd48: 0xa20302f5  sb          $v1, 0x2F5($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dd44) {
            ctx->pc = 0x23E628u;
            goto label_23e628;
        }
    }
    ctx->pc = 0x23DD4Cu;
label_23dd4c:
    // 0x23dd4c: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x23DD4Cu;
    SET_GPR_U32(ctx, 31, 0x23DD54u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x23DD4Cu, 0x23DD54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DD54u;
label_23dd54:
    // 0x23dd54: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x23dd54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x23dd58: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x23DD58u;
    {
        const bool branch_taken_0x23dd58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23dd58) {
            ctx->pc = 0x23DD7Cu;
            goto label_23dd7c;
        }
    }
    ctx->pc = 0x23DD60u;
    // 0x23dd60: 0x8e0206ec  lw          $v0, 0x6EC($s0)
    ctx->pc = 0x23dd60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1772)));
    // 0x23dd64: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23DD64u;
    {
        const bool branch_taken_0x23dd64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23dd64) {
            ctx->pc = 0x23DD7Cu;
            goto label_23dd7c;
        }
    }
    ctx->pc = 0x23DD6Cu;
    // 0x23dd6c: 0xc09c340  jal         func_270D00
    ctx->pc = 0x23DD6Cu;
    SET_GPR_U32(ctx, 31, 0x23DD74u);
    ctx->pc = 0x23DD70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23DD6Cu;
    // 0x23dd70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x270D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x270D00u, 0x23DD6Cu, 0x23DD74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DD74u;
label_23dd74:
    // 0x23dd74: 0x1440022a  bnez        $v0, . + 4 + (0x22A << 2)
    ctx->pc = 0x23DD74u;
    {
        const bool branch_taken_0x23dd74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23DD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DD74u;
        // 0x23dd78: 0x2402004b  addiu       $v0, $zero, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dd74) {
            ctx->pc = 0x23E620u;
            goto label_23e620;
        }
    }
    ctx->pc = 0x23DD7Cu;
label_23dd7c:
    // 0x23dd7c: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x23DD7Cu;
    SET_GPR_U32(ctx, 31, 0x23DD84u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x23DD7Cu, 0x23DD84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DD84u;
label_23dd84:
    // 0x23dd84: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x23dd84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x23dd88: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x23dd88u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x23dd8c: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x23DD8Cu;
    {
        const bool branch_taken_0x23dd8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23dd8c) {
            ctx->pc = 0x23DD90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23DD8Cu;
            // 0x23dd90: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x23DD94u;
            goto label_23dd94;
        }
    }
    ctx->pc = 0x23DD94u;
label_23dd94:
    // 0x23dd94: 0x2010  mfhi        $a0
    ctx->pc = 0x23dd94u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x23dd98: 0x10800212  beqz        $a0, . + 4 + (0x212 << 2)
    ctx->pc = 0x23DD98u;
    {
        const bool branch_taken_0x23dd98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DD98u;
        // 0x23dd9c: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dd98) {
            ctx->pc = 0x23E5E4u;
            goto label_23e5e4;
        }
    }
    ctx->pc = 0x23DDA0u;
    // 0x23dda0: 0x10000220  b           . + 4 + (0x220 << 2)
    ctx->pc = 0x23DDA0u;
    {
        const bool branch_taken_0x23dda0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DDA0u;
        // 0x23dda4: 0xa20002f7  sb          $zero, 0x2F7($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dda0) {
            ctx->pc = 0x23E624u;
            goto label_23e624;
        }
    }
    ctx->pc = 0x23DDA8u;
label_23dda8:
    // 0x23dda8: 0x8e0316d4  lw          $v1, 0x16D4($s0)
    ctx->pc = 0x23dda8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5844)));
    // 0x23ddac: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x23ddacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x23ddb0: 0x34420380  ori         $v0, $v0, 0x380
    ctx->pc = 0x23ddb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)896);
    // 0x23ddb4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x23ddb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x23ddb8: 0x14600219  bnez        $v1, . + 4 + (0x219 << 2)
    ctx->pc = 0x23DDB8u;
    {
        const bool branch_taken_0x23ddb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x23DDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DDB8u;
        // 0x23ddbc: 0x24020015  addiu       $v0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ddb8) {
            ctx->pc = 0x23E620u;
            goto label_23e620;
        }
    }
    ctx->pc = 0x23DDC0u;
    // 0x23ddc0: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x23DDC0u;
    SET_GPR_U32(ctx, 31, 0x23DDC8u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x23DDC0u, 0x23DDC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DDC8u;
label_23ddc8:
    // 0x23ddc8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x23ddc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x23ddcc: 0x14400214  bnez        $v0, . + 4 + (0x214 << 2)
    ctx->pc = 0x23DDCCu;
    {
        const bool branch_taken_0x23ddcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23DDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DDCCu;
        // 0x23ddd0: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ddcc) {
            ctx->pc = 0x23E620u;
            goto label_23e620;
        }
    }
    ctx->pc = 0x23DDD4u;
    // 0x23ddd4: 0x10000212  b           . + 4 + (0x212 << 2)
    ctx->pc = 0x23DDD4u;
    {
        const bool branch_taken_0x23ddd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DDD4u;
        // 0x23ddd8: 0x24020015  addiu       $v0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ddd4) {
            ctx->pc = 0x23E620u;
            goto label_23e620;
        }
    }
    ctx->pc = 0x23DDDCu;
label_23dddc:
    // 0x23dddc: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x23DDDCu;
    SET_GPR_U32(ctx, 31, 0x23DDE4u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x23DDDCu, 0x23DDE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DDE4u;
label_23dde4:
    // 0x23dde4: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x23dde4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x23dde8: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x23dde8u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x23ddec: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x23DDECu;
    {
        const bool branch_taken_0x23ddec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23ddec) {
            ctx->pc = 0x23DDF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23DDECu;
            // 0x23ddf0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x23DDF4u;
            goto label_23ddf4;
        }
    }
    ctx->pc = 0x23DDF4u;
label_23ddf4:
    // 0x23ddf4: 0x2010  mfhi        $a0
    ctx->pc = 0x23ddf4u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x23ddf8: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23DDF8u;
    {
        const bool branch_taken_0x23ddf8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x23DDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DDF8u;
        // 0x23ddfc: 0x2403000a  addiu       $v1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ddf8) {
            ctx->pc = 0x23DE10u;
            goto label_23de10;
        }
    }
    ctx->pc = 0x23DE00u;
    // 0x23de00: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23de00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23de04: 0xa20202f7  sb          $v0, 0x2F7($s0)
    ctx->pc = 0x23de04u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 2));
    // 0x23de08: 0x10000207  b           . + 4 + (0x207 << 2)
    ctx->pc = 0x23DE08u;
    {
        const bool branch_taken_0x23de08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DE08u;
        // 0x23de0c: 0xa20302f5  sb          $v1, 0x2F5($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23de08) {
            ctx->pc = 0x23E628u;
            goto label_23e628;
        }
    }
    ctx->pc = 0x23DE10u;
label_23de10:
    // 0x23de10: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x23DE10u;
    SET_GPR_U32(ctx, 31, 0x23DE18u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x23DE10u, 0x23DE18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DE18u;
label_23de18:
    // 0x23de18: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x23de18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x23de1c: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x23DE1Cu;
    {
        const bool branch_taken_0x23de1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23de1c) {
            ctx->pc = 0x23DE20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23DE1Cu;
            // 0x23de20: 0xc6010618  lwc1        $f1, 0x618($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x23DE44u;
            goto label_23de44;
        }
    }
    ctx->pc = 0x23DE24u;
    // 0x23de24: 0x8e0206ec  lw          $v0, 0x6EC($s0)
    ctx->pc = 0x23de24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1772)));
    // 0x23de28: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x23DE28u;
    {
        const bool branch_taken_0x23de28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23de28) {
            ctx->pc = 0x23DE2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23DE28u;
            // 0x23de2c: 0xc6010618  lwc1        $f1, 0x618($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x23DE44u;
            goto label_23de44;
        }
    }
    ctx->pc = 0x23DE30u;
    // 0x23de30: 0xc09c340  jal         func_270D00
    ctx->pc = 0x23DE30u;
    SET_GPR_U32(ctx, 31, 0x23DE38u);
    ctx->pc = 0x23DE34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23DE30u;
    // 0x23de34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x270D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x270D00u, 0x23DE30u, 0x23DE38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DE38u;
label_23de38:
    // 0x23de38: 0x144001f9  bnez        $v0, . + 4 + (0x1F9 << 2)
    ctx->pc = 0x23DE38u;
    {
        const bool branch_taken_0x23de38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23DE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DE38u;
        // 0x23de3c: 0x2402004b  addiu       $v0, $zero, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23de38) {
            ctx->pc = 0x23E620u;
            goto label_23e620;
        }
    }
    ctx->pc = 0x23DE40u;
    // 0x23de40: 0xc6010618  lwc1        $f1, 0x618($s0)
    ctx->pc = 0x23de40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_23de44:
    // 0x23de44: 0x3c014110  lui         $at, 0x4110
    ctx->pc = 0x23de44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16656 << 16));
    // 0x23de48: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x23de48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23de4c: 0x0  nop
    ctx->pc = 0x23de4cu;
    // NOP
    // 0x23de50: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x23de50u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23de54: 0x0  nop
    ctx->pc = 0x23de54u;
    // NOP
    // 0x23de58: 0x450001e2  bc1f        . + 4 + (0x1E2 << 2)
    ctx->pc = 0x23DE58u;
    {
        const bool branch_taken_0x23de58 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x23DE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DE58u;
        // 0x23de5c: 0x24030015  addiu       $v1, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23de58) {
            ctx->pc = 0x23E5E4u;
            goto label_23e5e4;
        }
    }
    ctx->pc = 0x23DE60u;
    // 0x23de60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23de60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23de64: 0xa20202f7  sb          $v0, 0x2F7($s0)
    ctx->pc = 0x23de64u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 2));
    // 0x23de68: 0x100001ef  b           . + 4 + (0x1EF << 2)
    ctx->pc = 0x23DE68u;
    {
        const bool branch_taken_0x23de68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DE68u;
        // 0x23de6c: 0xa20302f5  sb          $v1, 0x2F5($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23de68) {
            ctx->pc = 0x23E628u;
            goto label_23e628;
        }
    }
    ctx->pc = 0x23DE70u;
label_23de70:
    // 0x23de70: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x23DE70u;
    SET_GPR_U32(ctx, 31, 0x23DE78u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x23DE70u, 0x23DE78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DE78u;
label_23de78:
    // 0x23de78: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x23de78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x23de7c: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x23de7cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x23de80: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x23DE80u;
    {
        const bool branch_taken_0x23de80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23de80) {
            ctx->pc = 0x23DE84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23DE80u;
            // 0x23de84: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x23DE88u;
            goto label_23de88;
        }
    }
    ctx->pc = 0x23DE88u;
label_23de88:
    // 0x23de88: 0x2010  mfhi        $a0
    ctx->pc = 0x23de88u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x23de8c: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x23DE8Cu;
    {
        const bool branch_taken_0x23de8c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x23DE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DE8Cu;
        // 0x23de90: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23de8c) {
            ctx->pc = 0x23DEA8u;
            goto label_23dea8;
        }
    }
    ctx->pc = 0x23DE94u;
    // 0x23de94: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x23de94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x23de98: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23de98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23de9c: 0xa20202f7  sb          $v0, 0x2F7($s0)
    ctx->pc = 0x23de9cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 2));
    // 0x23dea0: 0x100001e1  b           . + 4 + (0x1E1 << 2)
    ctx->pc = 0x23DEA0u;
    {
        const bool branch_taken_0x23dea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DEA0u;
        // 0x23dea4: 0xa20302f5  sb          $v1, 0x2F5($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dea0) {
            ctx->pc = 0x23E628u;
            goto label_23e628;
        }
    }
    ctx->pc = 0x23DEA8u;
label_23dea8:
    // 0x23dea8: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x23DEA8u;
    SET_GPR_U32(ctx, 31, 0x23DEB0u);
    ctx->pc = 0x23DEACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23DEA8u;
    // 0x23deac: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x23DEA8u, 0x23DEB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DEB0u;
label_23deb0:
    // 0x23deb0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x23deb0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23deb4: 0x28620005  slti        $v0, $v1, 0x5
    ctx->pc = 0x23deb4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x23deb8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23DEB8u;
    {
        const bool branch_taken_0x23deb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DEB8u;
        // 0x23debc: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23deb8) {
            ctx->pc = 0x23DED0u;
            goto label_23ded0;
        }
    }
    ctx->pc = 0x23DEC0u;
    // 0x23dec0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x23DEC0u;
    {
        const bool branch_taken_0x23dec0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23dec0) {
            ctx->pc = 0x23DEE4u;
            goto label_23dee4;
        }
    }
    ctx->pc = 0x23DEC8u;
    // 0x23dec8: 0x100001c7  b           . + 4 + (0x1C7 << 2)
    ctx->pc = 0x23DEC8u;
    {
        const bool branch_taken_0x23dec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DEC8u;
        // 0x23decc: 0x8e0206ec  lw          $v0, 0x6EC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dec8) {
            ctx->pc = 0x23E5E8u;
            goto label_23e5e8;
        }
    }
    ctx->pc = 0x23DED0u;
label_23ded0:
    // 0x23ded0: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x23ded0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x23ded4: 0x10620016  beq         $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x23DED4u;
    {
        const bool branch_taken_0x23ded4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x23ded4) {
            ctx->pc = 0x23DF30u;
            goto label_23df30;
        }
    }
    ctx->pc = 0x23DEDCu;
    // 0x23dedc: 0x100001c2  b           . + 4 + (0x1C2 << 2)
    ctx->pc = 0x23DEDCu;
    {
        const bool branch_taken_0x23dedc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DEDCu;
        // 0x23dee0: 0x8e0206ec  lw          $v0, 0x6EC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dedc) {
            ctx->pc = 0x23E5E8u;
            goto label_23e5e8;
        }
    }
    ctx->pc = 0x23DEE4u;
label_23dee4:
    // 0x23dee4: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x23DEE4u;
    SET_GPR_U32(ctx, 31, 0x23DEECu);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x23DEE4u, 0x23DEECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DEECu;
label_23deec:
    // 0x23deec: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x23deecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x23def0: 0x544001bd  bnel        $v0, $zero, . + 4 + (0x1BD << 2)
    ctx->pc = 0x23DEF0u;
    {
        const bool branch_taken_0x23def0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23def0) {
            ctx->pc = 0x23DEF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23DEF0u;
            // 0x23def4: 0x8e0206ec  lw          $v0, 0x6EC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23E5E8u;
            goto label_23e5e8;
        }
    }
    ctx->pc = 0x23DEF8u;
    // 0x23def8: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x23DEF8u;
    SET_GPR_U32(ctx, 31, 0x23DF00u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x23DEF8u, 0x23DF00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DF00u;
label_23df00:
    // 0x23df00: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x23df00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x23df04: 0x144001c6  bnez        $v0, . + 4 + (0x1C6 << 2)
    ctx->pc = 0x23DF04u;
    {
        const bool branch_taken_0x23df04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23DF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DF04u;
        // 0x23df08: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23df04) {
            ctx->pc = 0x23E620u;
            goto label_23e620;
        }
    }
    ctx->pc = 0x23DF0Cu;
    // 0x23df0c: 0x8e0206ec  lw          $v0, 0x6EC($s0)
    ctx->pc = 0x23df0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1772)));
    // 0x23df10: 0x144001c3  bnez        $v0, . + 4 + (0x1C3 << 2)
    ctx->pc = 0x23DF10u;
    {
        const bool branch_taken_0x23df10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23DF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DF10u;
        // 0x23df14: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23df10) {
            ctx->pc = 0x23E620u;
            goto label_23e620;
        }
    }
    ctx->pc = 0x23DF18u;
    // 0x23df18: 0xc09c340  jal         func_270D00
    ctx->pc = 0x23DF18u;
    SET_GPR_U32(ctx, 31, 0x23DF20u);
    ctx->pc = 0x23DF1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23DF18u;
    // 0x23df1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x270D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x270D00u, 0x23DF18u, 0x23DF20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DF20u;
label_23df20:
    // 0x23df20: 0x144001bf  bnez        $v0, . + 4 + (0x1BF << 2)
    ctx->pc = 0x23DF20u;
    {
        const bool branch_taken_0x23df20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23DF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DF20u;
        // 0x23df24: 0x2402004b  addiu       $v0, $zero, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23df20) {
            ctx->pc = 0x23E620u;
            goto label_23e620;
        }
    }
    ctx->pc = 0x23DF28u;
    // 0x23df28: 0x100001bd  b           . + 4 + (0x1BD << 2)
    ctx->pc = 0x23DF28u;
    {
        const bool branch_taken_0x23df28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DF28u;
        // 0x23df2c: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23df28) {
            ctx->pc = 0x23E620u;
            goto label_23e620;
        }
    }
    ctx->pc = 0x23DF30u;
label_23df30:
    // 0x23df30: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x23DF30u;
    SET_GPR_U32(ctx, 31, 0x23DF38u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x23DF30u, 0x23DF38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DF38u;
label_23df38:
    // 0x23df38: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x23df38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x23df3c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x23DF3Cu;
    {
        const bool branch_taken_0x23df3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23df3c) {
            ctx->pc = 0x23DF60u;
            goto label_23df60;
        }
    }
    ctx->pc = 0x23DF44u;
    // 0x23df44: 0x8e0206ec  lw          $v0, 0x6EC($s0)
    ctx->pc = 0x23df44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1772)));
    // 0x23df48: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23DF48u;
    {
        const bool branch_taken_0x23df48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23df48) {
            ctx->pc = 0x23DF60u;
            goto label_23df60;
        }
    }
    ctx->pc = 0x23DF50u;
    // 0x23df50: 0xc09c340  jal         func_270D00
    ctx->pc = 0x23DF50u;
    SET_GPR_U32(ctx, 31, 0x23DF58u);
    ctx->pc = 0x23DF54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23DF50u;
    // 0x23df54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x270D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x270D00u, 0x23DF50u, 0x23DF58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DF58u;
label_23df58:
    // 0x23df58: 0x144001b1  bnez        $v0, . + 4 + (0x1B1 << 2)
    ctx->pc = 0x23DF58u;
    {
        const bool branch_taken_0x23df58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23DF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DF58u;
        // 0x23df5c: 0x2402004b  addiu       $v0, $zero, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23df58) {
            ctx->pc = 0x23E620u;
            goto label_23e620;
        }
    }
    ctx->pc = 0x23DF60u;
label_23df60:
    // 0x23df60: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x23DF60u;
    SET_GPR_U32(ctx, 31, 0x23DF68u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x23DF60u, 0x23DF68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DF68u;
label_23df68:
    // 0x23df68: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x23df68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x23df6c: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x23df6cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x23df70: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x23DF70u;
    {
        const bool branch_taken_0x23df70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23df70) {
            ctx->pc = 0x23DF74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23DF70u;
            // 0x23df74: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x23DF78u;
            goto label_23df78;
        }
    }
    ctx->pc = 0x23DF78u;
label_23df78:
    // 0x23df78: 0x2010  mfhi        $a0
    ctx->pc = 0x23df78u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x23df7c: 0x10800199  beqz        $a0, . + 4 + (0x199 << 2)
    ctx->pc = 0x23DF7Cu;
    {
        const bool branch_taken_0x23df7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DF7Cu;
        // 0x23df80: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23df7c) {
            ctx->pc = 0x23E5E4u;
            goto label_23e5e4;
        }
    }
    ctx->pc = 0x23DF84u;
    // 0x23df84: 0x100001a7  b           . + 4 + (0x1A7 << 2)
    ctx->pc = 0x23DF84u;
    {
        const bool branch_taken_0x23df84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DF84u;
        // 0x23df88: 0xa20002f7  sb          $zero, 0x2F7($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23df84) {
            ctx->pc = 0x23E624u;
            goto label_23e624;
        }
    }
    ctx->pc = 0x23DF8Cu;
label_23df8c:
    // 0x23df8c: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x23DF8Cu;
    SET_GPR_U32(ctx, 31, 0x23DF94u);
    ctx->pc = 0x23DF90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23DF8Cu;
    // 0x23df90: 0x24110006  addiu       $s1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x23DF8Cu, 0x23DF94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DF94u;
label_23df94:
    // 0x23df94: 0x51001b  divu        $zero, $v0, $s1
    ctx->pc = 0x23df94u;
    { uint32_t divisor = GPR_U32(ctx, 17); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x23df98: 0x52200001  beql        $s1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x23DF98u;
    {
        const bool branch_taken_0x23df98 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x23df98) {
            ctx->pc = 0x23DF9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23DF98u;
            // 0x23df9c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x23DFA0u;
            goto label_23dfa0;
        }
    }
    ctx->pc = 0x23DFA0u;
label_23dfa0:
    // 0x23dfa0: 0x1810  mfhi        $v1
    ctx->pc = 0x23dfa0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x23dfa4: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x23DFA4u;
    {
        const bool branch_taken_0x23dfa4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x23DFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DFA4u;
        // 0x23dfa8: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dfa4) {
            ctx->pc = 0x23DFC0u;
            goto label_23dfc0;
        }
    }
    ctx->pc = 0x23DFACu;
    // 0x23dfac: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x23dfacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x23dfb0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23dfb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23dfb4: 0xa20202f7  sb          $v0, 0x2F7($s0)
    ctx->pc = 0x23dfb4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 2));
    // 0x23dfb8: 0x1000019b  b           . + 4 + (0x19B << 2)
    ctx->pc = 0x23DFB8u;
    {
        const bool branch_taken_0x23dfb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DFB8u;
        // 0x23dfbc: 0xa20302f5  sb          $v1, 0x2F5($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dfb8) {
            ctx->pc = 0x23E628u;
            goto label_23e628;
        }
    }
    ctx->pc = 0x23DFC0u;
label_23dfc0:
    // 0x23dfc0: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x23DFC0u;
    SET_GPR_U32(ctx, 31, 0x23DFC8u);
    ctx->pc = 0x23DFC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23DFC0u;
    // 0x23dfc4: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x23DFC0u, 0x23DFC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DFC8u;
label_23dfc8:
    // 0x23dfc8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x23dfc8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23dfcc: 0x28620005  slti        $v0, $v1, 0x5
    ctx->pc = 0x23dfccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x23dfd0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23DFD0u;
    {
        const bool branch_taken_0x23dfd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DFD0u;
        // 0x23dfd4: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dfd0) {
            ctx->pc = 0x23DFE8u;
            goto label_23dfe8;
        }
    }
    ctx->pc = 0x23DFD8u;
    // 0x23dfd8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x23DFD8u;
    {
        const bool branch_taken_0x23dfd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23dfd8) {
            ctx->pc = 0x23DFFCu;
            goto label_23dffc;
        }
    }
    ctx->pc = 0x23DFE0u;
    // 0x23dfe0: 0x10000181  b           . + 4 + (0x181 << 2)
    ctx->pc = 0x23DFE0u;
    {
        const bool branch_taken_0x23dfe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DFE0u;
        // 0x23dfe4: 0x8e0206ec  lw          $v0, 0x6EC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dfe0) {
            ctx->pc = 0x23E5E8u;
            goto label_23e5e8;
        }
    }
    ctx->pc = 0x23DFE8u;
label_23dfe8:
    // 0x23dfe8: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x23dfe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x23dfec: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x23DFECu;
    {
        const bool branch_taken_0x23dfec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x23dfec) {
            ctx->pc = 0x23E018u;
            goto label_23e018;
        }
    }
    ctx->pc = 0x23DFF4u;
    // 0x23dff4: 0x1000017c  b           . + 4 + (0x17C << 2)
    ctx->pc = 0x23DFF4u;
    {
        const bool branch_taken_0x23dff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DFF4u;
        // 0x23dff8: 0x8e0206ec  lw          $v0, 0x6EC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dff4) {
            ctx->pc = 0x23E5E8u;
            goto label_23e5e8;
        }
    }
    ctx->pc = 0x23DFFCu;
label_23dffc:
    // 0x23dffc: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x23DFFCu;
    SET_GPR_U32(ctx, 31, 0x23E004u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x23DFFCu, 0x23E004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E004u;
label_23e004:
    // 0x23e004: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x23e004u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x23e008: 0x54400177  bnel        $v0, $zero, . + 4 + (0x177 << 2)
    ctx->pc = 0x23E008u;
    {
        const bool branch_taken_0x23e008 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23e008) {
            ctx->pc = 0x23E00Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23E008u;
            // 0x23e00c: 0x8e0206ec  lw          $v0, 0x6EC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23E5E8u;
            goto label_23e5e8;
        }
    }
    ctx->pc = 0x23E010u;
    // 0x23e010: 0x10000183  b           . + 4 + (0x183 << 2)
    ctx->pc = 0x23E010u;
    {
        const bool branch_taken_0x23e010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E010u;
        // 0x23e014: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e010) {
            ctx->pc = 0x23E620u;
            goto label_23e620;
        }
    }
    ctx->pc = 0x23E018u;
label_23e018:
    // 0x23e018: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x23E018u;
    SET_GPR_U32(ctx, 31, 0x23E020u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x23E018u, 0x23E020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E020u;
label_23e020:
    // 0x23e020: 0x51001b  divu        $zero, $v0, $s1
    ctx->pc = 0x23e020u;
    { uint32_t divisor = GPR_U32(ctx, 17); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x23e024: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x23e024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x23e028: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x23E028u;
    {
        const bool branch_taken_0x23e028 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23e028) {
            ctx->pc = 0x23E02Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23E028u;
            // 0x23e02c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x23E030u;
            goto label_23e030;
        }
    }
    ctx->pc = 0x23E030u;
label_23e030:
    // 0x23e030: 0x1810  mfhi        $v1
    ctx->pc = 0x23e030u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x23e034: 0x1060016b  beqz        $v1, . + 4 + (0x16B << 2)
    ctx->pc = 0x23E034u;
    {
        const bool branch_taken_0x23e034 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E034u;
        // 0x23e038: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e034) {
            ctx->pc = 0x23E5E4u;
            goto label_23e5e4;
        }
    }
    ctx->pc = 0x23E03Cu;
    // 0x23e03c: 0x10000179  b           . + 4 + (0x179 << 2)
    ctx->pc = 0x23E03Cu;
    {
        const bool branch_taken_0x23e03c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E03Cu;
        // 0x23e040: 0xa20002f7  sb          $zero, 0x2F7($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e03c) {
            ctx->pc = 0x23E624u;
            goto label_23e624;
        }
    }
    ctx->pc = 0x23E044u;
label_23e044:
    // 0x23e044: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x23e044u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x23e048: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x23E048u;
    SET_GPR_U32(ctx, 31, 0x23E050u);
    ctx->pc = 0x23E04Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E048u;
    // 0x23e04c: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x23E048u, 0x23E050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E050u;
label_23e050:
    // 0x23e050: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x23e050u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e054: 0x28620005  slti        $v0, $v1, 0x5
    ctx->pc = 0x23e054u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x23e058: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23E058u;
    {
        const bool branch_taken_0x23e058 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E058u;
        // 0x23e05c: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e058) {
            ctx->pc = 0x23E070u;
            goto label_23e070;
        }
    }
    ctx->pc = 0x23E060u;
    // 0x23e060: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x23E060u;
    {
        const bool branch_taken_0x23e060 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23e060) {
            ctx->pc = 0x23E084u;
            goto label_23e084;
        }
    }
    ctx->pc = 0x23E068u;
    // 0x23e068: 0x1000015f  b           . + 4 + (0x15F << 2)
    ctx->pc = 0x23E068u;
    {
        const bool branch_taken_0x23e068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E068u;
        // 0x23e06c: 0x8e0206ec  lw          $v0, 0x6EC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e068) {
            ctx->pc = 0x23E5E8u;
            goto label_23e5e8;
        }
    }
    ctx->pc = 0x23E070u;
label_23e070:
    // 0x23e070: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x23e070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x23e074: 0x10620023  beq         $v1, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x23E074u;
    {
        const bool branch_taken_0x23e074 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x23e074) {
            ctx->pc = 0x23E104u;
            goto label_23e104;
        }
    }
    ctx->pc = 0x23E07Cu;
    // 0x23e07c: 0x1000015a  b           . + 4 + (0x15A << 2)
    ctx->pc = 0x23E07Cu;
    {
        const bool branch_taken_0x23e07c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E07Cu;
        // 0x23e080: 0x8e0206ec  lw          $v0, 0x6EC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e07c) {
            ctx->pc = 0x23E5E8u;
            goto label_23e5e8;
        }
    }
    ctx->pc = 0x23E084u;
label_23e084:
    // 0x23e084: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x23E084u;
    SET_GPR_U32(ctx, 31, 0x23E08Cu);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x23E084u, 0x23E08Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E08Cu;
label_23e08c:
    // 0x23e08c: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x23e08cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x23e090: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x23e090u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x23e094: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x23E094u;
    {
        const bool branch_taken_0x23e094 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23e094) {
            ctx->pc = 0x23E098u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23E094u;
            // 0x23e098: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x23E09Cu;
            goto label_23e09c;
        }
    }
    ctx->pc = 0x23E09Cu;
label_23e09c:
    // 0x23e09c: 0x2010  mfhi        $a0
    ctx->pc = 0x23e09cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x23e0a0: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23E0A0u;
    {
        const bool branch_taken_0x23e0a0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E0A0u;
        // 0x23e0a4: 0x2403000a  addiu       $v1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e0a0) {
            ctx->pc = 0x23E0B8u;
            goto label_23e0b8;
        }
    }
    ctx->pc = 0x23E0A8u;
    // 0x23e0a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23e0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23e0ac: 0xa20202f7  sb          $v0, 0x2F7($s0)
    ctx->pc = 0x23e0acu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 2));
    // 0x23e0b0: 0x1000015d  b           . + 4 + (0x15D << 2)
    ctx->pc = 0x23E0B0u;
    {
        const bool branch_taken_0x23e0b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E0B0u;
        // 0x23e0b4: 0xa20302f5  sb          $v1, 0x2F5($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e0b0) {
            ctx->pc = 0x23E628u;
            goto label_23e628;
        }
    }
    ctx->pc = 0x23E0B8u;
label_23e0b8:
    // 0x23e0b8: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x23E0B8u;
    SET_GPR_U32(ctx, 31, 0x23E0C0u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x23E0B8u, 0x23E0C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E0C0u;
label_23e0c0:
    // 0x23e0c0: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x23e0c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x23e0c4: 0x54400148  bnel        $v0, $zero, . + 4 + (0x148 << 2)
    ctx->pc = 0x23E0C4u;
    {
        const bool branch_taken_0x23e0c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23e0c4) {
            ctx->pc = 0x23E0C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23E0C4u;
            // 0x23e0c8: 0x8e0206ec  lw          $v0, 0x6EC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23E5E8u;
            goto label_23e5e8;
        }
    }
    ctx->pc = 0x23E0CCu;
    // 0x23e0cc: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x23E0CCu;
    SET_GPR_U32(ctx, 31, 0x23E0D4u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x23E0CCu, 0x23E0D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E0D4u;
label_23e0d4:
    // 0x23e0d4: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x23e0d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x23e0d8: 0x14400151  bnez        $v0, . + 4 + (0x151 << 2)
    ctx->pc = 0x23E0D8u;
    {
        const bool branch_taken_0x23e0d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E0D8u;
        // 0x23e0dc: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e0d8) {
            ctx->pc = 0x23E620u;
            goto label_23e620;
        }
    }
    ctx->pc = 0x23E0E0u;
    // 0x23e0e0: 0x8e0206ec  lw          $v0, 0x6EC($s0)
    ctx->pc = 0x23e0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1772)));
    // 0x23e0e4: 0x1440014e  bnez        $v0, . + 4 + (0x14E << 2)
    ctx->pc = 0x23E0E4u;
    {
        const bool branch_taken_0x23e0e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E0E4u;
        // 0x23e0e8: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e0e4) {
            ctx->pc = 0x23E620u;
            goto label_23e620;
        }
    }
    ctx->pc = 0x23E0ECu;
    // 0x23e0ec: 0xc09c340  jal         func_270D00
    ctx->pc = 0x23E0ECu;
    SET_GPR_U32(ctx, 31, 0x23E0F4u);
    ctx->pc = 0x23E0F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E0ECu;
    // 0x23e0f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x270D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x270D00u, 0x23E0ECu, 0x23E0F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E0F4u;
label_23e0f4:
    // 0x23e0f4: 0x1440014a  bnez        $v0, . + 4 + (0x14A << 2)
    ctx->pc = 0x23E0F4u;
    {
        const bool branch_taken_0x23e0f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E0F4u;
        // 0x23e0f8: 0x2402004b  addiu       $v0, $zero, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e0f4) {
            ctx->pc = 0x23E620u;
            goto label_23e620;
        }
    }
    ctx->pc = 0x23E0FCu;
    // 0x23e0fc: 0x10000148  b           . + 4 + (0x148 << 2)
    ctx->pc = 0x23E0FCu;
    {
        const bool branch_taken_0x23e0fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E0FCu;
        // 0x23e100: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e0fc) {
            ctx->pc = 0x23E620u;
            goto label_23e620;
        }
    }
    ctx->pc = 0x23E104u;
label_23e104:
    // 0x23e104: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x23E104u;
    SET_GPR_U32(ctx, 31, 0x23E10Cu);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x23E104u, 0x23E10Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E10Cu;
label_23e10c:
    // 0x23e10c: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x23e10cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x23e110: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x23e110u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x23e114: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x23E114u;
    {
        const bool branch_taken_0x23e114 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23e114) {
            ctx->pc = 0x23E118u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23E114u;
            // 0x23e118: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x23E11Cu;
            goto label_23e11c;
        }
    }
    ctx->pc = 0x23E11Cu;
label_23e11c:
    // 0x23e11c: 0x2010  mfhi        $a0
    ctx->pc = 0x23e11cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x23e120: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23E120u;
    {
        const bool branch_taken_0x23e120 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E120u;
        // 0x23e124: 0x2403000a  addiu       $v1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e120) {
            ctx->pc = 0x23E138u;
            goto label_23e138;
        }
    }
    ctx->pc = 0x23E128u;
    // 0x23e128: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23e128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23e12c: 0xa20202f7  sb          $v0, 0x2F7($s0)
    ctx->pc = 0x23e12cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 2));
    // 0x23e130: 0x1000013d  b           . + 4 + (0x13D << 2)
    ctx->pc = 0x23E130u;
    {
        const bool branch_taken_0x23e130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E130u;
        // 0x23e134: 0xa20302f5  sb          $v1, 0x2F5($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e130) {
            ctx->pc = 0x23E628u;
            goto label_23e628;
        }
    }
    ctx->pc = 0x23E138u;
label_23e138:
    // 0x23e138: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x23E138u;
    SET_GPR_U32(ctx, 31, 0x23E140u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x23E138u, 0x23E140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E140u;
label_23e140:
    // 0x23e140: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x23e140u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x23e144: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x23E144u;
    {
        const bool branch_taken_0x23e144 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23e144) {
            ctx->pc = 0x23E168u;
            goto label_23e168;
        }
    }
    ctx->pc = 0x23E14Cu;
    // 0x23e14c: 0x8e0206ec  lw          $v0, 0x6EC($s0)
    ctx->pc = 0x23e14cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1772)));
    // 0x23e150: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23E150u;
    {
        const bool branch_taken_0x23e150 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23e150) {
            ctx->pc = 0x23E168u;
            goto label_23e168;
        }
    }
    ctx->pc = 0x23E158u;
    // 0x23e158: 0xc09c340  jal         func_270D00
    ctx->pc = 0x23E158u;
    SET_GPR_U32(ctx, 31, 0x23E160u);
    ctx->pc = 0x23E15Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E158u;
    // 0x23e15c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x270D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x270D00u, 0x23E158u, 0x23E160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E160u;
label_23e160:
    // 0x23e160: 0x1440012f  bnez        $v0, . + 4 + (0x12F << 2)
    ctx->pc = 0x23E160u;
    {
        const bool branch_taken_0x23e160 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E160u;
        // 0x23e164: 0x2402004b  addiu       $v0, $zero, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e160) {
            ctx->pc = 0x23E620u;
            goto label_23e620;
        }
    }
    ctx->pc = 0x23E168u;
label_23e168:
    // 0x23e168: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x23E168u;
    SET_GPR_U32(ctx, 31, 0x23E170u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x23E168u, 0x23E170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E170u;
label_23e170:
    // 0x23e170: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x23e170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x23e174: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x23e174u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x23e178: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x23E178u;
    {
        const bool branch_taken_0x23e178 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23e178) {
            ctx->pc = 0x23E17Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23E178u;
            // 0x23e17c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x23E180u;
            goto label_23e180;
        }
    }
    ctx->pc = 0x23E180u;
label_23e180:
    // 0x23e180: 0x2010  mfhi        $a0
    ctx->pc = 0x23e180u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x23e184: 0x10800117  beqz        $a0, . + 4 + (0x117 << 2)
    ctx->pc = 0x23E184u;
    {
        const bool branch_taken_0x23e184 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E184u;
        // 0x23e188: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e184) {
            ctx->pc = 0x23E5E4u;
            goto label_23e5e4;
        }
    }
    ctx->pc = 0x23E18Cu;
    // 0x23e18c: 0x10000125  b           . + 4 + (0x125 << 2)
    ctx->pc = 0x23E18Cu;
    {
        const bool branch_taken_0x23e18c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E18Cu;
        // 0x23e190: 0xa20002f7  sb          $zero, 0x2F7($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e18c) {
            ctx->pc = 0x23E624u;
            goto label_23e624;
        }
    }
    ctx->pc = 0x23E194u;
label_23e194:
    // 0x23e194: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x23E194u;
    SET_GPR_U32(ctx, 31, 0x23E19Cu);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x23E194u, 0x23E19Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E19Cu;
label_23e19c:
    // 0x23e19c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x23e19cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x23e1a0: 0x1440011f  bnez        $v0, . + 4 + (0x11F << 2)
    ctx->pc = 0x23E1A0u;
    {
        const bool branch_taken_0x23e1a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E1A0u;
        // 0x23e1a4: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e1a0) {
            ctx->pc = 0x23E620u;
            goto label_23e620;
        }
    }
    ctx->pc = 0x23E1A8u;
    // 0x23e1a8: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x23E1A8u;
    SET_GPR_U32(ctx, 31, 0x23E1B0u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x23E1A8u, 0x23E1B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E1B0u;
label_23e1b0:
    // 0x23e1b0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x23e1b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x23e1b4: 0x5440003b  bnel        $v0, $zero, . + 4 + (0x3B << 2)
    ctx->pc = 0x23E1B4u;
    {
        const bool branch_taken_0x23e1b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23e1b4) {
            ctx->pc = 0x23E1B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23E1B4u;
            // 0x23e1b8: 0xae0016dc  sw          $zero, 0x16DC($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 5852), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23E2A4u;
            goto label_23e2a4;
        }
    }
    ctx->pc = 0x23E1BCu;
    // 0x23e1bc: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x23e1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x23e1c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23e1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23e1c4: 0xa20202f7  sb          $v0, 0x2F7($s0)
    ctx->pc = 0x23e1c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 2));
    // 0x23e1c8: 0x10000117  b           . + 4 + (0x117 << 2)
    ctx->pc = 0x23E1C8u;
    {
        const bool branch_taken_0x23e1c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E1C8u;
        // 0x23e1cc: 0xa20302f5  sb          $v1, 0x2F5($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e1c8) {
            ctx->pc = 0x23E628u;
            goto label_23e628;
        }
    }
    ctx->pc = 0x23E1D0u;
label_23e1d0:
    // 0x23e1d0: 0xc60116e4  lwc1        $f1, 0x16E4($s0)
    ctx->pc = 0x23e1d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5860)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23e1d4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23e1d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23e1d8: 0x0  nop
    ctx->pc = 0x23e1d8u;
    // NOP
    // 0x23e1dc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x23e1dcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23e1e0: 0x0  nop
    ctx->pc = 0x23e1e0u;
    // NOP
    // 0x23e1e4: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x23E1E4u;
    {
        const bool branch_taken_0x23e1e4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23e1e4) {
            ctx->pc = 0x23E220u;
            goto label_23e220;
        }
    }
    ctx->pc = 0x23E1ECu;
    // 0x23e1ec: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x23E1ECu;
    SET_GPR_U32(ctx, 31, 0x23E1F4u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x23E1ECu, 0x23E1F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E1F4u;
label_23e1f4:
    // 0x23e1f4: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x23e1f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x23e1f8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x23E1F8u;
    {
        const bool branch_taken_0x23e1f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E1F8u;
        // 0x23e1fc: 0x2402002d  addiu       $v0, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e1f8) {
            ctx->pc = 0x23E220u;
            goto label_23e220;
        }
    }
    ctx->pc = 0x23E200u;
    // 0x23e200: 0x3c014396  lui         $at, 0x4396
    ctx->pc = 0x23e200u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17302 << 16));
    // 0x23e204: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x23e204u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23e208: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x23e208u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x23e20c: 0xe60016e4  swc1        $f0, 0x16E4($s0)
    ctx->pc = 0x23e20cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5860), bits); }
    // 0x23e210: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x23e210u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x23e214: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x23e214u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x23e218: 0x10000119  b           . + 4 + (0x119 << 2)
    ctx->pc = 0x23E218u;
    {
        const bool branch_taken_0x23e218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E218u;
        // 0x23e21c: 0xa20002f7  sb          $zero, 0x2F7($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e218) {
            ctx->pc = 0x23E680u;
            goto label_23e680;
        }
    }
    ctx->pc = 0x23E220u;
label_23e220:
    // 0x23e220: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x23E220u;
    SET_GPR_U32(ctx, 31, 0x23E228u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x23E220u, 0x23E228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E228u;
label_23e228:
    // 0x23e228: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x23e228u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x23e22c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x23E22Cu;
    {
        const bool branch_taken_0x23e22c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23e22c) {
            ctx->pc = 0x23E250u;
            goto label_23e250;
        }
    }
    ctx->pc = 0x23E234u;
    // 0x23e234: 0x8e040700  lw          $a0, 0x700($s0)
    ctx->pc = 0x23e234u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1792)));
    // 0x23e238: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23E238u;
    {
        const bool branch_taken_0x23e238 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x23e238) {
            ctx->pc = 0x23E250u;
            goto label_23e250;
        }
    }
    ctx->pc = 0x23E240u;
    // 0x23e240: 0xc0742c2  jal         func_1D0B08
    ctx->pc = 0x23E240u;
    SET_GPR_U32(ctx, 31, 0x23E248u);
    ctx->pc = 0x1D0B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0B08u, 0x23E240u, 0x23E248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E248u;
label_23e248:
    // 0x23e248: 0x104000f5  beqz        $v0, . + 4 + (0xF5 << 2)
    ctx->pc = 0x23E248u;
    {
        const bool branch_taken_0x23e248 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E248u;
        // 0x23e24c: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e248) {
            ctx->pc = 0x23E620u;
            goto label_23e620;
        }
    }
    ctx->pc = 0x23E250u;
label_23e250:
    // 0x23e250: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x23E250u;
    SET_GPR_U32(ctx, 31, 0x23E258u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x23E250u, 0x23E258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E258u;
label_23e258:
    // 0x23e258: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x23e258u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x23e25c: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x23E25Cu;
    {
        const bool branch_taken_0x23e25c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23e25c) {
            ctx->pc = 0x23E260u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23E25Cu;
            // 0x23e260: 0xae0016dc  sw          $zero, 0x16DC($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 5852), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23E2A4u;
            goto label_23e2a4;
        }
    }
    ctx->pc = 0x23E264u;
    // 0x23e264: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x23e264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x23e268: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23e268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23e26c: 0xa20202f7  sb          $v0, 0x2F7($s0)
    ctx->pc = 0x23e26cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 2));
    // 0x23e270: 0x100000ed  b           . + 4 + (0xED << 2)
    ctx->pc = 0x23E270u;
    {
        const bool branch_taken_0x23e270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E270u;
        // 0x23e274: 0xa20302f5  sb          $v1, 0x2F5($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e270) {
            ctx->pc = 0x23E628u;
            goto label_23e628;
        }
    }
    ctx->pc = 0x23E278u;
label_23e278:
    // 0x23e278: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x23E278u;
    SET_GPR_U32(ctx, 31, 0x23E280u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x23E278u, 0x23E280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E280u;
label_23e280:
    // 0x23e280: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x23e280u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x23e284: 0x144000e6  bnez        $v0, . + 4 + (0xE6 << 2)
    ctx->pc = 0x23E284u;
    {
        const bool branch_taken_0x23e284 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E284u;
        // 0x23e288: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e284) {
            ctx->pc = 0x23E620u;
            goto label_23e620;
        }
    }
    ctx->pc = 0x23E28Cu;
    // 0x23e28c: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x23E28Cu;
    SET_GPR_U32(ctx, 31, 0x23E294u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x23E28Cu, 0x23E294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E294u;
label_23e294:
    // 0x23e294: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x23e294u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x23e298: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x23E298u;
    {
        const bool branch_taken_0x23e298 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E298u;
        // 0x23e29c: 0x2403000a  addiu       $v1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e298) {
            ctx->pc = 0x23E2C8u;
            goto label_23e2c8;
        }
    }
    ctx->pc = 0x23E2A0u;
    // 0x23e2a0: 0xae0016dc  sw          $zero, 0x16DC($s0)
    ctx->pc = 0x23e2a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5852), GPR_U32(ctx, 0));
label_23e2a4:
    // 0x23e2a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23e2a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e2a8: 0xc098aaa  jal         func_262AA8
    ctx->pc = 0x23E2A8u;
    SET_GPR_U32(ctx, 31, 0x23E2B0u);
    ctx->pc = 0x23E2ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E2A8u;
    // 0x23e2ac: 0xae0016e0  sw          $zero, 0x16E0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 5856), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262AA8u, 0x23E2A8u, 0x23E2B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E2B0u;
label_23e2b0:
    // 0x23e2b0: 0x544000f4  bnel        $v0, $zero, . + 4 + (0xF4 << 2)
    ctx->pc = 0x23E2B0u;
    {
        const bool branch_taken_0x23e2b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23e2b0) {
            ctx->pc = 0x23E2B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23E2B0u;
            // 0x23e2b4: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23E684u;
            goto label_23e684;
        }
    }
    ctx->pc = 0x23E2B8u;
    // 0x23e2b8: 0xc09c176  jal         func_2705D8
    ctx->pc = 0x23E2B8u;
    SET_GPR_U32(ctx, 31, 0x23E2C0u);
    ctx->pc = 0x23E2BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E2B8u;
    // 0x23e2bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x23E2B8u, 0x23E2C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E2C0u;
label_23e2c0:
    // 0x23e2c0: 0x100000f0  b           . + 4 + (0xF0 << 2)
    ctx->pc = 0x23E2C0u;
    {
        const bool branch_taken_0x23e2c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E2C0u;
        // 0x23e2c4: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e2c0) {
            ctx->pc = 0x23E684u;
            goto label_23e684;
        }
    }
    ctx->pc = 0x23E2C8u;
label_23e2c8:
    // 0x23e2c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23e2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23e2cc: 0xa20202f7  sb          $v0, 0x2F7($s0)
    ctx->pc = 0x23e2ccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 2));
    // 0x23e2d0: 0x100000d5  b           . + 4 + (0xD5 << 2)
    ctx->pc = 0x23E2D0u;
    {
        const bool branch_taken_0x23e2d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E2D0u;
        // 0x23e2d4: 0xa20302f5  sb          $v1, 0x2F5($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e2d0) {
            ctx->pc = 0x23E628u;
            goto label_23e628;
        }
    }
    ctx->pc = 0x23E2D8u;
label_23e2d8:
    // 0x23e2d8: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x23e2d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x23e2dc: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x23E2DCu;
    SET_GPR_U32(ctx, 31, 0x23E2E4u);
    ctx->pc = 0x23E2E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E2DCu;
    // 0x23e2e0: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x23E2DCu, 0x23E2E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E2E4u;
label_23e2e4:
    // 0x23e2e4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x23e2e4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e2e8: 0x18600006  blez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x23E2E8u;
    {
        const bool branch_taken_0x23e2e8 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x23E2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E2E8u;
        // 0x23e2ec: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e2e8) {
            ctx->pc = 0x23E304u;
            goto label_23e304;
        }
    }
    ctx->pc = 0x23E2F0u;
    // 0x23e2f0: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x23E2F0u;
    {
        const bool branch_taken_0x23e2f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23e2f0) {
            ctx->pc = 0x23E2F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23E2F0u;
            // 0x23e2f4: 0x8e030564  lw          $v1, 0x564($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23E308u;
            goto label_23e308;
        }
    }
    ctx->pc = 0x23E2F8u;
    // 0x23e2f8: 0x28620006  slti        $v0, $v1, 0x6
    ctx->pc = 0x23e2f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x23e2fc: 0x5440002a  bnel        $v0, $zero, . + 4 + (0x2A << 2)
    ctx->pc = 0x23E2FCu;
    {
        const bool branch_taken_0x23e2fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23e2fc) {
            ctx->pc = 0x23E300u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23E2FCu;
            // 0x23e300: 0x8e030564  lw          $v1, 0x564($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23E3A8u;
            goto label_23e3a8;
        }
    }
    ctx->pc = 0x23E304u;
label_23e304:
    // 0x23e304: 0x8e030564  lw          $v1, 0x564($s0)
    ctx->pc = 0x23e304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
label_23e308:
    // 0x23e308: 0x24020251  addiu       $v0, $zero, 0x251
    ctx->pc = 0x23e308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 593));
    // 0x23e30c: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x23E30Cu;
    {
        const bool branch_taken_0x23e30c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x23e30c) {
            ctx->pc = 0x23E328u;
            goto label_23e328;
        }
    }
    ctx->pc = 0x23E314u;
    // 0x23e314: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x23E314u;
    SET_GPR_U32(ctx, 31, 0x23E31Cu);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x23E314u, 0x23E31Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E31Cu;
label_23e31c:
    // 0x23e31c: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x23e31cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x23e320: 0x104000bf  beqz        $v0, . + 4 + (0xBF << 2)
    ctx->pc = 0x23E320u;
    {
        const bool branch_taken_0x23e320 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E320u;
        // 0x23e324: 0x24020022  addiu       $v0, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e320) {
            ctx->pc = 0x23E620u;
            goto label_23e620;
        }
    }
    ctx->pc = 0x23E328u;
label_23e328:
    // 0x23e328: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x23E328u;
    SET_GPR_U32(ctx, 31, 0x23E330u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x23E328u, 0x23E330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E330u;
label_23e330:
    // 0x23e330: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x23e330u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x23e334: 0x104000ba  beqz        $v0, . + 4 + (0xBA << 2)
    ctx->pc = 0x23E334u;
    {
        const bool branch_taken_0x23e334 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E334u;
        // 0x23e338: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e334) {
            ctx->pc = 0x23E620u;
            goto label_23e620;
        }
    }
    ctx->pc = 0x23E33Cu;
    // 0x23e33c: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x23E33Cu;
    SET_GPR_U32(ctx, 31, 0x23E344u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x23E33Cu, 0x23E344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E344u;
label_23e344:
    // 0x23e344: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x23e344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x23e348: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x23e348u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x23e34c: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x23E34Cu;
    {
        const bool branch_taken_0x23e34c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23e34c) {
            ctx->pc = 0x23E350u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23E34Cu;
            // 0x23e350: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x23E354u;
            goto label_23e354;
        }
    }
    ctx->pc = 0x23E354u;
label_23e354:
    // 0x23e354: 0x2010  mfhi        $a0
    ctx->pc = 0x23e354u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x23e358: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23E358u;
    {
        const bool branch_taken_0x23e358 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E358u;
        // 0x23e35c: 0x24030020  addiu       $v1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e358) {
            ctx->pc = 0x23E370u;
            goto label_23e370;
        }
    }
    ctx->pc = 0x23E360u;
    // 0x23e360: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23e360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23e364: 0xa20202f7  sb          $v0, 0x2F7($s0)
    ctx->pc = 0x23e364u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 2));
    // 0x23e368: 0x100000af  b           . + 4 + (0xAF << 2)
    ctx->pc = 0x23E368u;
    {
        const bool branch_taken_0x23e368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E368u;
        // 0x23e36c: 0xa20302f5  sb          $v1, 0x2F5($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e368) {
            ctx->pc = 0x23E628u;
            goto label_23e628;
        }
    }
    ctx->pc = 0x23E370u;
label_23e370:
    // 0x23e370: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x23E370u;
    SET_GPR_U32(ctx, 31, 0x23E378u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x23E370u, 0x23E378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E378u;
label_23e378:
    // 0x23e378: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x23e378u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x23e37c: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x23e37cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x23e380: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x23E380u;
    {
        const bool branch_taken_0x23e380 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23e380) {
            ctx->pc = 0x23E384u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23E380u;
            // 0x23e384: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x23E388u;
            goto label_23e388;
        }
    }
    ctx->pc = 0x23E388u;
label_23e388:
    // 0x23e388: 0x2010  mfhi        $a0
    ctx->pc = 0x23e388u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x23e38c: 0x54800096  bnel        $a0, $zero, . + 4 + (0x96 << 2)
    ctx->pc = 0x23E38Cu;
    {
        const bool branch_taken_0x23e38c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x23e38c) {
            ctx->pc = 0x23E390u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23E38Cu;
            // 0x23e390: 0x8e0206ec  lw          $v0, 0x6EC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23E5E8u;
            goto label_23e5e8;
        }
    }
    ctx->pc = 0x23E394u;
    // 0x23e394: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x23e394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x23e398: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23e398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23e39c: 0xa20202f7  sb          $v0, 0x2F7($s0)
    ctx->pc = 0x23e39cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 2));
    // 0x23e3a0: 0x100000a1  b           . + 4 + (0xA1 << 2)
    ctx->pc = 0x23E3A0u;
    {
        const bool branch_taken_0x23e3a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E3A0u;
        // 0x23e3a4: 0xa20302f5  sb          $v1, 0x2F5($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e3a0) {
            ctx->pc = 0x23E628u;
            goto label_23e628;
        }
    }
    ctx->pc = 0x23E3A8u;
label_23e3a8:
    // 0x23e3a8: 0x24020251  addiu       $v0, $zero, 0x251
    ctx->pc = 0x23e3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 593));
    // 0x23e3ac: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x23E3ACu;
    {
        const bool branch_taken_0x23e3ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x23e3ac) {
            ctx->pc = 0x23E3C8u;
            goto label_23e3c8;
        }
    }
    ctx->pc = 0x23E3B4u;
    // 0x23e3b4: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x23E3B4u;
    SET_GPR_U32(ctx, 31, 0x23E3BCu);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x23E3B4u, 0x23E3BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E3BCu;
label_23e3bc:
    // 0x23e3bc: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x23e3bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x23e3c0: 0x10400097  beqz        $v0, . + 4 + (0x97 << 2)
    ctx->pc = 0x23E3C0u;
    {
        const bool branch_taken_0x23e3c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E3C0u;
        // 0x23e3c4: 0x24020022  addiu       $v0, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e3c0) {
            ctx->pc = 0x23E620u;
            goto label_23e620;
        }
    }
    ctx->pc = 0x23E3C8u;
label_23e3c8:
    // 0x23e3c8: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x23E3C8u;
    SET_GPR_U32(ctx, 31, 0x23E3D0u);
    ctx->pc = 0x23E3CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E3C8u;
    // 0x23e3cc: 0x24110003  addiu       $s1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x23E3C8u, 0x23E3D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E3D0u;
label_23e3d0:
    // 0x23e3d0: 0x51001b  divu        $zero, $v0, $s1
    ctx->pc = 0x23e3d0u;
    { uint32_t divisor = GPR_U32(ctx, 17); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x23e3d4: 0x52200001  beql        $s1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x23E3D4u;
    {
        const bool branch_taken_0x23e3d4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x23e3d4) {
            ctx->pc = 0x23E3D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23E3D4u;
            // 0x23e3d8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x23E3DCu;
            goto label_23e3dc;
        }
    }
    ctx->pc = 0x23E3DCu;
label_23e3dc:
    // 0x23e3dc: 0x1810  mfhi        $v1
    ctx->pc = 0x23e3dcu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x23e3e0: 0x1060008f  beqz        $v1, . + 4 + (0x8F << 2)
    ctx->pc = 0x23E3E0u;
    {
        const bool branch_taken_0x23e3e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E3E0u;
        // 0x23e3e4: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e3e0) {
            ctx->pc = 0x23E620u;
            goto label_23e620;
        }
    }
    ctx->pc = 0x23E3E8u;
    // 0x23e3e8: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x23E3E8u;
    SET_GPR_U32(ctx, 31, 0x23E3F0u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x23E3E8u, 0x23E3F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E3F0u;
label_23e3f0:
    // 0x23e3f0: 0x51001b  divu        $zero, $v0, $s1
    ctx->pc = 0x23e3f0u;
    { uint32_t divisor = GPR_U32(ctx, 17); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x23e3f4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x23e3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x23e3f8: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x23E3F8u;
    {
        const bool branch_taken_0x23e3f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23e3f8) {
            ctx->pc = 0x23E3FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23E3F8u;
            // 0x23e3fc: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x23E400u;
            goto label_23e400;
        }
    }
    ctx->pc = 0x23E400u;
label_23e400:
    // 0x23e400: 0x1810  mfhi        $v1
    ctx->pc = 0x23e400u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x23e404: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x23E404u;
    {
        const bool branch_taken_0x23e404 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E404u;
        // 0x23e408: 0x24030020  addiu       $v1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e404) {
            ctx->pc = 0x23E41Cu;
            goto label_23e41c;
        }
    }
    ctx->pc = 0x23E40Cu;
    // 0x23e40c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23e40cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23e410: 0xa20202f7  sb          $v0, 0x2F7($s0)
    ctx->pc = 0x23e410u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 2));
    // 0x23e414: 0x10000084  b           . + 4 + (0x84 << 2)
    ctx->pc = 0x23E414u;
    {
        const bool branch_taken_0x23e414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E414u;
        // 0x23e418: 0xa20302f5  sb          $v1, 0x2F5($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e414) {
            ctx->pc = 0x23E628u;
            goto label_23e628;
        }
    }
    ctx->pc = 0x23E41Cu;
label_23e41c:
    // 0x23e41c: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x23E41Cu;
    SET_GPR_U32(ctx, 31, 0x23E424u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x23E41Cu, 0x23E424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E424u;
label_23e424:
    // 0x23e424: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x23e424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x23e428: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x23e428u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x23e42c: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x23E42Cu;
    {
        const bool branch_taken_0x23e42c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23e42c) {
            ctx->pc = 0x23E430u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23E42Cu;
            // 0x23e430: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x23E434u;
            goto label_23e434;
        }
    }
    ctx->pc = 0x23E434u;
label_23e434:
    // 0x23e434: 0x2010  mfhi        $a0
    ctx->pc = 0x23e434u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x23e438: 0x5480006b  bnel        $a0, $zero, . + 4 + (0x6B << 2)
    ctx->pc = 0x23E438u;
    {
        const bool branch_taken_0x23e438 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x23e438) {
            ctx->pc = 0x23E43Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23E438u;
            // 0x23e43c: 0x8e0206ec  lw          $v0, 0x6EC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23E5E8u;
            goto label_23e5e8;
        }
    }
    ctx->pc = 0x23E440u;
    // 0x23e440: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x23e440u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x23e444: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23e444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23e448: 0xa20202f7  sb          $v0, 0x2F7($s0)
    ctx->pc = 0x23e448u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 2));
    // 0x23e44c: 0x10000076  b           . + 4 + (0x76 << 2)
    ctx->pc = 0x23E44Cu;
    {
        const bool branch_taken_0x23e44c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E44Cu;
        // 0x23e450: 0xa20302f5  sb          $v1, 0x2F5($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e44c) {
            ctx->pc = 0x23E628u;
            goto label_23e628;
        }
    }
    ctx->pc = 0x23E454u;
label_23e454:
    // 0x23e454: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x23e454u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x23e458: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x23E458u;
    SET_GPR_U32(ctx, 31, 0x23E460u);
    ctx->pc = 0x23E45Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E458u;
    // 0x23e45c: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x23E458u, 0x23E460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E460u;
label_23e460:
    // 0x23e460: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x23e460u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e464: 0x18600005  blez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x23E464u;
    {
        const bool branch_taken_0x23e464 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x23E468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E464u;
        // 0x23e468: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e464) {
            ctx->pc = 0x23E47Cu;
            goto label_23e47c;
        }
    }
    ctx->pc = 0x23E46Cu;
    // 0x23e46c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23E46Cu;
    {
        const bool branch_taken_0x23e46c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E46Cu;
        // 0x23e470: 0x28620006  slti        $v0, $v1, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e46c) {
            ctx->pc = 0x23E47Cu;
            goto label_23e47c;
        }
    }
    ctx->pc = 0x23E474u;
    // 0x23e474: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x23E474u;
    {
        const bool branch_taken_0x23e474 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23e474) {
            ctx->pc = 0x23E4C8u;
            goto label_23e4c8;
        }
    }
    ctx->pc = 0x23E47Cu;
label_23e47c:
    // 0x23e47c: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x23E47Cu;
    SET_GPR_U32(ctx, 31, 0x23E484u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x23E47Cu, 0x23E484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E484u;
label_23e484:
    // 0x23e484: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x23e484u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x23e488: 0x10400065  beqz        $v0, . + 4 + (0x65 << 2)
    ctx->pc = 0x23E488u;
    {
        const bool branch_taken_0x23e488 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E488u;
        // 0x23e48c: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e488) {
            ctx->pc = 0x23E620u;
            goto label_23e620;
        }
    }
    ctx->pc = 0x23E490u;
    // 0x23e490: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x23E490u;
    SET_GPR_U32(ctx, 31, 0x23E498u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x23E490u, 0x23E498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E498u;
label_23e498:
    // 0x23e498: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x23e498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x23e49c: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x23e49cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x23e4a0: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x23E4A0u;
    {
        const bool branch_taken_0x23e4a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23e4a0) {
            ctx->pc = 0x23E4A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23E4A0u;
            // 0x23e4a4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x23E4A8u;
            goto label_23e4a8;
        }
    }
    ctx->pc = 0x23E4A8u;
label_23e4a8:
    // 0x23e4a8: 0x2010  mfhi        $a0
    ctx->pc = 0x23e4a8u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x23e4ac: 0x5480004e  bnel        $a0, $zero, . + 4 + (0x4E << 2)
    ctx->pc = 0x23E4ACu;
    {
        const bool branch_taken_0x23e4ac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x23e4ac) {
            ctx->pc = 0x23E4B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23E4ACu;
            // 0x23e4b0: 0x8e0206ec  lw          $v0, 0x6EC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23E5E8u;
            goto label_23e5e8;
        }
    }
    ctx->pc = 0x23E4B4u;
    // 0x23e4b4: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x23e4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x23e4b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23e4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23e4bc: 0xa20202f7  sb          $v0, 0x2F7($s0)
    ctx->pc = 0x23e4bcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 2));
    // 0x23e4c0: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x23E4C0u;
    {
        const bool branch_taken_0x23e4c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E4C0u;
        // 0x23e4c4: 0xa20302f5  sb          $v1, 0x2F5($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e4c0) {
            ctx->pc = 0x23E628u;
            goto label_23e628;
        }
    }
    ctx->pc = 0x23E4C8u;
label_23e4c8:
    // 0x23e4c8: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x23E4C8u;
    SET_GPR_U32(ctx, 31, 0x23E4D0u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x23E4C8u, 0x23E4D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E4D0u;
label_23e4d0:
    // 0x23e4d0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x23e4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x23e4d4: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x23e4d4u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x23e4d8: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x23E4D8u;
    {
        const bool branch_taken_0x23e4d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23e4d8) {
            ctx->pc = 0x23E4DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23E4D8u;
            // 0x23e4dc: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x23E4E0u;
            goto label_23e4e0;
        }
    }
    ctx->pc = 0x23E4E0u;
label_23e4e0:
    // 0x23e4e0: 0x2010  mfhi        $a0
    ctx->pc = 0x23e4e0u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x23e4e4: 0x1080004e  beqz        $a0, . + 4 + (0x4E << 2)
    ctx->pc = 0x23E4E4u;
    {
        const bool branch_taken_0x23e4e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E4E4u;
        // 0x23e4e8: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e4e4) {
            ctx->pc = 0x23E620u;
            goto label_23e620;
        }
    }
    ctx->pc = 0x23E4ECu;
    // 0x23e4ec: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x23E4ECu;
    SET_GPR_U32(ctx, 31, 0x23E4F4u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x23E4ECu, 0x23E4F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E4F4u;
label_23e4f4:
    // 0x23e4f4: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x23e4f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x23e4f8: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x23e4f8u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x23e4fc: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x23E4FCu;
    {
        const bool branch_taken_0x23e4fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23e4fc) {
            ctx->pc = 0x23E500u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23E4FCu;
            // 0x23e500: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x23E504u;
            goto label_23e504;
        }
    }
    ctx->pc = 0x23E504u;
label_23e504:
    // 0x23e504: 0x2010  mfhi        $a0
    ctx->pc = 0x23e504u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x23e508: 0x54800037  bnel        $a0, $zero, . + 4 + (0x37 << 2)
    ctx->pc = 0x23E508u;
    {
        const bool branch_taken_0x23e508 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x23e508) {
            ctx->pc = 0x23E50Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23E508u;
            // 0x23e50c: 0x8e0206ec  lw          $v0, 0x6EC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23E5E8u;
            goto label_23e5e8;
        }
    }
    ctx->pc = 0x23E510u;
    // 0x23e510: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x23e510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x23e514: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23e514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23e518: 0xa20202f7  sb          $v0, 0x2F7($s0)
    ctx->pc = 0x23e518u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 2));
    // 0x23e51c: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x23E51Cu;
    {
        const bool branch_taken_0x23e51c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E51Cu;
        // 0x23e520: 0xa20302f5  sb          $v1, 0x2F5($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e51c) {
            ctx->pc = 0x23E628u;
            goto label_23e628;
        }
    }
    ctx->pc = 0x23E524u;
label_23e524:
    // 0x23e524: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x23E524u;
    SET_GPR_U32(ctx, 31, 0x23E52Cu);
    ctx->pc = 0x23E528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E524u;
    // 0x23e528: 0x24110006  addiu       $s1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x23E524u, 0x23E52Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E52Cu;
label_23e52c:
    // 0x23e52c: 0x51001b  divu        $zero, $v0, $s1
    ctx->pc = 0x23e52cu;
    { uint32_t divisor = GPR_U32(ctx, 17); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x23e530: 0x52200001  beql        $s1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x23E530u;
    {
        const bool branch_taken_0x23e530 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x23e530) {
            ctx->pc = 0x23E534u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23E530u;
            // 0x23e534: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x23E538u;
            goto label_23e538;
        }
    }
    ctx->pc = 0x23E538u;
label_23e538:
    // 0x23e538: 0x1810  mfhi        $v1
    ctx->pc = 0x23e538u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x23e53c: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x23E53Cu;
    {
        const bool branch_taken_0x23e53c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E53Cu;
        // 0x23e540: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e53c) {
            ctx->pc = 0x23E558u;
            goto label_23e558;
        }
    }
    ctx->pc = 0x23E544u;
    // 0x23e544: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x23e544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x23e548: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23e548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23e54c: 0xa20202f7  sb          $v0, 0x2F7($s0)
    ctx->pc = 0x23e54cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 2));
    // 0x23e550: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x23E550u;
    {
        const bool branch_taken_0x23e550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E550u;
        // 0x23e554: 0xa20302f5  sb          $v1, 0x2F5($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e550) {
            ctx->pc = 0x23E628u;
            goto label_23e628;
        }
    }
    ctx->pc = 0x23E558u;
label_23e558:
    // 0x23e558: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x23E558u;
    SET_GPR_U32(ctx, 31, 0x23E560u);
    ctx->pc = 0x23E55Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E558u;
    // 0x23e55c: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x23E558u, 0x23E560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E560u;
label_23e560:
    // 0x23e560: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x23e560u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e564: 0x28620005  slti        $v0, $v1, 0x5
    ctx->pc = 0x23e564u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x23e568: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23E568u;
    {
        const bool branch_taken_0x23e568 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E568u;
        // 0x23e56c: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e568) {
            ctx->pc = 0x23E580u;
            goto label_23e580;
        }
    }
    ctx->pc = 0x23E570u;
    // 0x23e570: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x23E570u;
    {
        const bool branch_taken_0x23e570 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E570u;
        // 0x23e574: 0x24020015  addiu       $v0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e570) {
            ctx->pc = 0x23E594u;
            goto label_23e594;
        }
    }
    ctx->pc = 0x23E578u;
    // 0x23e578: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x23E578u;
    {
        const bool branch_taken_0x23e578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E578u;
        // 0x23e57c: 0xa20002f7  sb          $zero, 0x2F7($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e578) {
            ctx->pc = 0x23E624u;
            goto label_23e624;
        }
    }
    ctx->pc = 0x23E580u;
label_23e580:
    // 0x23e580: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x23e580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x23e584: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x23E584u;
    {
        const bool branch_taken_0x23e584 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x23e584) {
            ctx->pc = 0x23E5B0u;
            goto label_23e5b0;
        }
    }
    ctx->pc = 0x23E58Cu;
    // 0x23e58c: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x23E58Cu;
    {
        const bool branch_taken_0x23e58c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E58Cu;
        // 0x23e590: 0x24020015  addiu       $v0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e58c) {
            ctx->pc = 0x23E620u;
            goto label_23e620;
        }
    }
    ctx->pc = 0x23E594u;
label_23e594:
    // 0x23e594: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x23E594u;
    SET_GPR_U32(ctx, 31, 0x23E59Cu);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x23E594u, 0x23E59Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E59Cu;
label_23e59c:
    // 0x23e59c: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x23e59cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x23e5a0: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x23E5A0u;
    {
        const bool branch_taken_0x23e5a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E5A0u;
        // 0x23e5a4: 0x24020015  addiu       $v0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e5a0) {
            ctx->pc = 0x23E620u;
            goto label_23e620;
        }
    }
    ctx->pc = 0x23E5A8u;
    // 0x23e5a8: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x23E5A8u;
    {
        const bool branch_taken_0x23e5a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E5A8u;
        // 0x23e5ac: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e5a8) {
            ctx->pc = 0x23E620u;
            goto label_23e620;
        }
    }
    ctx->pc = 0x23E5B0u;
label_23e5b0:
    // 0x23e5b0: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x23E5B0u;
    SET_GPR_U32(ctx, 31, 0x23E5B8u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x23E5B0u, 0x23E5B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E5B8u;
label_23e5b8:
    // 0x23e5b8: 0x51001b  divu        $zero, $v0, $s1
    ctx->pc = 0x23e5b8u;
    { uint32_t divisor = GPR_U32(ctx, 17); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x23e5bc: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x23e5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x23e5c0: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x23E5C0u;
    {
        const bool branch_taken_0x23e5c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23e5c0) {
            ctx->pc = 0x23E5C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23E5C0u;
            // 0x23e5c4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x23E5C8u;
            goto label_23e5c8;
        }
    }
    ctx->pc = 0x23E5C8u;
label_23e5c8:
    // 0x23e5c8: 0x1810  mfhi        $v1
    ctx->pc = 0x23e5c8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x23e5cc: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x23E5CCu;
    {
        const bool branch_taken_0x23e5cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E5CCu;
        // 0x23e5d0: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e5cc) {
            ctx->pc = 0x23E620u;
            goto label_23e620;
        }
    }
    ctx->pc = 0x23E5D4u;
    // 0x23e5d4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x23E5D4u;
    {
        const bool branch_taken_0x23e5d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E5D4u;
        // 0x23e5d8: 0x24020015  addiu       $v0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e5d4) {
            ctx->pc = 0x23E620u;
            goto label_23e620;
        }
    }
    ctx->pc = 0x23E5DCu;
label_23e5dc:
    // 0x23e5dc: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x23E5DCu;
    {
        const bool branch_taken_0x23e5dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E5DCu;
        // 0x23e5e0: 0x24020015  addiu       $v0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e5dc) {
            ctx->pc = 0x23E620u;
            goto label_23e620;
        }
    }
    ctx->pc = 0x23E5E4u;
label_23e5e4:
    // 0x23e5e4: 0x8e0206ec  lw          $v0, 0x6EC($s0)
    ctx->pc = 0x23e5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1772)));
label_23e5e8:
    // 0x23e5e8: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x23E5E8u;
    {
        const bool branch_taken_0x23e5e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E5E8u;
        // 0x23e5ec: 0x24020047  addiu       $v0, $zero, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e5e8) {
            ctx->pc = 0x23E620u;
            goto label_23e620;
        }
    }
    ctx->pc = 0x23E5F0u;
    // 0x23e5f0: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x23E5F0u;
    SET_GPR_U32(ctx, 31, 0x23E5F8u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x23E5F0u, 0x23E5F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E5F8u;
label_23e5f8:
    // 0x23e5f8: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x23e5f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x23e5fc: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x23E5FCu;
    {
        const bool branch_taken_0x23e5fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E5FCu;
        // 0x23e600: 0x24020015  addiu       $v0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e5fc) {
            ctx->pc = 0x23E638u;
            goto label_23e638;
        }
    }
    ctx->pc = 0x23E604u;
    // 0x23e604: 0x8e0206ec  lw          $v0, 0x6EC($s0)
    ctx->pc = 0x23e604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1772)));
    // 0x23e608: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x23E608u;
    {
        const bool branch_taken_0x23e608 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E608u;
        // 0x23e60c: 0x24020015  addiu       $v0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e608) {
            ctx->pc = 0x23E638u;
            goto label_23e638;
        }
    }
    ctx->pc = 0x23E610u;
    // 0x23e610: 0xc09c340  jal         func_270D00
    ctx->pc = 0x23E610u;
    SET_GPR_U32(ctx, 31, 0x23E618u);
    ctx->pc = 0x23E614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E610u;
    // 0x23e614: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x270D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x270D00u, 0x23E610u, 0x23E618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E618u;
label_23e618:
    // 0x23e618: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x23E618u;
    {
        const bool branch_taken_0x23e618 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E618u;
        // 0x23e61c: 0x2402004b  addiu       $v0, $zero, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e618) {
            ctx->pc = 0x23E634u;
            goto label_23e634;
        }
    }
    ctx->pc = 0x23E620u;
label_23e620:
    // 0x23e620: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x23e620u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
label_23e624:
    // 0x23e624: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x23e624u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
label_23e628:
    // 0x23e628: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x23e628u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x23e62c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x23E62Cu;
    {
        const bool branch_taken_0x23e62c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E62Cu;
        // 0x23e630: 0xa20002f6  sb          $zero, 0x2F6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e62c) {
            ctx->pc = 0x23E680u;
            goto label_23e680;
        }
    }
    ctx->pc = 0x23E634u;
label_23e634:
    // 0x23e634: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x23e634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_23e638:
    // 0x23e638: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x23e638u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x23e63c: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x23e63cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x23e640: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x23e640u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x23e644: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x23e644u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
label_23e648:
    // 0x23e648: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x23e648u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x23e64c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x23e64cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x23e650: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23e650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e654: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x23E654u;
    SET_GPR_U32(ctx, 31, 0x23E65Cu);
    ctx->pc = 0x23E658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E654u;
    // 0x23e658: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x23E654u, 0x23E65Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E65Cu;
label_23e65c:
    // 0x23e65c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x23e65cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x23e660: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x23E660u;
    SET_GPR_U32(ctx, 31, 0x23E668u);
    ctx->pc = 0x23E664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E660u;
    // 0x23e664: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x23E660u, 0x23E668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E668u;
label_23e668:
    // 0x23e668: 0x8e030564  lw          $v1, 0x564($s0)
    ctx->pc = 0x23e668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
label_23e66c:
    // 0x23e66c: 0x2402021f  addiu       $v0, $zero, 0x21F
    ctx->pc = 0x23e66cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 543));
    // 0x23e670: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23E670u;
    {
        const bool branch_taken_0x23e670 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x23e670) {
            ctx->pc = 0x23E674u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23E670u;
            // 0x23e674: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23E684u;
            goto label_23e684;
        }
    }
    ctx->pc = 0x23E678u;
    // 0x23e678: 0xc0982cc  jal         func_260B30
    ctx->pc = 0x23E678u;
    SET_GPR_U32(ctx, 31, 0x23E680u);
    ctx->pc = 0x23E67Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E678u;
    // 0x23e67c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x260B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260B30u, 0x23E678u, 0x23E680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E680u;
label_23e680:
    // 0x23e680: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x23e680u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_23e684:
    // 0x23e684: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x23e684u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x23e688: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x23e688u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x23e68c: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x23e68cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x23e690: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x23e690u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x23e694: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x23e694u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23e698: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x23e698u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23e69c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x23e69cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23e6a0: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x23e6a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x23e6a4: 0x3e00008  jr          $ra
    ctx->pc = 0x23E6A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23E6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E6A4u;
        // 0x23e6a8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23E6A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23E6ACu;
    // 0x23e6ac: 0x0  nop
    ctx->pc = 0x23e6acu;
    // NOP
    ctx->pc = 0x23e6b0u;
}
