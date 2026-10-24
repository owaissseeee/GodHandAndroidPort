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

// Function: func_001902F8
// Address: 0x1902f8 - 0x190948
void func_001902F8_0x1902f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001902F8_0x1902f8");
#endif

    switch (ctx->pc) {
        case 0x19033cu: goto label_19033c;
        case 0x190394u: goto label_190394;
        case 0x190414u: goto label_190414;
        case 0x190438u: goto label_190438;
        case 0x190514u: goto label_190514;
        case 0x190528u: goto label_190528;
        case 0x19053cu: goto label_19053c;
        case 0x190550u: goto label_190550;
        case 0x190584u: goto label_190584;
        case 0x1905c4u: goto label_1905c4;
        case 0x190604u: goto label_190604;
        case 0x190640u: goto label_190640;
        case 0x190674u: goto label_190674;
        case 0x190684u: goto label_190684;
        case 0x190694u: goto label_190694;
        case 0x1906a4u: goto label_1906a4;
        case 0x1906b4u: goto label_1906b4;
        case 0x1906c4u: goto label_1906c4;
        case 0x1906d4u: goto label_1906d4;
        case 0x1906e4u: goto label_1906e4;
        case 0x1906f4u: goto label_1906f4;
        case 0x190704u: goto label_190704;
        case 0x190720u: goto label_190720;
        case 0x190738u: goto label_190738;
        case 0x19085cu: goto label_19085c;
        case 0x190880u: goto label_190880;
        case 0x1908b8u: goto label_1908b8;
        case 0x190904u: goto label_190904;
        default: break;
    }

    ctx->pc = 0x1902f8u;

    // 0x1902f8: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x1902f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x1902fc: 0x7fb10110  sq          $s1, 0x110($sp)
    ctx->pc = 0x1902fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 17));
    // 0x190300: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x190300u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190304: 0x7fb00120  sq          $s0, 0x120($sp)
    ctx->pc = 0x190304u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 16));
    // 0x190308: 0x7fb600c0  sq          $s6, 0xC0($sp)
    ctx->pc = 0x190308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 22));
    // 0x19030c: 0x7fb700b0  sq          $s7, 0xB0($sp)
    ctx->pc = 0x19030cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 23));
    // 0x190310: 0x3c100057  lui         $s0, 0x57
    ctx->pc = 0x190310u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)87 << 16));
    // 0x190314: 0x7fbe00a0  sq          $fp, 0xA0($sp)
    ctx->pc = 0x190314u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 30));
    // 0x190318: 0x200b02d  daddu       $s6, $s0, $zero
    ctx->pc = 0x190318u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19031c: 0x7fb20100  sq          $s2, 0x100($sp)
    ctx->pc = 0x19031cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 18));
    // 0x190320: 0x3c170042  lui         $s7, 0x42
    ctx->pc = 0x190320u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)66 << 16));
    // 0x190324: 0x7fb300f0  sq          $s3, 0xF0($sp)
    ctx->pc = 0x190324u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 19));
    // 0x190328: 0x7fb400e0  sq          $s4, 0xE0($sp)
    ctx->pc = 0x190328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 20));
    // 0x19032c: 0x7fb500d0  sq          $s5, 0xD0($sp)
    ctx->pc = 0x19032cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 21));
    // 0x190330: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x190330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x190334: 0xc06dbee  jal         func_1B6FB8
    ctx->pc = 0x190334u;
    SET_GPR_U32(ctx, 31, 0x19033Cu);
    ctx->pc = 0x190338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190334u;
    // 0x190338: 0xe7b40130  swc1        $f20, 0x130($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6FB8u, 0x190334u, 0x19033Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19033Cu;
