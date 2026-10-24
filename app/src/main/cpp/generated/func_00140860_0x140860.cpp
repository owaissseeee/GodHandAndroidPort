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

// Function: func_00140860
// Address: 0x140860 - 0x140b58
void func_00140860_0x140860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00140860_0x140860");
#endif

    switch (ctx->pc) {
        case 0x1408b8u: goto label_1408b8;
        case 0x1408ecu: goto label_1408ec;
        case 0x140960u: goto label_140960;
        case 0x1409f0u: goto label_1409f0;
        case 0x140adcu: goto label_140adc;
        default: break;
    }

    ctx->pc = 0x140860u;

    // 0x140860: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x140860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x140864: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x140864u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x140868: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x140868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x14086c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x14086cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140870: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x140870u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x140874: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x140874u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x140878: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x140878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x14087c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x14087cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x140880: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x140880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x140884: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x140884u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x140888: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x140888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x14088c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x14088cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x140890: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x140890u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x140894: 0x92220358  lbu         $v0, 0x358($s1)
    ctx->pc = 0x140894u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 856)));
    // 0x140898: 0x104000a1  beqz        $v0, . + 4 + (0xA1 << 2)
    ctx->pc = 0x140898u;
    {
        const bool branch_taken_0x140898 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14089Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140898u;
        // 0x14089c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140898) {
            ctx->pc = 0x140B20u;
            goto label_140b20;
        }
    }
    ctx->pc = 0x1408A0u;
    // 0x1408a0: 0x26220250  addiu       $v0, $s1, 0x250
    ctx->pc = 0x1408a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 592));
    // 0x1408a4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1408a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1408a8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1408a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1408ac: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1408acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1408b0: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x1408b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1408b4: 0x0  nop
    ctx->pc = 0x1408b4u;
    // NOP
label_1408b8:
    // 0x1408b8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1408b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1408bc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1408bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1408c0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1408c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1408c4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1408c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1408c8: 0x948302fe  lhu         $v1, 0x2FE($a0)
    ctx->pc = 0x1408c8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 766)));
    // 0x1408cc: 0x28620200  slti        $v0, $v1, 0x200
    ctx->pc = 0x1408ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)512) ? 1 : 0);
    // 0x1408d0: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x1408D0u;
    {
        const bool branch_taken_0x1408d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1408d0) {
            ctx->pc = 0x1408D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1408D0u;
            // 0x1408d4: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x140908u;
            goto label_140908;
        }
    }
    ctx->pc = 0x1408D8u;
    // 0x1408d8: 0x28620300  slti        $v0, $v1, 0x300
    ctx->pc = 0x1408d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)768) ? 1 : 0);
    // 0x1408dc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1408DCu;
    {
        const bool branch_taken_0x1408dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1408E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1408DCu;
        // 0x1408e0: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1408dc) {
            ctx->pc = 0x140908u;
            goto label_140908;
        }
    }
    ctx->pc = 0x1408E4u;
    // 0x1408e4: 0xc0a3ece  jal         func_28FB38
    ctx->pc = 0x1408E4u;
    SET_GPR_U32(ctx, 31, 0x1408ECu);
    ctx->pc = 0x28FB38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28FB38u, 0x1408E4u, 0x1408ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1408ECu;
label_1408ec:
    // 0x1408ec: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x1408ECu;
    {
        const bool branch_taken_0x1408ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1408ec) {
            ctx->pc = 0x1408F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1408ECu;
            // 0x1408f0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x140940u;
            goto label_140940;
        }
    }
    ctx->pc = 0x1408F4u;
    // 0x1408f4: 0x3c060074  lui         $a2, 0x74
    ctx->pc = 0x1408f4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)116 << 16));
    // 0x1408f8: 0x3c072000  lui         $a3, 0x2000
    ctx->pc = 0x1408f8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)8192 << 16));
    // 0x1408fc: 0x8cc27a84  lw          $v0, 0x7A84($a2)
    ctx->pc = 0x1408fcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A84u));
    // 0x140900: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x140900u;
    {
        const bool branch_taken_0x140900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x140904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140900u;
        // 0x140904: 0x471024  and         $v0, $v0, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140900) {
            ctx->pc = 0x140934u;
            goto label_140934;
        }
    }
    ctx->pc = 0x140908u;