label_19033c:
    // 0x19033c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x19033cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x190340: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x190340u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x190344: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x190344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x190348: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x190348u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x19034c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x19034cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x190350: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x190350u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190354: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x190354u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x190358: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x190358u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x19035c: 0x26044380  addiu       $a0, $s0, 0x4380
    ctx->pc = 0x19035cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 17280));
    // 0x190360: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x190360u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
    // 0x190364: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x190364u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x190368: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x190368u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19036c: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x19036cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x190370: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x190370u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190374: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x190374u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x190378: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x190378u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x19037c: 0xe7a3000c  swc1        $f3, 0xC($sp)
    ctx->pc = 0x19037cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x190380: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x190380u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x190384: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x190384u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x190388: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x190388u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x19038c: 0xc07f83a  jal         func_1FE0E8
    ctx->pc = 0x19038Cu;
    SET_GPR_U32(ctx, 31, 0x190394u);
    ctx->pc = 0x190390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19038Cu;
    // 0x190390: 0xe443000c  swc1        $f3, 0xC($v0) (Delay Slot)
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE0E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE0E8u, 0x19038Cu, 0x190394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190394u;
label_190394:
    // 0x190394: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x190394u;
    {
        const bool branch_taken_0x190394 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x190398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190394u;
        // 0x190398: 0xae220610  sw          $v0, 0x610($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1552), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190394) {
            ctx->pc = 0x190438u;
            goto label_190438;
        }
    }
    ctx->pc = 0x19039Cu;
    // 0x19039c: 0x26e24010  addiu       $v0, $s7, 0x4010
    ctx->pc = 0x19039cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 16400));
    // 0x1903a0: 0x922302b4  lbu         $v1, 0x2B4($s1)
    ctx->pc = 0x1903a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x1903a4: 0x90440008  lbu         $a0, 0x8($v0)
    ctx->pc = 0x1903a4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1903a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1903a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1903ac: 0x28820000  slti        $v0, $a0, 0x0
    ctx->pc = 0x1903acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1903b0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1903B0u;
    {
        const bool branch_taken_0x1903b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1903B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1903B0u;
        // 0x1903b4: 0xafa30020  sw          $v1, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1903b0) {
            ctx->pc = 0x1903C0u;
            goto label_1903c0;
        }
    }
    ctx->pc = 0x1903B8u;
    // 0x1903b8: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x1903b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1903bc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1903bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1903c0:
    // 0x1903c0: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x1903c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1903c4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1903C4u;
    {
        const bool branch_taken_0x1903c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1903C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1903C4u;
        // 0x1903c8: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1903c4) {
            ctx->pc = 0x1903DCu;
            goto label_1903dc;
        }
    }
    ctx->pc = 0x1903CCu;
    // 0x1903cc: 0x8e230278  lw          $v1, 0x278($s1)
    ctx->pc = 0x1903ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x1903d0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1903d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1903d4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1903D4u;
    {
        const bool branch_taken_0x1903d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1903D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1903D4u;
        // 0x1903d8: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1903d4) {
            ctx->pc = 0x1903E0u;
            goto label_1903e0;
        }
    }
    ctx->pc = 0x1903DCu;
label_1903dc:
    // 0x1903dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1903dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1903e0:
    // 0x1903e0: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x1903e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x1903e4: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x1903e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1903e8: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x1903e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x1903ec: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x1903ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x1903f0: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x1903f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x1903f4: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x1903f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1903f8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1903f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1903fc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1903fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x190400: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x190400u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190404: 0x8e240610  lw          $a0, 0x610($s1)
    ctx->pc = 0x190404u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1552)));
    // 0x190408: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x190408u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19040c: 0xc07f676  jal         func_1FD9D8
    ctx->pc = 0x19040Cu;
    SET_GPR_U32(ctx, 31, 0x190414u);
    ctx->pc = 0x190410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19040Cu;
    // 0x190410: 0xe440000c  swc1        $f0, 0xC($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD9D8u, 0x19040Cu, 0x190414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190414u;
label_190414:
    // 0x190414: 0x8e240610  lw          $a0, 0x610($s1)
    ctx->pc = 0x190414u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1552)));
    // 0x190418: 0x24030053  addiu       $v1, $zero, 0x53
    ctx->pc = 0x190418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    // 0x19041c: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x19041cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x190420: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x190420u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190424: 0xa4830046  sh          $v1, 0x46($a0)
    ctx->pc = 0x190424u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 70), (uint16_t)GPR_U32(ctx, 3));
    // 0x190428: 0x8e220610  lw          $v0, 0x610($s1)
    ctx->pc = 0x190428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1552)));
    // 0x19042c: 0xac46004c  sw          $a2, 0x4C($v0)
    ctx->pc = 0x19042cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 6));
    // 0x190430: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x190430u;
    SET_GPR_U32(ctx, 31, 0x190438u);
    ctx->pc = 0x190434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190430u;
    // 0x190434: 0x8e240610  lw          $a0, 0x610($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1552)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x190430u, 0x190438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190438u;
label_190438:
    // 0x190438: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x190438u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x19043c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x19043cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x190440: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x190440u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x190444: 0x27b20020  addiu       $s2, $sp, 0x20
    ctx->pc = 0x190444u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x190448: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x190448u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x19044c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19044cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x190450: 0x27b30040  addiu       $s3, $sp, 0x40
    ctx->pc = 0x190450u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x190454: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x190454u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x190458: 0x27b40050  addiu       $s4, $sp, 0x50
    ctx->pc = 0x190458u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x19045c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x19045cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x190460: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x190460u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x190464: 0x27b50060  addiu       $s5, $sp, 0x60
    ctx->pc = 0x190464u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x190468: 0xe6400004  swc1        $f0, 0x4($s2)
    ctx->pc = 0x190468u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x19046c: 0x26d04380  addiu       $s0, $s6, 0x4380
    ctx->pc = 0x19046cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 17280));
    // 0x190470: 0x3c01c02a  lui         $at, 0xC02A
    ctx->pc = 0x190470u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49194 << 16));
    // 0x190474: 0x34213d71  ori         $at, $at, 0x3D71
    ctx->pc = 0x190474u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)15729);
    // 0x190478: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x190478u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x19047c: 0x27b60070  addiu       $s6, $sp, 0x70
    ctx->pc = 0x19047cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x190480: 0xe6410008  swc1        $f1, 0x8($s2)
    ctx->pc = 0x190480u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x190484: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x190484u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190488: 0xe654000c  swc1        $f20, 0xC($s2)
    ctx->pc = 0x190488u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x19048c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19048cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190490: 0x3c013fe1  lui         $at, 0x3FE1
    ctx->pc = 0x190490u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16353 << 16));
    // 0x190494: 0x3421eb85  ori         $at, $at, 0xEB85
    ctx->pc = 0x190494u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)60293);
    // 0x190498: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x190498u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19049c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x19049cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1904a0: 0xe7a20040  swc1        $f2, 0x40($sp)
    ctx->pc = 0x1904a0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1904a4: 0x3c013eae  lui         $at, 0x3EAE
    ctx->pc = 0x1904a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16046 << 16));
    // 0x1904a8: 0x3421147b  ori         $at, $at, 0x147B
    ctx->pc = 0x1904a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)5243);
    // 0x1904ac: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1904acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1904b0: 0xe6600008  swc1        $f0, 0x8($s3)
    ctx->pc = 0x1904b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
    // 0x1904b4: 0xe6610004  swc1        $f1, 0x4($s3)
    ctx->pc = 0x1904b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
    // 0x1904b8: 0xe674000c  swc1        $f20, 0xC($s3)
    ctx->pc = 0x1904b8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
    // 0x1904bc: 0x3c01bce5  lui         $at, 0xBCE5
    ctx->pc = 0x1904bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48357 << 16));
    // 0x1904c0: 0x34216042  ori         $at, $at, 0x6042
    ctx->pc = 0x1904c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)24642);
    // 0x1904c4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1904c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1904c8: 0xe7a20050  swc1        $f2, 0x50($sp)
    ctx->pc = 0x1904c8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1904cc: 0xe6800008  swc1        $f0, 0x8($s4)
    ctx->pc = 0x1904ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 8), bits); }
    // 0x1904d0: 0xe6810004  swc1        $f1, 0x4($s4)
    ctx->pc = 0x1904d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
    // 0x1904d4: 0xe694000c  swc1        $f20, 0xC($s4)
    ctx->pc = 0x1904d4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 12), bits); }
    // 0x1904d8: 0x3c01bfee  lui         $at, 0xBFEE
    ctx->pc = 0x1904d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49134 << 16));
    // 0x1904dc: 0x3421147b  ori         $at, $at, 0x147B
    ctx->pc = 0x1904dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)5243);
    // 0x1904e0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1904e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1904e4: 0xe7a20060  swc1        $f2, 0x60($sp)
    ctx->pc = 0x1904e4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x1904e8: 0xe6a00008  swc1        $f0, 0x8($s5)
    ctx->pc = 0x1904e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 8), bits); }
    // 0x1904ec: 0xe6a10004  swc1        $f1, 0x4($s5)
    ctx->pc = 0x1904ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 4), bits); }
    // 0x1904f0: 0xe6b4000c  swc1        $f20, 0xC($s5)
    ctx->pc = 0x1904f0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 12), bits); }
    // 0x1904f4: 0x3c01c06e  lui         $at, 0xC06E
    ctx->pc = 0x1904f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49262 << 16));
    // 0x1904f8: 0x3421b852  ori         $at, $at, 0xB852
    ctx->pc = 0x1904f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47186);
    // 0x1904fc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1904fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x190500: 0xe7a20070  swc1        $f2, 0x70($sp)
    ctx->pc = 0x190500u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x190504: 0xe6c10004  swc1        $f1, 0x4($s6)
    ctx->pc = 0x190504u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 4), bits); }
    // 0x190508: 0xe6c00008  swc1        $f0, 0x8($s6)
    ctx->pc = 0x190508u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 8), bits); }
    // 0x19050c: 0xc07f886  jal         func_1FE218
    ctx->pc = 0x19050Cu;
    SET_GPR_U32(ctx, 31, 0x190514u);
    ctx->pc = 0x190510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19050Cu;
    // 0x190510: 0xe6d4000c  swc1        $f20, 0xC($s6) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE218u, 0x19050Cu, 0x190514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190514u;
label_190514:
    // 0x190514: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x190514u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190518: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x190518u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19051c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x19051cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x190520: 0xc07f886  jal         func_1FE218
    ctx->pc = 0x190520u;
    SET_GPR_U32(ctx, 31, 0x190528u);
    ctx->pc = 0x190524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190520u;
    // 0x190524: 0xae220600  sw          $v0, 0x600($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1536), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE218u, 0x190520u, 0x190528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190528u;
label_190528:
    // 0x190528: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x190528u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19052c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19052cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190530: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x190530u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x190534: 0xc07f886  jal         func_1FE218
    ctx->pc = 0x190534u;
    SET_GPR_U32(ctx, 31, 0x19053Cu);
    ctx->pc = 0x190538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190534u;
    // 0x190538: 0xae220604  sw          $v0, 0x604($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1540), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE218u, 0x190534u, 0x19053Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19053Cu;