label_140908:
    // 0x140908: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x140908u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14090c: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x14090cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x140910: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x140910u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x140914: 0x9c8305b0  lwu         $v1, 0x5B0($a0)
    ctx->pc = 0x140914u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 1456)));
    // 0x140918: 0x3187b  dsra        $v1, $v1, 1
    ctx->pc = 0x140918u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> 1);
    // 0x14091c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x14091cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x140920: 0x10660006  beq         $v1, $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x140920u;
    {
        const bool branch_taken_0x140920 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        ctx->pc = 0x140924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140920u;
        // 0x140924: 0x3c070074  lui         $a3, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140920) {
            ctx->pc = 0x14093Cu;
            goto label_14093c;
        }
    }
    ctx->pc = 0x140928u;
    // 0x140928: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x140928u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x14092c: 0x8ce27a84  lw          $v0, 0x7A84($a3)
    ctx->pc = 0x14092cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 31364)));
    // 0x140930: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x140930u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_140934:
    // 0x140934: 0x10400075  beqz        $v0, . + 4 + (0x75 << 2)
    ctx->pc = 0x140934u;
    {
        const bool branch_taken_0x140934 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x140938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140934u;
        // 0x140938: 0x26430001  addiu       $v1, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140934) {
            ctx->pc = 0x140B0Cu;
            goto label_140b0c;
        }
    }
    ctx->pc = 0x14093Cu;
label_14093c:
    // 0x14093c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14093cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_140940:
    // 0x140940: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x140940u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x140944: 0x14460071  bne         $v0, $a2, . + 4 + (0x71 << 2)
    ctx->pc = 0x140944u;
    {
        const bool branch_taken_0x140944 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        ctx->pc = 0x140948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140944u;
        // 0x140948: 0x26430001  addiu       $v1, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140944) {
            ctx->pc = 0x140B0Cu;
            goto label_140b0c;
        }
    }
    ctx->pc = 0x14094Cu;
    // 0x14094c: 0x24040050  addiu       $a0, $zero, 0x50
    ctx->pc = 0x14094cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x140950: 0x2442018  mult        $a0, $s2, $a0
    ctx->pc = 0x140950u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x140954: 0x248400c0  addiu       $a0, $a0, 0xC0
    ctx->pc = 0x140954u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
    // 0x140958: 0xc0aae9e  jal         func_2ABA78
    ctx->pc = 0x140958u;
    SET_GPR_U32(ctx, 31, 0x140960u);
    ctx->pc = 0x14095Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140958u;
    // 0x14095c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABA78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABA78u, 0x140958u, 0x140960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140960u;