label_19053c:
    // 0x19053c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19053cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190540: 0xae220608  sw          $v0, 0x608($s1)
    ctx->pc = 0x190540u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1544), GPR_U32(ctx, 2));
    // 0x190544: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x190544u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190548: 0xc07f886  jal         func_1FE218
    ctx->pc = 0x190548u;
    SET_GPR_U32(ctx, 31, 0x190550u);
    ctx->pc = 0x19054Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190548u;
    // 0x19054c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE218u, 0x190548u, 0x190550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190550u;
label_190550:
    // 0x190550: 0x8e240600  lw          $a0, 0x600($s1)
    ctx->pc = 0x190550u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    // 0x190554: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x190554u;
    {
        const bool branch_taken_0x190554 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x190558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190554u;
        // 0x190558: 0xae22060c  sw          $v0, 0x60C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1548), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190554) {
            ctx->pc = 0x190594u;
            goto label_190594;
        }
    }
    ctx->pc = 0x19055Cu;
    // 0x19055c: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x19055cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x190560: 0xafa00080  sw          $zero, 0x80($sp)
    ctx->pc = 0x190560u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
    // 0x190564: 0xafa00084  sw          $zero, 0x84($sp)
    ctx->pc = 0x190564u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
    // 0x190568: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x190568u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19056c: 0xafa00088  sw          $zero, 0x88($sp)
    ctx->pc = 0x19056cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 0));
    // 0x190570: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x190570u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190574: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x190574u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x190578: 0x26250080  addiu       $a1, $s1, 0x80
    ctx->pc = 0x190578u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x19057c: 0xc07f676  jal         func_1FD9D8
    ctx->pc = 0x19057Cu;
    SET_GPR_U32(ctx, 31, 0x190584u);
    ctx->pc = 0x190580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19057Cu;
    // 0x190580: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD9D8u, 0x19057Cu, 0x190584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190584u;
label_190584:
    // 0x190584: 0x8e230600  lw          $v1, 0x600($s1)
    ctx->pc = 0x190584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    // 0x190588: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x190588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19058c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x19058cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x190590: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x190590u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_190594:
    // 0x190594: 0x8e240604  lw          $a0, 0x604($s1)
    ctx->pc = 0x190594u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1540)));
    // 0x190598: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x190598u;
    {
        const bool branch_taken_0x190598 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x19059Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190598u;
        // 0x19059c: 0x27a20080  addiu       $v0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190598) {
            ctx->pc = 0x1905D4u;
            goto label_1905d4;
        }
    }
    ctx->pc = 0x1905A0u;
    // 0x1905a0: 0xafa00080  sw          $zero, 0x80($sp)
    ctx->pc = 0x1905a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
    // 0x1905a4: 0xafa00084  sw          $zero, 0x84($sp)
    ctx->pc = 0x1905a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
    // 0x1905a8: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1905a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1905ac: 0xafa00088  sw          $zero, 0x88($sp)
    ctx->pc = 0x1905acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 0));
    // 0x1905b0: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1905b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1905b4: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x1905b4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x1905b8: 0x26250080  addiu       $a1, $s1, 0x80
    ctx->pc = 0x1905b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x1905bc: 0xc07f676  jal         func_1FD9D8
    ctx->pc = 0x1905BCu;
    SET_GPR_U32(ctx, 31, 0x1905C4u);
    ctx->pc = 0x1905C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1905BCu;
    // 0x1905c0: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD9D8u, 0x1905BCu, 0x1905C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1905C4u;
label_1905c4:
    // 0x1905c4: 0x8e230604  lw          $v1, 0x604($s1)
    ctx->pc = 0x1905c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1540)));
    // 0x1905c8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1905c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1905cc: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1905ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1905d0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1905d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1905d4:
    // 0x1905d4: 0x8e240608  lw          $a0, 0x608($s1)
    ctx->pc = 0x1905d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1544)));
    // 0x1905d8: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x1905D8u;
    {
        const bool branch_taken_0x1905d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1905DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1905D8u;
        // 0x1905dc: 0x27a20080  addiu       $v0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1905d8) {
            ctx->pc = 0x190614u;
            goto label_190614;
        }
    }
    ctx->pc = 0x1905E0u;
    // 0x1905e0: 0xafa00080  sw          $zero, 0x80($sp)
    ctx->pc = 0x1905e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
    // 0x1905e4: 0xafa00084  sw          $zero, 0x84($sp)
    ctx->pc = 0x1905e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
    // 0x1905e8: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x1905e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1905ec: 0xafa00088  sw          $zero, 0x88($sp)
    ctx->pc = 0x1905ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 0));
    // 0x1905f0: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1905f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1905f4: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x1905f4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x1905f8: 0x26250080  addiu       $a1, $s1, 0x80
    ctx->pc = 0x1905f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x1905fc: 0xc07f676  jal         func_1FD9D8
    ctx->pc = 0x1905FCu;
    SET_GPR_U32(ctx, 31, 0x190604u);
    ctx->pc = 0x190600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1905FCu;
    // 0x190600: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD9D8u, 0x1905FCu, 0x190604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190604u;
label_190604:
    // 0x190604: 0x8e230608  lw          $v1, 0x608($s1)
    ctx->pc = 0x190604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1544)));
    // 0x190608: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x190608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19060c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x19060cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x190610: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x190610u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_190614:
    // 0x190614: 0x8e24060c  lw          $a0, 0x60C($s1)
    ctx->pc = 0x190614u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1548)));
    // 0x190618: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x190618u;
    {
        const bool branch_taken_0x190618 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x19061Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190618u;
        // 0x19061c: 0x27a70080  addiu       $a3, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190618) {
            ctx->pc = 0x190650u;
            goto label_190650;
        }
    }
    ctx->pc = 0x190620u;
    // 0x190620: 0xafa00080  sw          $zero, 0x80($sp)
    ctx->pc = 0x190620u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
    // 0x190624: 0xafa00084  sw          $zero, 0x84($sp)
    ctx->pc = 0x190624u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
    // 0x190628: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x190628u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19062c: 0xafa00088  sw          $zero, 0x88($sp)
    ctx->pc = 0x19062cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 0));
    // 0x190630: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x190630u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190634: 0xe4f4000c  swc1        $f20, 0xC($a3)
    ctx->pc = 0x190634u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
    // 0x190638: 0xc07f676  jal         func_1FD9D8
    ctx->pc = 0x190638u;
    SET_GPR_U32(ctx, 31, 0x190640u);
    ctx->pc = 0x19063Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190638u;
    // 0x19063c: 0x26250080  addiu       $a1, $s1, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD9D8u, 0x190638u, 0x190640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190640u;
label_190640:
    // 0x190640: 0x8e23060c  lw          $v1, 0x60C($s1)
    ctx->pc = 0x190640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1548)));
    // 0x190644: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x190644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x190648: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x190648u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x19064c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x19064cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_190650:
    // 0x190650: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x190650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x190654: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x190654u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190658: 0xa6220f8e  sh          $v0, 0xF8E($s1)
    ctx->pc = 0x190658u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 3982), (uint16_t)GPR_U32(ctx, 2));
    // 0x19065c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19065cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190660: 0xa6220f88  sh          $v0, 0xF88($s1)
    ctx->pc = 0x190660u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 3976), (uint16_t)GPR_U32(ctx, 2));
    // 0x190664: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x190664u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x190668: 0xa6220f8a  sh          $v0, 0xF8A($s1)
    ctx->pc = 0x190668u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 3978), (uint16_t)GPR_U32(ctx, 2));
    // 0x19066c: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x19066Cu;
    SET_GPR_U32(ctx, 31, 0x190674u);
    ctx->pc = 0x190670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19066Cu;
    // 0x190670: 0xa6220f8c  sh          $v0, 0xF8C($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 3980), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x19066Cu, 0x190674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190674u;
label_190674:
    // 0x190674: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x190674u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190678: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x190678u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19067c: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x19067Cu;
    SET_GPR_U32(ctx, 31, 0x190684u);
    ctx->pc = 0x190680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19067Cu;
    // 0x190680: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x19067Cu, 0x190684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190684u;
label_190684:
    // 0x190684: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x190684u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190688: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x190688u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19068c: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x19068Cu;
    SET_GPR_U32(ctx, 31, 0x190694u);
    ctx->pc = 0x190690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19068Cu;
    // 0x190690: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x19068Cu, 0x190694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190694u;
label_190694:
    // 0x190694: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x190694u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190698: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x190698u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x19069c: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x19069Cu;
    SET_GPR_U32(ctx, 31, 0x1906A4u);
    ctx->pc = 0x1906A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19069Cu;
    // 0x1906a0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x19069Cu, 0x1906A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1906A4u;
label_1906a4:
    // 0x1906a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1906a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1906a8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1906a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1906ac: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x1906ACu;
    SET_GPR_U32(ctx, 31, 0x1906B4u);
    ctx->pc = 0x1906B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1906ACu;
    // 0x1906b0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x1906ACu, 0x1906B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1906B4u;
label_1906b4:
    // 0x1906b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1906b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1906b8: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x1906b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1906bc: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x1906BCu;
    SET_GPR_U32(ctx, 31, 0x1906C4u);
    ctx->pc = 0x1906C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1906BCu;
    // 0x1906c0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x1906BCu, 0x1906C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1906C4u;
label_1906c4:
    // 0x1906c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1906c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1906c8: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x1906c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1906cc: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x1906CCu;
    SET_GPR_U32(ctx, 31, 0x1906D4u);
    ctx->pc = 0x1906D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1906CCu;
    // 0x1906d0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x1906CCu, 0x1906D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1906D4u;