label_140960:
    // 0x140960: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x140960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x140964: 0x262702c0  addiu       $a3, $s1, 0x2C0
    ctx->pc = 0x140964u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 704));
    // 0x140968: 0x262a02d4  addiu       $t2, $s1, 0x2D4
    ctx->pc = 0x140968u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 17), 724));
    // 0x14096c: 0x262d02e8  addiu       $t5, $s1, 0x2E8
    ctx->pc = 0x14096cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 17), 744));
    // 0x140970: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x140970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x140974: 0x1502021  addu        $a0, $t2, $s0
    ctx->pc = 0x140974u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 16)));
    // 0x140978: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x140978u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x14097c: 0xf01821  addu        $v1, $a3, $s0
    ctx->pc = 0x14097cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 16)));
    // 0x140980: 0xe4740000  swc1        $f20, 0x0($v1)
    ctx->pc = 0x140980u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x140984: 0x262602fc  addiu       $a2, $s1, 0x2FC
    ctx->pc = 0x140984u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 764));
    // 0x140988: 0xe4940000  swc1        $f20, 0x0($a0)
    ctx->pc = 0x140988u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x14098c: 0x1b02821  addu        $a1, $t5, $s0
    ctx->pc = 0x14098cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 16)));
    // 0x140990: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x140990u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x140994: 0xe4b40000  swc1        $f20, 0x0($a1)
    ctx->pc = 0x140994u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x140998: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x140998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x14099c: 0x262c0370  addiu       $t4, $s1, 0x370
    ctx->pc = 0x14099cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 17), 880));
    // 0x1409a0: 0xa4400000  sh          $zero, 0x0($v0)
    ctx->pc = 0x1409a0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x1409a4: 0x262800a8  addiu       $t0, $s1, 0xA8
    ctx->pc = 0x1409a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 168));
    // 0x1409a8: 0x1901821  addu        $v1, $t4, $s0
    ctx->pc = 0x1409a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 16)));
    // 0x1409ac: 0x1101021  addu        $v0, $t0, $s0
    ctx->pc = 0x1409acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 16)));
    // 0x1409b0: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1409b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x1409b4: 0x240782d  daddu       $t7, $s2, $zero
    ctx->pc = 0x1409b4u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1409b8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1409b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1409bc: 0x25e2ffff  addiu       $v0, $t7, -0x1
    ctx->pc = 0x1409bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967295));
    // 0x1409c0: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x1409c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x1409c4: 0x92220358  lbu         $v0, 0x358($s1)
    ctx->pc = 0x1409c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 856)));
    // 0x1409c8: 0x1e2102b  sltu        $v0, $t7, $v0
    ctx->pc = 0x1409c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1409cc: 0x10400049  beqz        $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x1409CCu;
    {
        const bool branch_taken_0x1409cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1409D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1409CCu;
        // 0x1409d0: 0x8fb20000  lw          $s2, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1409cc) {
            ctx->pc = 0x140AF4u;
            goto label_140af4;
        }
    }
    ctx->pc = 0x1409D4u;
    // 0x1409d4: 0xe0f02d  daddu       $fp, $a3, $zero
    ctx->pc = 0x1409d4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1409d8: 0x140b82d  daddu       $s7, $t2, $zero
    ctx->pc = 0x1409d8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1409dc: 0x1a0b02d  daddu       $s6, $t5, $zero
    ctx->pc = 0x1409dcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1409e0: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x1409e0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1409e4: 0x180a02d  daddu       $s4, $t4, $zero
    ctx->pc = 0x1409e4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1409e8: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x1409e8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1409ec: 0x92300358  lbu         $s0, 0x358($s1)
    ctx->pc = 0x1409ecu;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 856)));