label_1906d4:
    // 0x1906d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1906d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1906d8: 0x24050042  addiu       $a1, $zero, 0x42
    ctx->pc = 0x1906d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x1906dc: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x1906DCu;
    SET_GPR_U32(ctx, 31, 0x1906E4u);
    ctx->pc = 0x1906E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1906DCu;
    // 0x1906e0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x1906DCu, 0x1906E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1906E4u;
label_1906e4:
    // 0x1906e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1906e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1906e8: 0x24050043  addiu       $a1, $zero, 0x43
    ctx->pc = 0x1906e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x1906ec: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x1906ECu;
    SET_GPR_U32(ctx, 31, 0x1906F4u);
    ctx->pc = 0x1906F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1906ECu;
    // 0x1906f0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x1906ECu, 0x1906F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1906F4u;
label_1906f4:
    // 0x1906f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1906f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1906f8: 0x24050044  addiu       $a1, $zero, 0x44
    ctx->pc = 0x1906f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x1906fc: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x1906FCu;
    SET_GPR_U32(ctx, 31, 0x190704u);
    ctx->pc = 0x190700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1906FCu;
    // 0x190700: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x1906FCu, 0x190704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190704u;
label_190704:
    // 0x190704: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x190704u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x190708: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x190708u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19070c: 0x24494010  addiu       $t1, $v0, 0x4010
    ctx->pc = 0x19070cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 16400));
    // 0x190710: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x190710u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x190714: 0x252b0001  addiu       $t3, $t1, 0x1
    ctx->pc = 0x190714u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x190718: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x190718u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x19071c: 0x0  nop
    ctx->pc = 0x19071cu;
    // NOP
label_190720:
    // 0x190720: 0x691021  addu        $v0, $v1, $t1
    ctx->pc = 0x190720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x190724: 0x90460000  lbu         $a2, 0x0($v0)
    ctx->pc = 0x190724u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x190728: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x190728u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19072c: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x19072Cu;
    {
        const bool branch_taken_0x19072c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19072Cu;
        // 0x190730: 0x24880001  addiu       $t0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19072c) {
            ctx->pc = 0x1907C4u;
            goto label_1907c4;
        }
    }
    ctx->pc = 0x190734u;
    // 0x190734: 0x0  nop
    ctx->pc = 0x190734u;
    // NOP
label_190738:
    // 0x190738: 0xca102a  slt         $v0, $a2, $t2
    ctx->pc = 0x190738u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x19073c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19073Cu;
    {
        const bool branch_taken_0x19073c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x190740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19073Cu;
        // 0x190740: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19073c) {
            ctx->pc = 0x19074Cu;
            goto label_19074c;
        }
    }
    ctx->pc = 0x190744u;
    // 0x190744: 0xc3102a  slt         $v0, $a2, $v1
    ctx->pc = 0x190744u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x190748: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x190748u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19074c:
    // 0x19074c: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x19074cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x190750: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x190750u;
    {
        const bool branch_taken_0x190750 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x190754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190750u;
        // 0x190754: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190750) {
            ctx->pc = 0x190768u;
            goto label_190768;
        }
    }
    ctx->pc = 0x190758u;
    // 0x190758: 0x8e230278  lw          $v1, 0x278($s1)
    ctx->pc = 0x190758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x19075c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19075cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x190760: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x190760u;
    {
        const bool branch_taken_0x190760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190760u;
        // 0x190764: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190760) {
            ctx->pc = 0x19076Cu;
            goto label_19076c;
        }
    }
    ctx->pc = 0x190768u;
label_190768:
    // 0x190768: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x190768u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19076c:
    // 0x19076c: 0x8c820154  lw          $v0, 0x154($a0)
    ctx->pc = 0x19076cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
    // 0x190770: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x190770u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190774: 0xca182a  slt         $v1, $a2, $t2
    ctx->pc = 0x190774u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x190778: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x190778u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x19077c: 0xac820154  sw          $v0, 0x154($a0)
    ctx->pc = 0x19077cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 2));
    // 0x190780: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x190780u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x190784: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x190784u;
    {
        const bool branch_taken_0x190784 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x190788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190784u;
        // 0x190788: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190784) {
            ctx->pc = 0x190794u;
            goto label_190794;
        }
    }
    ctx->pc = 0x19078Cu;
    // 0x19078c: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x19078cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x190790: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x190790u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_190794:
    // 0x190794: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x190794u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x190798: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x190798u;
    {
        const bool branch_taken_0x190798 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19079Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190798u;
        // 0x19079c: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190798) {
            ctx->pc = 0x1907B0u;
            goto label_1907b0;
        }
    }
    ctx->pc = 0x1907A0u;
    // 0x1907a0: 0x8e230278  lw          $v1, 0x278($s1)
    ctx->pc = 0x1907a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x1907a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1907a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1907a8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1907A8u;
    {
        const bool branch_taken_0x1907a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1907ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1907A8u;
        // 0x1907ac: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1907a8) {
            ctx->pc = 0x1907B4u;
            goto label_1907b4;
        }
    }
    ctx->pc = 0x1907B0u;
label_1907b0:
    // 0x1907b0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1907b0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1907b4:
    // 0x1907b4: 0x8c620154  lw          $v0, 0x154($v1)
    ctx->pc = 0x1907b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 340)));
    // 0x1907b8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1907b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1907bc: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x1907bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x1907c0: 0xac620154  sw          $v0, 0x154($v1)
    ctx->pc = 0x1907c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 340), GPR_U32(ctx, 2));
label_1907c4:
    // 0x1907c4: 0xe92021  addu        $a0, $a3, $t1
    ctx->pc = 0x1907c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x1907c8: 0xeb2821  addu        $a1, $a3, $t3
    ctx->pc = 0x1907c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
    // 0x1907cc: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x1907ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1907d0: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x1907d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1907d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1907d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1907d8: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x1907d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1907dc: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1907DCu;
    {
        const bool branch_taken_0x1907dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1907dc) {
            ctx->pc = 0x1907E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1907DCu;
            // 0x1907e0: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1907F8u;
            goto label_1907f8;
        }
    }
    ctx->pc = 0x1907E4u;
    // 0x1907e4: 0x922302b4  lbu         $v1, 0x2B4($s1)
    ctx->pc = 0x1907e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x1907e8: 0xc3102a  slt         $v0, $a2, $v1
    ctx->pc = 0x1907e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1907ec: 0x5440ffd2  bnel        $v0, $zero, . + 4 + (-0x2E << 2)
    ctx->pc = 0x1907ECu;
    {
        const bool branch_taken_0x1907ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1907ec) {
            ctx->pc = 0x1907F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1907ECu;
            // 0x1907f0: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x190738u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_190738;
        }
    }
    ctx->pc = 0x1907F4u;
    // 0x1907f4: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x1907f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1907f8:
    // 0x1907f8: 0x2882000a  slti        $v0, $a0, 0xA
    ctx->pc = 0x1907f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x1907fc: 0x1440ffc8  bnez        $v0, . + 4 + (-0x38 << 2)
    ctx->pc = 0x1907FCu;
    {
        const bool branch_taken_0x1907fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x190800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1907FCu;
        // 0x190800: 0x41840  sll         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1907fc) {
            ctx->pc = 0x190720u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_190720;
        }
    }
    ctx->pc = 0x190804u;
    // 0x190804: 0x26e24010  addiu       $v0, $s7, 0x4010
    ctx->pc = 0x190804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 16400));
    // 0x190808: 0x90560013  lbu         $s6, 0x13($v0)
    ctx->pc = 0x190808u;
    SET_GPR_ZE32(ctx, 22, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 19)));
    // 0x19080c: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x19080cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x190810: 0x90440008  lbu         $a0, 0x8($v0)
    ctx->pc = 0x190810u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x190814: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x190814u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190818: 0x922302b4  lbu         $v1, 0x2B4($s1)
    ctx->pc = 0x190818u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x19081c: 0x28820000  slti        $v0, $a0, 0x0
    ctx->pc = 0x19081cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x190820: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x190820u;
    {
        const bool branch_taken_0x190820 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x190824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190820u;
        // 0x190824: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190820) {
            ctx->pc = 0x190830u;
            goto label_190830;
        }
    }
    ctx->pc = 0x190828u;
    // 0x190828: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x190828u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x19082c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x19082cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_190830:
    // 0x190830: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x190830u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x190834: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x190834u;
    {
        const bool branch_taken_0x190834 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x190838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190834u;
        // 0x190838: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190834) {
            ctx->pc = 0x19084Cu;
            goto label_19084c;
        }
    }
    ctx->pc = 0x19083Cu;
    // 0x19083c: 0x8e230278  lw          $v1, 0x278($s1)
    ctx->pc = 0x19083cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x190840: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x190840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x190844: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x190844u;
    {
        const bool branch_taken_0x190844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190844u;
        // 0x190848: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190844) {
            ctx->pc = 0x190850u;
            goto label_190850;
        }
    }
    ctx->pc = 0x19084Cu;
label_19084c:
    // 0x19084c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19084cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_190850:
    // 0x190850: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x190850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190854: 0xc051f18  jal         func_147C60
    ctx->pc = 0x190854u;
    SET_GPR_U32(ctx, 31, 0x19085Cu);
    ctx->pc = 0x190858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190854u;
    // 0x190858: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C60u, 0x190854u, 0x19085Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19085Cu;
label_19085c:
    // 0x19085c: 0x12c0002c  beqz        $s6, . + 4 + (0x2C << 2)
    ctx->pc = 0x19085Cu;
    {
        const bool branch_taken_0x19085c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x190860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19085Cu;
        // 0x190860: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19085c) {
            ctx->pc = 0x190910u;
            goto label_190910;
        }
    }
    ctx->pc = 0x190864u;
    // 0x190864: 0x3c0a02d  daddu       $s4, $fp, $zero
    ctx->pc = 0x190864u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190868: 0x90434022  lbu         $v1, 0x4022($v0)
    ctx->pc = 0x190868u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 16418)));
    // 0x19086c: 0x27b70030  addiu       $s7, $sp, 0x30
    ctx->pc = 0x19086cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x190870: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x190870u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190874: 0x39880  sll         $s3, $v1, 2
    ctx->pc = 0x190874u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x190878: 0x922302b4  lbu         $v1, 0x2B4($s1)
    ctx->pc = 0x190878u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x19087c: 0x0  nop
    ctx->pc = 0x19087cu;
    // NOP