label_1409f0:
    // 0x1409f0: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x1409f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1409f4: 0x11e20035  beq         $t7, $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x1409F4u;
    {
        const bool branch_taken_0x1409f4 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 2));
        ctx->pc = 0x1409F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1409F4u;
        // 0x1409f8: 0x25e80001  addiu       $t0, $t7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1409f4) {
            ctx->pc = 0x140ACCu;
            goto label_140acc;
        }
    }
    ctx->pc = 0x1409FCu;
    // 0x1409fc: 0xf2880  sll         $a1, $t7, 2
    ctx->pc = 0x1409fcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x140a00: 0x82080  sll         $a0, $t0, 2
    ctx->pc = 0x140a00u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x140a04: 0x2453021  addu        $a2, $s2, $a1
    ctx->pc = 0x140a04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x140a08: 0x2441021  addu        $v0, $s2, $a0
    ctx->pc = 0x140a08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x140a0c: 0x3c43821  addu        $a3, $fp, $a0
    ctx->pc = 0x140a0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 4)));
    // 0x140a10: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x140a10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x140a14: 0x3c54821  addu        $t1, $fp, $a1
    ctx->pc = 0x140a14u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 5)));
    // 0x140a18: 0x2e45021  addu        $t2, $s7, $a0
    ctx->pc = 0x140a18u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 4)));
    // 0x140a1c: 0x2e55821  addu        $t3, $s7, $a1
    ctx->pc = 0x140a1cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 5)));
    // 0x140a20: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x140a20u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x140a24: 0x2c46821  addu        $t5, $s6, $a0
    ctx->pc = 0x140a24u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
    // 0x140a28: 0x2c57021  addu        $t6, $s6, $a1
    ctx->pc = 0x140a28u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 5)));
    // 0x140a2c: 0xf1100  sll         $v0, $t7, 4
    ctx->pc = 0x140a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 15), 4));
    // 0x140a30: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x140a30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x140a34: 0x81840  sll         $v1, $t0, 1
    ctx->pc = 0x140a34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x140a38: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x140a38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x140a3c: 0xf3040  sll         $a2, $t7, 1
    ctx->pc = 0x140a3cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 15), 1));
    // 0x140a40: 0xe5200000  swc1        $f0, 0x0($t1)
    ctx->pc = 0x140a40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
    // 0x140a44: 0x2a63021  addu        $a2, $s5, $a2
    ctx->pc = 0x140a44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 6)));
    // 0x140a48: 0x514821  addu        $t1, $v0, $s1
    ctx->pc = 0x140a48u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x140a4c: 0x2846021  addu        $t4, $s4, $a0
    ctx->pc = 0x140a4cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    // 0x140a50: 0xc5400000  lwc1        $f0, 0x0($t2)
    ctx->pc = 0x140a50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x140a54: 0x2853821  addu        $a3, $s4, $a1
    ctx->pc = 0x140a54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
    // 0x140a58: 0x2642021  addu        $a0, $s3, $a0
    ctx->pc = 0x140a58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    // 0x140a5c: 0x2652821  addu        $a1, $s3, $a1
    ctx->pc = 0x140a5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
    // 0x140a60: 0xe5600000  swc1        $f0, 0x0($t3)
    ctx->pc = 0x140a60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 0), bits); }
    // 0x140a64: 0x252f0270  addiu       $t7, $t1, 0x270
    ctx->pc = 0x140a64u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 9), 624));
    // 0x140a68: 0x252a0280  addiu       $t2, $t1, 0x280
    ctx->pc = 0x140a68u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), 640));
    // 0x140a6c: 0xc5a00000  lwc1        $f0, 0x0($t5)
    ctx->pc = 0x140a6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x140a70: 0xe5c00000  swc1        $f0, 0x0($t6)
    ctx->pc = 0x140a70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 0), bits); }
    // 0x140a74: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x140a74u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x140a78: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x140a78u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x140a7c: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x140a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x140a80: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x140a80u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x140a84: 0x6923031f  ldl         $v1, 0x31F($t1)
    ctx->pc = 0x140a84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 799); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x140a88: 0x6d230318  ldr         $v1, 0x318($t1)
    ctx->pc = 0x140a88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 792); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x140a8c: 0x69260327  ldl         $a2, 0x327($t1)
    ctx->pc = 0x140a8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 807); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x140a90: 0x6d260320  ldr         $a2, 0x320($t1)
    ctx->pc = 0x140a90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 800); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x140a94: 0xb123030f  sdl         $v1, 0x30F($t1)
    ctx->pc = 0x140a94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 783); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x140a98: 0xb5230308  sdr         $v1, 0x308($t1)
    ctx->pc = 0x140a98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 776); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x140a9c: 0xb1260317  sdl         $a2, 0x317($t1)
    ctx->pc = 0x140a9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 791); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x140aa0: 0xb5260310  sdr         $a2, 0x310($t1)
    ctx->pc = 0x140aa0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 784); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x140aa4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x140aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x140aa8: 0x11ea000d  beq         $t7, $t2, . + 4 + (0xD << 2)
    ctx->pc = 0x140AA8u;
    {
        const bool branch_taken_0x140aa8 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 10));
        ctx->pc = 0x140AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140AA8u;
        // 0x140aac: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140aa8) {
            ctx->pc = 0x140AE0u;
            goto label_140ae0;
        }
    }
    ctx->pc = 0x140AB0u;
    // 0x140ab0: 0xc5200280  lwc1        $f0, 0x280($t1)
    ctx->pc = 0x140ab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x140ab4: 0xe5200270  swc1        $f0, 0x270($t1)
    ctx->pc = 0x140ab4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 624), bits); }
    // 0x140ab8: 0xc5410004  lwc1        $f1, 0x4($t2)
    ctx->pc = 0x140ab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x140abc: 0xe5e10004  swc1        $f1, 0x4($t7)
    ctx->pc = 0x140abcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 4), bits); }
    // 0x140ac0: 0xc5400008  lwc1        $f0, 0x8($t2)
    ctx->pc = 0x140ac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x140ac4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x140AC4u;
    {
        const bool branch_taken_0x140ac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x140AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140AC4u;
        // 0x140ac8: 0xe5e00008  swc1        $f0, 0x8($t7) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x140ac4) {
            ctx->pc = 0x140AE0u;
            goto label_140ae0;
        }
    }
    ctx->pc = 0x140ACCu;
label_140acc:
    // 0x140acc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x140accu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140ad0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x140ad0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140ad4: 0xc0501c6  jal         func_140718
    ctx->pc = 0x140AD4u;
    SET_GPR_U32(ctx, 31, 0x140ADCu);
    ctx->pc = 0x140AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140AD4u;
    // 0x140ad8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140718u, 0x140AD4u, 0x140ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140ADCu;
label_140adc:
    // 0x140adc: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x140adcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_140ae0:
    // 0x140ae0: 0x92220358  lbu         $v0, 0x358($s1)
    ctx->pc = 0x140ae0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 856)));
    // 0x140ae4: 0x310fffff  andi        $t7, $t0, 0xFFFF
    ctx->pc = 0x140ae4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x140ae8: 0x1e2102b  sltu        $v0, $t7, $v0
    ctx->pc = 0x140ae8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x140aec: 0x5440ffc0  bnel        $v0, $zero, . + 4 + (-0x40 << 2)
    ctx->pc = 0x140AECu;
    {
        const bool branch_taken_0x140aec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x140aec) {
            ctx->pc = 0x140AF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x140AECu;
            // 0x140af0: 0x92300358  lbu         $s0, 0x358($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 856)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1409F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1409f0;
        }
    }
    ctx->pc = 0x140AF4u;
label_140af4:
    // 0x140af4: 0x92220358  lbu         $v0, 0x358($s1)
    ctx->pc = 0x140af4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 856)));
    // 0x140af8: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x140af8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x140afc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x140afcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x140b00: 0xa2220358  sb          $v0, 0x358($s1)
    ctx->pc = 0x140b00u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 856), (uint8_t)GPR_U32(ctx, 2));
    // 0x140b04: 0x3072ffff  andi        $s2, $v1, 0xFFFF
    ctx->pc = 0x140b04u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x140b08: 0x26430001  addiu       $v1, $s2, 0x1
    ctx->pc = 0x140b08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_140b0c:
    // 0x140b0c: 0x92220358  lbu         $v0, 0x358($s1)
    ctx->pc = 0x140b0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 856)));
    // 0x140b10: 0x3072ffff  andi        $s2, $v1, 0xFFFF
    ctx->pc = 0x140b10u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x140b14: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x140b14u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x140b18: 0x1440ff67  bnez        $v0, . + 4 + (-0x99 << 2)
    ctx->pc = 0x140B18u;
    {
        const bool branch_taken_0x140b18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x140B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140B18u;
        // 0x140b1c: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140b18) {
            ctx->pc = 0x1408B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1408b8;
        }
    }
    ctx->pc = 0x140B20u;
label_140b20:
    // 0x140b20: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x140b20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x140b24: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x140b24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x140b28: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x140b28u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x140b2c: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x140b2cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x140b30: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x140b30u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x140b34: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x140b34u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x140b38: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x140b38u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x140b3c: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x140b3cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x140b40: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x140b40u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x140b44: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x140b44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x140b48: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x140b48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x140b4c: 0x3e00008  jr          $ra
    ctx->pc = 0x140B4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x140B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140B4Cu;
        // 0x140b50: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x140B4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x140B54u;
    // 0x140b54: 0x0  nop
    ctx->pc = 0x140b54u;
    // NOP
    ctx->pc = 0x140b58u;
}