label_190880:
    // 0x190880: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x190880u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190884: 0x6400002  bltz        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x190884u;
    {
        const bool branch_taken_0x190884 = (GPR_S64(ctx, 18) < 0);
        ctx->pc = 0x190888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190884u;
        // 0x190888: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190884) {
            ctx->pc = 0x190890u;
            goto label_190890;
        }
    }
    ctx->pc = 0x19088Cu;
    // 0x19088c: 0x243102a  slt         $v0, $s2, $v1
    ctx->pc = 0x19088cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_190890:
    // 0x190890: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x190890u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x190894: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x190894u;
    {
        const bool branch_taken_0x190894 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x190898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190894u;
        // 0x190898: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190894) {
            ctx->pc = 0x1908A8u;
            goto label_1908a8;
        }
    }
    ctx->pc = 0x19089Cu;
    // 0x19089c: 0x8e220278  lw          $v0, 0x278($s1)
    ctx->pc = 0x19089cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x1908a0: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1908a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1908a4: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1908a4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1908a8:
    // 0x1908a8: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x1908a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1908ac: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1908acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1908b0: 0xc051f18  jal         func_147C60
    ctx->pc = 0x1908B0u;
    SET_GPR_U32(ctx, 31, 0x1908B8u);
    ctx->pc = 0x1908B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1908B0u;
    // 0x1908b4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C60u, 0x1908B0u, 0x1908B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1908B8u;
label_1908b8:
    // 0x1908b8: 0xfba00030  sqc2        $vf0, 0x30($sp)
    ctx->pc = 0x1908b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1908bc: 0xda840000  lqc2        $vf4, 0x0($s4)
    ctx->pc = 0x1908bcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1908c0: 0xdba50000  lqc2        $vf5, 0x0($sp)
    ctx->pc = 0x1908c0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1908c4: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1908c4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1908c8: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x1908c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1908cc: 0xdae40000  lqc2        $vf4, 0x0($s7)
    ctx->pc = 0x1908ccu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x1908d0: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1908d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1908d4: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x1908d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1908d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1908d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1908dc: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x1908dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1908e0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1908e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1908e4: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x1908e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1908e8: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x1908e8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x1908ec: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x1908ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1908f0: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x1908f0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x1908f4: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x1908f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1908f8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1908f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1908fc: 0xc051f10  jal         func_147C40
    ctx->pc = 0x1908FCu;
    SET_GPR_U32(ctx, 31, 0x190904u);
    ctx->pc = 0x190900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1908FCu;
    // 0x190900: 0xe7a20018  swc1        $f2, 0x18($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C40u, 0x1908FCu, 0x190904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190904u;
label_190904:
    // 0x190904: 0x2b6102b  sltu        $v0, $s5, $s6
    ctx->pc = 0x190904u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x190908: 0x5440ffdd  bnel        $v0, $zero, . + 4 + (-0x23 << 2)
    ctx->pc = 0x190908u;
    {
        const bool branch_taken_0x190908 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x190908) {
            ctx->pc = 0x19090Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x190908u;
            // 0x19090c: 0x922302b4  lbu         $v1, 0x2B4($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x190880u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_190880;
        }
    }
    ctx->pc = 0x190910u;
label_190910:
    // 0x190910: 0x7bb00120  lq          $s0, 0x120($sp)
    ctx->pc = 0x190910u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x190914: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x190914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x190918: 0x7bb10110  lq          $s1, 0x110($sp)
    ctx->pc = 0x190918u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x19091c: 0x7bb20100  lq          $s2, 0x100($sp)
    ctx->pc = 0x19091cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x190920: 0x7bb300f0  lq          $s3, 0xF0($sp)
    ctx->pc = 0x190920u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x190924: 0x7bb400e0  lq          $s4, 0xE0($sp)
    ctx->pc = 0x190924u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x190928: 0x7bb500d0  lq          $s5, 0xD0($sp)
    ctx->pc = 0x190928u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x19092c: 0x7bb600c0  lq          $s6, 0xC0($sp)
    ctx->pc = 0x19092cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x190930: 0x7bb700b0  lq          $s7, 0xB0($sp)
    ctx->pc = 0x190930u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x190934: 0x7bbe00a0  lq          $fp, 0xA0($sp)
    ctx->pc = 0x190934u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x190938: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x190938u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x19093c: 0xc7b40130  lwc1        $f20, 0x130($sp)
    ctx->pc = 0x19093cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x190940: 0x3e00008  jr          $ra
    ctx->pc = 0x190940u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x190944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190940u;
        // 0x190944: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x190940u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x190948u;
}
